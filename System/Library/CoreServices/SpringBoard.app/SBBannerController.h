/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIBannerTargetImplementation.h>
#import <SpringBoard/SBAssistantObserver.h>
#import <SpringBoard/SBAlertObserver.h>
#import <SpringBoard/SBBannerContextViewControllerDelegate.h>
#import <SpringBoard/SBBannerGestureHandlerDelegate.h>
#import <SpringBoard/SBBannerDismissSystemGestureRecognizerDelegate.h>
#import <SpringBoard/SBBulletinWindowClient.h>
#import <SpringBoard/SBBulletinBusyClient.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBLockScreenActionProvider.h>

@class NSHashTable, NSMutableArray, SBAlert, UIImage, SBBannerContainerViewController, SBBannerGestureHandler, NSMapTable, SBLockScreenActionContext, SBBannerDismissSystemGestureRecognizer, NSString;

@interface SBBannerController : NSObject <SBUIBannerTargetImplementation, SBAssistantObserver, SBAlertObserver, SBBannerContextViewControllerDelegate, SBBannerGestureHandlerDelegate, SBBannerDismissSystemGestureRecognizerDelegate, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate, SBLockScreenActionProvider> {

	NSHashTable* _sources;
	NSMutableArray* _pendingBannerContextsNeedingRepop;
	SBAlert* _topAlert;
	UIImage* _bannerViewBackgroundImage;
	SBBannerContainerViewController* _bannerViewController;
	char _soundIsPlaying;
	char _dismissalOverdue;
	char _replaceDelayIsActive;
	char _showingStickyDurationBanner;
	char _suppressingBanners;
	char _enableDelayActive;
	char _assistantIsFullyVisible;
	char _locked;
	unsigned _transitionCount;
	int _activeGestureType;
	SBBannerGestureHandler* _activeGestureHandler;
	int _overdueDismissReason;
	/*^block*/id _overdueCompletionBlock;
	char _dismissingBannerForAssistantReveal;
	char _dismissingBannerForAssistantDismiss;
	/*^block*/id _assistantRevealCompletionBlock;
	/*^block*/id _assistantDismissCompletionBlock;
	NSMapTable* _bannerContextToViewControllerCache;
	SBLockScreenActionContext* _lockScreenActionContext;
	SBBannerDismissSystemGestureRecognizer* _dismissSystemGestureRecognizer;

}

