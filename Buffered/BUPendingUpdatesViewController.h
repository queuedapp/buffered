//
//  BUPendingUpdatesViewController.h
//  Buffered
//
//  Created by Pawel Niewiadomski on 01.04.2013.
//  Copyright (c) 2013 Pawel Niewiadomski. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class Buffered;

@interface BUPendingUpdatesViewController : NSViewController<NSTableViewDataSource, NSTabViewDelegate> {
@private
    NSMutableArray *_observedVisibleItems;
    UpdatesCompletionHandler _updatesHandler;
}

@property (weak) IBOutlet NSProgressIndicator *progress;
@property (weak) IBOutlet NSTableView *updatesTable;

@property (weak) Buffered *buffered;
@property (strong) NSArrayController *profiles;
@property (strong) NSMutableDictionary *updates;
@property (strong) NSArrayController *updatesContent;

- (id) initWithBuffered: (Buffered *) buffered;

@end