//
//  TEWelcomeController.h
//  ThemeEngine
//
//  Created by Alexander Zielenski on 6/26/15.
//  Copyright © 2015 Alex Zielenski. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TEBackgroundColorView.h"
@interface TEWelcomeController : NSWindowController
@property (weak) IBOutlet TEBackgroundColorView *backgroundView;
@end
