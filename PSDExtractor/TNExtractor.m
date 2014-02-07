//
//  TNExtractor.m
//  PSDExtractor
//
//  Created by Eugene Tulushev on 27.12.13.
//  Copyright (c) 2013 2Nova Interactive. All rights reserved.
//

#import "TNExtractor.h"
#import "PhotoshopCC.h"

static NSString * const TNPhotoshopBundleIdentifier = @"com.adobe.Photoshop";
static NSString * const TNIllustratorBundleIdentifier = @"com.adobe.illustrator";
static NSString * const TNLayerKind = @"kind";
static NSString * const TNFontName = @"font";
static NSString * const TNFontSize = @"size";
static NSString * const TNFontBounds = @"bounds";

@interface TNExtractor ()

@property (nonatomic) NSInteger count;
@property (nonatomic) NSInteger layersCount;
@property (nonatomic) CGFloat documentFactor;
@property (nonatomic, strong) NSMutableArray *layers;

@end

@implementation TNExtractor

+ (TNExtractor *)sharedExtractor
{
    static TNExtractor *sharedExtractor = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^
                     {
                         sharedExtractor = [[self alloc] init];
                     }
                 );
    return sharedExtractor;
}

- (NSDictionary *)extractDictionaryFromCurrentPhotoshopDocument
{
    PhotoshopCCApplication *photoshopApplication = [SBApplication applicationWithBundleIdentifier:TNPhotoshopBundleIdentifier];
    
    PhotoshopCCE440 originalUnits = photoshopApplication.settings.rulerUnits;
    photoshopApplication.settings.rulerUnits = PhotoshopCCE445PixelUnits;
    photoshopApplication.settings.typeUnits = PhotoshopCCE450TraditionalSize;
    
    PhotoshopCCDocument *currentDocument = photoshopApplication.currentDocument;
    
    self.documentFactor = 1.0f / currentDocument.height;
    NSNumber *documentWidth = @(currentDocument.width * self.documentFactor);
    NSString *documentName = currentDocument.name;
    
    self.layers = [NSMutableArray array];
    
    if ([photoshopApplication isRunning])
    {
        SBElementArray *currentDocumentLayers = currentDocument.layers;
        
        self.layersCount = currentDocumentLayers.count;
        
        
        
        self.count = 1;
        
        for (PhotoshopCCLayer *layer in currentDocumentLayers)
        {
            PhotoshopCCArtLayer *layerGet = [layer get];
            
            PhotoshopCCE950 kind = layerGet.kind;
            
            NSLog(@"%li\tof\t%ld\t%@", (long)self.count, (long)self.layersCount, layerGet.name);
            
            NSArray *layerBounds = layerGet.bounds;
            
            if (kind == PhotoshopCCE950TextLayer && layerBounds && layerBounds.count == 4 && [layerBounds[2] integerValue] != 0)
            {
                PhotoshopCCTextObject *textObject = layerGet.textObject;
                
                NSString *fontName = textObject.font;
                
                NSNumber *size = @(textObject.size * self.documentFactor);
                
                NSNumber *x = @([layerBounds.firstObject doubleValue] * self.documentFactor);
                
                NSNumber *y = @([layerBounds[1] doubleValue] * self.documentFactor);
                
                NSNumber *width = @(([layerBounds[2] doubleValue] - [layerBounds.firstObject doubleValue]) * self.documentFactor);
                
                NSNumber *height = @(([layerBounds[3] doubleValue] - [layerBounds[1] doubleValue]) * self.documentFactor);
                
                NSString *contents = textObject.contents;
                
                NSDictionary *layerDictionary = @{@"font": @{@"name": fontName}, @"frame": @{@"x": x, @"y": y, @"width": width, @"height": height}, @"size": size, @"contents": contents};
                
                [self.layers addObject:layerDictionary];
            }
            
            self.count++;
        }
        
        photoshopApplication.settings.rulerUnits = originalUnits;
        
        return @{@"document": @{@"name": documentName, @"width": documentWidth}, @"layers": [self.layers copy]};
    }
    else
    {
        photoshopApplication.settings.rulerUnits = originalUnits;
        
        return @{};
    }
}

@end
