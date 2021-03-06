/*
 * DiffFileChooser.h
 *
 * Copyright (c) 2011-2012, GNUstep Project
 *
 * Author:  Wolfgang Lux <wolfgang.lux@gmail.com>
 * Date: March 2011
 * 
 * This file is part of EasyDiff.app.
 *
 * EasyDiff.app is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * EasyDiff.app is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyDiff.app; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#import <AppKit/AppKit.h>

@class FileIconView;

@interface DiffFileChooser : NSObject<NSUserInterfaceValidations>
{
  IBOutlet NSWindow *window;

  IBOutlet NSButton *leftButton;
  IBOutlet NSButton *rightButton;

  IBOutlet NSTextField *leftPath;
  IBOutlet NSTextField *rightPath;

  IBOutlet FileIconView *leftIcon;
  IBOutlet FileIconView *rightIcon;

  IBOutlet NSButton *compareButton;
}

- (NSString *)leftFileName;
- (NSString *)rightFileName;
- (void)setLeftFileName:(NSString *)fileName;
- (void)setRightFileName:(NSString *)fileName;

- (IBAction)showWindow: (id)sender;
- (IBAction)compare: (id)sender;
- (IBAction)chooseFile: (id)sender;

@end