@property (nonatomic,retain) SBAlert * topAlert;                                               //@synthesize topAlert=_topAlert - In the implementation block
@property (nonatomic,retain) SBLockScreenActionContext * lockScreenActionContext;              //@synthesize lockScreenActionContext=_lockScreenActionContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier; 
@property (nonatomic,readonly) int bannerTargetIdiom; 
+(id)_sharedInstanceCreateIfNecessary:(char)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)dismissBannerWithAnimation:(char)arg1 reason:(int)arg2 forceEvenIfBusy:(char)arg3 ;
-(void)assistant:(id)arg1 viewWillAppear:(int)arg2 ;
-(void)assistant:(id)arg1 viewDidAppear:(int)arg2 ;
-(void)alertBannerSuppressionChanged:(id)arg1 ;
-(void)assistant:(id)arg1 viewWillDisappear:(int)arg2 ;
-(void)assistant:(id)arg1 viewDidDisappear:(int)arg2 ;
-(void)_lockStateChanged:(id)arg1 ;
-(SBLockScreenActionContext *)lockScreenActionContext;
-(void)setLockScreenActionContext:(SBLockScreenActionContext *)arg1 ;
-(void)invalidateLockScreenActionContext;
-(char)isShowingBanner;
-(char)isTransitioningBanner;
-(void)dismissBannerWithAnimation:(char)arg1 reason:(int)arg2 forceEvenIfBusy:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)bulletinWindowStoppedBeingBusy;
-(void)_updateBannerSuppressionState;
-(void)_screenUndimmmed:(id)arg1 ;
-(void)_handleDismissBannerSystemGesture:(id)arg1 ;
-(void)setTopAlert:(SBAlert *)arg1 ;
-(void)_setOverdueCompletionBlock:(/*^block*/id)arg1 ;
-(void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
-(void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
-(void)_removeActiveGestureHandler;
-(void)_cancelBannerDismissTimers;
-(id)_bannerView;
-(void)_removePendingContextsForSourceNeedingRepop:(id)arg1 ;
-(id)_bannerContext;
-(void)dismissBannerWithAnimation:(char)arg1 reason:(int)arg2 ;
-(char)_dequeueBannerIfPossible;
-(id)_pendingBannerContextForSourceNeedingRepop:(id)arg1 ;
-(char)_dequeueBannerIfPossibleIgnoringStickyBanner:(char)arg1 existingDismissReason:(int)arg2 ;
-(id)_newBannerContextViewController;
-(void)_dismissOverdueOrDequeueIfPossible;
-(void)_updateBannerSuppressionStateAndDequeueIfPossible:(char)arg1 withDelay:(char)arg2 ;
-(void)_dequeueAfterDelayIfPossible;
-(char)_isItemShowable:(id)arg1 fromSource:(id)arg2 ;
-(id)_viewControllerForPresentation;
-(char)_canDequeueIgnoringStickyBanner:(char)arg1 ;
-(id)_dequeueNextBannerContext;
-(void)_performTransition:(int)arg1 withAnimation:(char)arg2 context:(id)arg3 reason:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateGestureHandlerWithState:(int)arg1 type:(int)arg2 ;
-(void)_handleGestureState:(int)arg1 location:(CGPoint)arg2 displacement:(float)arg3 velocity:(float)arg4 ;
-(id)_newGestureHandlerForType:(int)arg1 ;
-(char)_shouldPendStickyBannerContext:(id)arg1 withReason:(int)arg2 ;
-(void)_handleSystemDismissGestureWithState:(int)arg1 position:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)_performRevealTransitionWithContext:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performReplaceTransitionWithContext:(id)arg1 reason:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performHideTransitionWithContext:(id)arg1 animated:(char)arg2 reason:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setBannerViewControllerForContext:(id)arg1 ;
-(void)_updateLockScreenForBannerVisible:(char)arg1 ;
-(void)_addBannerGestureRecognizersToView:(id)arg1 ;
-(void)_stopCurrentSound;
-(void)_handleBannerPanGesture:(id)arg1 ;
-(void)_dismissIntervalElapsed;
-(void)_replaceIntervalElapsed;
-(void)_setupBannerDismissTimers;
-(float)currentBannerHeight;
-(char)isTrackingDismissGesture;
-(char)isShowingModalBannerWithKeyboard;
-(id)_bannerItem;
-(void)bannerViewController:(id)arg1 willSelectAction:(id)arg2 withContext:(id)arg3 ;
-(void)bannerViewControllerDidSelectAction:(id)arg1 ;
-(void)bannerViewControllerDidRequestDismissal:(id)arg1 ;
-(void)bannerViewControllerDidRequestSticky:(id)arg1 ;
-(void)bannerViewController:(id)arg1 didRequestSticky:(char)arg2 ;
-(void)bannerViewControllerDidReceiveRaiseGesture:(id)arg1 ;
-(void)bannerViewControllerDidShrinkForKeyboard:(id)arg1 ;
-(void)bannerViewControllerDidPullDown:(id)arg1 ;
-(void)handler:(id)arg1 pulledBannerByDisplacement:(float)arg2 ;
-(void)setBannerAlpha:(float)arg1 ;
-(void)_soundDidFinishPlayingForBannerContext:(id)arg1 ;
-(id)_bannerViewBackgroundImage;
-(id)_newBannerViewForContext:(id)arg1 ;
-(SBAlert *)topAlert;
-(void)_presentBannerForContext:(id)arg1 reason:(int)arg2 ;
-(void)_setBannerSticky:(char)arg1 ;
-(void)_tryToDismissWithAnimation:(char)arg1 reason:(int)arg2 forceEvenIfBusy:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void*)bannerTargetIdentifier;
-(int)bannerTargetIdiom;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(char)isShowingModalBanner;
-(void)signalSource:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
-(float)bannerHeight;
@end

