//
//  StatusItemButton.h
//  MenuBarController
//
//  Created by Дмитрий Николаев on 19.01.15.
//  Copyright (c) 2015 Dmitry Nikolaev. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class StatusItemButton;

@protocol StatusItemButtonDelegate <NSObject>

- (void) statusItemButtonLeftClick: (StatusItemButton *) button;
- (void) statusItemButtonRightClick: (StatusItemButton *) button;

@end

@interface StatusItemButton : NSView

@property (strong) NSImage *image;
@property (unsafe_unretained) id<StatusItemButtonDelegate> delegate;

- (instancetype) initWithImage: (NSImage *) image;

@end
