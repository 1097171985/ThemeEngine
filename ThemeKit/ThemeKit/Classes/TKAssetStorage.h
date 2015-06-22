//
//  TKAssetStorage.h
//  ThemeKit
//
//  Created by Alexander Zielenski on 6/13/15.
//  Copyright © 2015 Alex Zielenski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ThemeKit/TKElement.h>
#import <ThemeKit/TKTypes.h>

// ThemeKit is for editing files ONLY, you may not create a new file with this
@interface TKAssetStorage : NSObject
@property (readonly, strong) NSSet<TKElement *> *elements;
@property (strong) NSUndoManager *undoManager;
@property (assign, getter=isDirty) BOOL dirty;

+ (instancetype)assetStorageWithPath:(NSString *)path;
- (instancetype)initWithPath:(NSString *)path;

- (TKElement *)elementWithName:(NSString *)name;
- (NSSet<TKRendition *> *)allRenditions;

@end
