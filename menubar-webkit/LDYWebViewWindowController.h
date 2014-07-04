//
//  LDYNewWindowController.h
//  menubar-webkit
//
//  Created by Xhacker Liu on 7/2/14.
//  Copyright (c) 2014 Xhacker. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface LDYWebViewWindowController : NSWindowController

@property (weak) IBOutlet WebView *webView;

- (id)initWithURLString:(NSString *)URLString
                  width:(NSInteger)width
                 height:(NSInteger)height;

@end
