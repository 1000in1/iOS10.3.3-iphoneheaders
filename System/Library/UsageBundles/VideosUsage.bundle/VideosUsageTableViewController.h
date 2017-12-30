/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UsageBundles/VideosUsage.bundle/VideosUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <VideosUsage/VideosUsageChangeDelegate.h>

@protocol VideosUsageChangeDelegate;
@class NSString, VideosUsageDataSource, VideosUsageBundleStorageReporter, NSIndexPath;

@interface VideosUsageTableViewController : PSEditableListController <VideosUsageChangeDelegate> {

	NSString* _usageTitle;
	id<VideosUsageChangeDelegate> _delegate;
	VideosUsageDataSource* _usageDataSource;
	VideosUsageBundleStorageReporter* _storageReporter;
	NSIndexPath* _indexPath;

}

@property (nonatomic,retain) VideosUsageDataSource * usageDataSource;                         //@synthesize usageDataSource=_usageDataSource - In the implementation block
@property (nonatomic,retain) VideosUsageBundleStorageReporter * storageReporter;              //@synthesize storageReporter=_storageReporter - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                         //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,copy) NSString * usageTitle;                                             //@synthesize usageTitle=_usageTitle - In the implementation block
@property (assign,nonatomic,__weak) id<VideosUsageChangeDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)usageTitle;
-(VideosUsageDataSource *)usageDataSource;
-(void)updateFileSize;
-(VideosUsageBundleStorageReporter *)storageReporter;
-(void)setUsageTitle:(NSString *)arg1 ;
-(void)setUsageDataSource:(VideosUsageDataSource *)arg1 ;
-(void)setStorageReporter:(VideosUsageBundleStorageReporter *)arg1 ;
-(id)initWithDataSource:(id)arg1 storageReporter:(id)arg2 indexPath:(id)arg3 ;
-(id)viewControllerForRemoveItem;
-(void)setDelegate:(id<VideosUsageChangeDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<VideosUsageChangeDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)viewWillAppear:(char)arg1 ;
-(int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id)specifiers;
@end

