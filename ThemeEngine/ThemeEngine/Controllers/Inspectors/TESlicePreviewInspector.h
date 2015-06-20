//
//  TESlicePreviewInspector.h
//  ThemeEngine
//
//  Created by Alexander Zielenski on 6/19/15.
//  Copyright © 2015 Alex Zielenski. All rights reserved.
//

#import "TEInspectorDetailController.h"
#import "TESliceImageView.h"
@class TEInspectorController;
@interface TESlicePreviewInspector : TEInspectorDetailController
@property (strong) IBOutlet TESliceImageView *sliceImageView;
@property (weak) IBOutlet TEInspectorController *inspectorController;
@end
