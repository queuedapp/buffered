//
//  AppDelegate.h
//  Buffered Example
//
//  Created by Pawel Niewiadomski on 05.03.2013.
//  Copyright (c) 2013 Pawel Niewiadomski. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class Buffered;

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (strong) Buffered *buffered;
@property (weak) IBOutlet NSProgressIndicator *progress;
@property (weak) IBOutlet NSTabView *tabs;
@property (weak) IBOutlet NSTableView *updatesTable;
@property (strong) NSArrayController *profiles;
@property (strong) NSMutableDictionary *updates;

@end