/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MNTraceBookmarkSelectorDelegate;
@class MNTracePlayer, UITableViewCell, NSCache, NSArray;

@interface TraceBookmarkSelector : UITableViewController {

	MNTracePlayer* _tracePlayer;
	UITableViewCell* _noBookmarksCell;
	NSCache* _bookmarkImageCache;
	id<MNTraceBookmarkSelectorDelegate> _delegate;
	NSArray* _bookmarks;

}

@property (nonatomic,retain) MNTracePlayer * tracePlayer;                                      //@synthesize tracePlayer=_tracePlayer - In the implementation block
@property (assign,nonatomic,__weak) id<MNTraceBookmarkSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_noBookmarksCell;
-(void)reloadBookmarks;
-(void)setTracePlayer:(MNTracePlayer *)arg1 ;
-(void)setDelegate:(id<MNTraceBookmarkSelectorDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNTraceBookmarkSelectorDelegate>)delegate;
-(char)shouldAutorotate;
-(id)initWithStyle:(int)arg1 ;
-(void)_done;
-(MNTracePlayer *)tracePlayer;
@end

