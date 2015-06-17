//
//  TEGradientInspector.h
//  ThemeEngine
//
//  Created by Alexander Zielenski on 6/16/15.
//  Copyright © 2015 Alex Zielenski. All rights reserved.
//

#import "TEInspectorDetailController.h"
#import "TEGradientEditor.h"

@interface TEGradientInspector : TEInspectorDetailController
// for programmatic binding
@property IBOutlet NSViewController *inspectorController;
@property IBOutlet TEGradientEditor *gradientEditor;
@end
