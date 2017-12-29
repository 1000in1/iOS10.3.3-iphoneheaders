/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UITableViewController.h>
#import <SpringBoard/SBAppViewHostRequester.h>
#import <SpringBoard/SBMainAppSwitcherContentViewControlling.h>

@protocol SBMainAppSwitcherContentViewControllerDelegate;
@class SBDisplayItem, SBMainDisplayLayoutState, NSArray, SBBestAppSuggestion, NSMutableArray, SBAppView, NSString;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBAppViewHostRequester, SBMainAppSwitcherContentViewControlling> {

	NSMutableArray* _displayItems;
	id<SBMainAppSwitcherContentViewControllerDelegate> _delegate;
	SBAppView* _temporaryAppView;
	SBAppView* _temporarySideAppView;
	SBDisplayItem* _returnToDisplayItem;
	SBDisplayItem* _initialDisplayItem;
	SBDisplayItem* _returnToSideDisplayItem;
	SBMainDisplayLayoutState* _initialLayoutState;
	SBBestAppSuggestion* _bestAppSuggestion;
	char _invalidated;

}

@property (nonatomic,copy) NSArray * displayItems;                                                                       //@synthesize displayItems=_displayItems - In the implementation block
@property (setter=_setReturnToDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToDisplayItem;                         //@synthesize returnToDisplayItem=_returnToDisplayItem - In the implementation block
@property (setter=_setInitialDisplayItem:,nonatomic,copy) SBDisplayItem * _initialDisplayItem;                           //@synthesize initialDisplayItem=_initialDisplayItem - In the implementation block
@property (setter=_setReturnToSideDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToSideDisplayItem;                 //@synthesize returnToSideDisplayItem=_returnToSideDisplayItem - In the implementation block
@property (setter=_setInitialLayoutState:,nonatomic,retain) SBMainDisplayLayoutState * _initialLayoutState;              //@synthesize initialLayoutState=_initialLayoutState - In the implementation block
@property (assign,nonatomic,__weak) id<SBMainAppSwitcherContentViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                    //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)snapshotScale;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(int)appViewRequesterPriority:(id)arg1 ;
-(void)_unhostSideAppToStopHidingThem;
-(SBDisplayItem *)_returnToDisplayItem;
-(void)_hostSideAppToHideThem;
-(void)startInteractiveTransition:(char)arg1 presenting:(char)arg2 withRequest:(id)arg3 ;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(void)endTransitionWithSuccess:(char)arg1 completion:(/*^block*/id)arg2 ;
-(SBDisplayItem *)_returnToSideDisplayItem;
-(char)hasInteractiveContentAtBottomOfScreen;
-(void)endInteractionWithCommitment:(char)arg1 ;
-(id)nextDisplayItem;
-(void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)insertDisplayItem:(id)arg1 atIndex:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeDisplayItem:(id)arg1 forReason:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)suppressBackgroundForReason:(id)arg1 ;
-(void)stopSuppressingBackgroundForReason:(id)arg1 ;
-(void)_setReturnToDisplayItem:(id)arg1 ;
-(void)_setReturnToSideDisplayItem:(id)arg1 ;
-(SBDisplayItem *)_initialDisplayItem;
-(void)_setInitialDisplayItem:(id)arg1 ;
-(SBMainDisplayLayoutState *)_initialLayoutState;
-(void)_setInitialLayoutState:(id)arg1 ;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(void)invalidate;
-(void)setDelegate:(id<SBMainAppSwitcherContentViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<SBMainAppSwitcherContentViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(NSArray *)displayItems;
-(SBBestAppSuggestion *)bestAppSuggestion;
@end
