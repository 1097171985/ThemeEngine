//
//  TEGradientInfoInspector.m
//  ThemeEngine
//
//  Created by Alexander Zielenski on 6/18/15.
//  Copyright © 2015 Alex Zielenski. All rights reserved.
//

#import "TEGradientInfoInspector.h"
#import <ThemeKit/TKGradientRendition.h>

@interface TEGradientInfoInspector ()

@end

@implementation TEGradientInfoInspector

- (void)viewDidLoad {
    [super viewDidLoad];
    [self bind:@"gradients"
      toObject:self
   withKeyPath:@"inspectorController.representedObject.selection.gradient"
       options:@{ NSRaisesForNotApplicableKeysBindingOption: @(NO) }];
}

- (NSStackViewVisibilityPriority)visibilityPriorityForInspectedObjects:(NSArray *)objects {
    if (objects.count != 1) {
        return NSStackViewVisibilityPriorityNotVisible;
    }
    
    id object = objects[0];
    return [object isKindOfClass:[TKGradientRendition class]] ? NSStackViewVisibilityPriorityMustHold : NSStackViewVisibilityPriorityNotVisible;
}

@end
