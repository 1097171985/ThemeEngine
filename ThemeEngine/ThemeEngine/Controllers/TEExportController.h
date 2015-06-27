//
//  TEExportController.h
//  ThemeEngine
//
//  Created by Alexander Zielenski on 6/25/15.
//  Copyright © 2015 Alex Zielenski. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TEExportController : NSObject
@property (strong) NSMutableDictionary *applicationMap;

/**
 *  Shared Instance of TEExportController
 */
+ (instancetype)sharedExportController;

+ (NSArray *)bundleIdentifiersForUTI:(NSString *)type;

- (NSString *)bundleIdentifierForUTI:(NSString *)type;
- (void)setBundleIdentifier:(NSString *)bundleIdentifier forUTI:(NSString *)type;

@end
