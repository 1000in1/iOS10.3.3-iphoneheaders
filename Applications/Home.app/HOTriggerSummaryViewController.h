/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <Home/HOTriggerEditorDelegate.h>
#import <Home/HUSwitchCellDelegate.h>
#import <Home/HOTriggerSummaryActionGridViewControllerDelegate.h>
#import <Home/HUTextInteractionHandling.h>

@protocol HOTriggerEditorDelegate;
@class HOTriggerSummaryActionGridViewController, HFTriggerBuilder, HOTriggerSummaryItemManager, NSString;

@interface HOTriggerSummaryViewController : HUItemTableViewController <HOTriggerEditorDelegate, HUSwitchCellDelegate, HOTriggerSummaryActionGridViewControllerDelegate, HUTextInteractionHandling> {

	char _viewHasAppeared;
	HOTriggerSummaryActionGridViewController* _actionSetsGridViewController;
	HOTriggerSummaryActionGridViewController* _serviceActionsGridViewController;
	HFTriggerBuilder* _triggerBuilder;
	unsigned _mode;
	id<HOTriggerEditorDelegate> _delegate;

}

@property (nonatomic,retain) HFTriggerBuilder * triggerBuilder;                                                          //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (assign,nonatomic) unsigned mode;                                                                              //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char viewHasAppeared;                                                                       //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (nonatomic,readonly) HOTriggerSummaryActionGridViewController * actionSetsGridViewController;                  //@synthesize actionSetsGridViewController=_actionSetsGridViewController - In the implementation block
@property (nonatomic,readonly) HOTriggerSummaryActionGridViewController * serviceActionsGridViewController;              //@synthesize serviceActionsGridViewController=_serviceActionsGridViewController - In the implementation block
@property (nonatomic,readonly) HOTriggerSummaryItemManager * triggerSummaryItemManager; 
@property (assign,nonatomic,__weak) id<HOTriggerEditorDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)adoptsDefaultGridLayoutMargins;
-(void)setTriggerBuilder:(HFTriggerBuilder *)arg1 ;
-(void)_removeActionsInServiceActionItem:(id)arg1 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(id)initWithTriggerBuilder:(id)arg1 mode:(unsigned)arg2 isPresentedModally:(char)arg3 delegate:(id)arg4 ;
-(char)_canCommitTriggerBuilder;
-(id)_commitTriggerBuilder;
-(void)triggerSummaryActionGridViewController:(id)arg1 didUpdateTriggerBuilder:(id)arg2 ;
-(HOTriggerSummaryItemManager *)triggerSummaryItemManager;
-(HOTriggerSummaryActionGridViewController *)actionSetsGridViewController;
-(HOTriggerSummaryActionGridViewController *)serviceActionsGridViewController;
-(void)_updateTableHeaderConfiguration;
-(void)_showEditorForTriggerBuilderItem:(id)arg1 ;
-(void)_deleteTrigger:(id)arg1 ;
-(void)_setTriggerEnabled:(char)arg1 ;
-(void)_setConditionEnabled:(char)arg1 conditionItem:(id)arg2 ;
-(void)setDelegate:(id<HOTriggerEditorDelegate>)arg1 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<HOTriggerEditorDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)_cancel:(id)arg1 ;
-(HFTriggerBuilder *)triggerBuilder;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(char)arg4 ;
-(id)allCellClasses;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(char)shouldHideHeaderAboveSection:(int)arg1 ;
-(char)shouldHideFooterBelowSection:(int)arg1 ;
-(id)childViewControllersToPreload;
-(char)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
-(char)handleInteraction:(int)arg1 withURL:(id)arg2 inView:(id)arg3 ;
-(void)switchCell:(id)arg1 didTurnOn:(char)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(unsigned)automaticDisablingReasonsForItem:(id)arg1 ;
-(id)itemTableHeaderMessage;
-(char)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(void)setViewHasAppeared:(char)arg1 ;
-(char)viewHasAppeared;
-(void)_done:(id)arg1 ;
-(void)_addAction:(id)arg1 ;
@end

