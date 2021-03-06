/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMainDisplaySceneLayoutResizeUIManagerDelegate;
@class NSMutableDictionary, NSMapTable, SBMainDisplaySceneLayoutViewController, SBLayoutElementViewController;

@interface SBMainDisplaySceneLayoutResizeUIManager : NSObject {

	NSMutableDictionary* _stateNotificationHandlers;
	NSMapTable* _createdPlaceholderViews;
	char _delaysRecoilUntilAppsAreObscured;
	char _waitingToObscureAppsDuringShowing;
	char _recoilingLayout;
	char _hidingSideSwitcherGrabber;
	id<SBMainDisplaySceneLayoutResizeUIManagerDelegate> _delegate;
	unsigned _affectedLayoutRoles;
	unsigned _state;
	SBMainDisplaySceneLayoutViewController* _mainLayoutViewController;
	SBLayoutElementViewController* _primaryLayoutElementController;
	SBLayoutElementViewController* _sideLayoutElementController;
	/*^block*/id _showingCompletionHandler;

}

@property (assign,nonatomic) unsigned state;                                                                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SBMainDisplaySceneLayoutViewController * mainLayoutViewController;                            //@synthesize mainLayoutViewController=_mainLayoutViewController - In the implementation block
@property (nonatomic,readonly) SBLayoutElementViewController * primaryLayoutElementController;                               //@synthesize primaryLayoutElementController=_primaryLayoutElementController - In the implementation block
@property (nonatomic,readonly) SBLayoutElementViewController * sideLayoutElementController;                                  //@synthesize sideLayoutElementController=_sideLayoutElementController - In the implementation block
@property (assign,getter=isWaitingToObscureAppsDuringShowing,nonatomic) char waitingToObscureAppsDuringShowing;              //@synthesize waitingToObscureAppsDuringShowing=_waitingToObscureAppsDuringShowing - In the implementation block
@property (nonatomic,copy) id showingCompletionHandler;                                                                      //@synthesize showingCompletionHandler=_showingCompletionHandler - In the implementation block
@property (assign,getter=isRecoilingLayout,nonatomic) char recoilingLayout;                                                  //@synthesize recoilingLayout=_recoilingLayout - In the implementation block
@property (assign,getter=isHidingSideSwitcherGrabber,nonatomic) char hidingSideSwitcherGrabber;                              //@synthesize hidingSideSwitcherGrabber=_hidingSideSwitcherGrabber - In the implementation block
@property (assign,nonatomic,__weak) id<SBMainDisplaySceneLayoutResizeUIManagerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned affectedLayoutRoles;                                                                   //@synthesize affectedLayoutRoles=_affectedLayoutRoles - In the implementation block
@property (assign,nonatomic) char delaysRecoilUntilAppsAreObscured;                                                          //@synthesize delaysRecoilUntilAppsAreObscured=_delaysRecoilUntilAppsAreObscured - In the implementation block
@property (getter=isShowingResizeUI,nonatomic,readonly) char showingResizeUI; 
@property (getter=isShowingResizeUIOrAlreadyVisible,nonatomic,readonly) char showingResizeUIOrAlreadyVisible; 
@property (getter=isDismissingResizeUI,nonatomic,readonly) char dismissingResizeUI; 
@property (nonatomic,readonly) char canDismissResizeUI; 
-(SBLayoutElementViewController *)sideLayoutElementController;
-(SBLayoutElementViewController *)primaryLayoutElementController;
-(char)canDismissResizeUI;
-(void)dismissResizeUIWithAnimationFactory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isWaitingToObscureAppsDuringShowing;
-(void)obscureAppsDuringShowingWithAnimationFactory:(id)arg1 ;
-(void)addNotificationHandlerForState:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned)affectedLayoutRoles;
-(void)setAffectedLayoutRoles:(unsigned)arg1 animated:(char)arg2 ;
-(char)isShowingResizeUI;
-(char)isShowingResizeUIOrAlreadyVisible;
-(id)initWithMainLayoutViewController:(id)arg1 ;
-(void)setDelaysRecoilUntilAppsAreObscured:(char)arg1 ;
-(void)setAffectedLayoutRoles:(unsigned)arg1 ;
-(void)showResizeUIWhileWaitingToObscureApps:(char)arg1 animationFactory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelWithAnimationFactory:(id)arg1 ;
-(void)beginRecoilingWithAnimationFactory:(id)arg1 ;
-(char)delaysRecoilUntilAppsAreObscured;
-(char)isRecoilingLayout;
-(char)isHidingSideSwitcherGrabber;
-(id)_resizingPlaceholderAppIconViewForAppViewController:(id)arg1 ;
-(void)_willChangeDisplayModeOfAppController:(id)arg1 toDisplayMode:(int)arg2 ;
-(void)_updateCachedSnapshotViewForAppViewController:(id)arg1 onQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)affectsMultipleLayoutRoles;
-(id)primaryAppContainerViewController;
-(id)sideAppContainerViewController;
-(void)_updateCachedSnapshotViewForAppViewController:(id)arg1 onQueue:(id)arg2 displayWhenReadyIfTrue:(/*^block*/id)arg3 displayOptions:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_updateCachedResizingPlaceholderAppIconViewForAppViewController:(id)arg1 ;
-(void)setState:(unsigned)arg1 ifCurrentlyAtState:(unsigned)arg2 ;
-(id)_resizingPlaceholderViewForAppViewController:(id)arg1 ;
-(void)_displayPlaceholderView:(id)arg1 inAppController:(id)arg2 options:(unsigned)arg3 factory:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_beginHidingSideSwitcherGrabberWithAnimationFactory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_recoilWithFactory:(id)arg1 ;
-(void)setWaitingToObscureAppsDuringShowing:(char)arg1 ;
-(void)setShowingCompletionHandler:(id)arg1 ;
-(void)_performShowConstructedUIPhaseOfShowingResizeUIWithPrimaryPlaceholderView:(id)arg1 sidePlaceholderView:(id)arg2 factory:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performNextStepOfShowingResizeUIWithBlock:(/*^block*/id)arg1 ;
-(void)_performBlurPhaseOfShowingResizeUIWithPrimaryPlaceholderView:(id)arg1 sidePlaceholderView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performPlaceholderViewConstructionPhaseOfShowingResizeUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_performAppSnapshotPhaseOfShowingResizeUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_bestResizingPlaceholderViewForAppContainerViewController:(id)arg1 ;
-(id)showingCompletionHandler;
-(void)_unrecoilWithFactory:(id)arg1 ;
-(void)_fireRemainingStateNotificationHandlers;
-(void)_endHidingSideSwitcherGrabberWithAnimationFactory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_resetDisplayModeForElementController:(id)arg1 options:(unsigned)arg2 animationFactory:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_resetElementControllerDisplayModesWithAnimationFactory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fireStateNotificationHandlersForState:(unsigned)arg1 ;
-(void)setRecoilingLayout:(char)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)mainLayoutViewController;
-(void)setHidingSideSwitcherGrabber:(char)arg1 ;
-(char)isResizeUIVisible;
-(char)isDismissingResizeUI;
-(id)init;
-(void)setDelegate:(id<SBMainDisplaySceneLayoutResizeUIManagerDelegate>)arg1 ;
-(id)description;
-(id<SBMainDisplaySceneLayoutResizeUIManagerDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
@end

