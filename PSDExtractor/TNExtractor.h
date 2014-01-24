//
//  TNExtractor.h
//  PSDExtractor
//
//  Created by Eugene Tulushev on 27.12.13.
//  Copyright (c) 2013 2Nova Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TNExtractor : NSObject

+ (TNExtractor *)sharedExtractor;

- (NSDictionary *)extractDictionaryFromCurrentPhotoshopDocument;

@end
