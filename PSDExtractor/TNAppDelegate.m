//
//  TNAppDelegate.m
//  PSDExtractor
//
//  Created by Eugene Tulushev on 23.12.13.
//  Copyright (c) 2013 2Nova Interactive. All rights reserved.
//

#import "TNAppDelegate.h"
#import "TNExtractor.h"

@implementation TNAppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
     [self saveToDisk:[[TNExtractor sharedExtractor] extractDictionaryFromCurrentPhotoshopDocument]];
}

- (void)saveToDisk:(NSDictionary *)dictionary
{
    NSLog(@"saving data");
    NSError *error = nil;
    NSData *representation = [NSPropertyListSerialization dataWithPropertyList:dictionary format:NSPropertyListXMLFormat_v1_0 options:0 error:&error];
    if (!error)
    {
        NSString *documentName = dictionary[@"document"][@"name"];
        
        BOOL ok = [representation writeToFile:[NSString stringWithFormat:@"%@.plist", documentName] atomically:YES];
        if (ok)
        {
            NSLog(@"ok!");
        }
        else
        {
            NSLog(@"error writing to file: %@", documentName);
        }
    }
    else
    {
        NSLog(@"error: %@", error);
    }
}

@end
