/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementViewController.h>
#import <SpringBoard/SBMainAppSwitcherContentViewControllerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@protocol SBMainAppSwitcherContentViewControlling;
@class NSMutableArray, SBAppSwitcherServiceSet, SBAppSwitcherRemoteAlertSet, SBBestAppSuggestion, UIViewController, SBSwitcherContainerView, SBDisplayItem, SBMainDisplayLayoutState, NSMutableDictionary, SBAppSwitcherSettings, NSMutableSet, SBAppStatusBarSettingsAssertion, FBUIApplicationSceneDeactivationAssertion, NSCountedSet, _UILegibilitySettings, NSString;

@interface SBMainSwitcherViewController : SBLayoutElementViewController <SBMainAppSwitcherContentViewControllerDelegate, _UISettingsKeyObserver> {

	NSMutableArray* _displayItems;
	SBAppSwitcherServiceSet* _switcherServices;
	SBAppSwitcherRemoteAlertSet* _switcherRemoteAlerts;
	SBBestAppSuggestion* _bestAppSuggestion;
	UIViewController*<SBMainAppSwitcherContentViewControlling> _contentViewController;
	SBSwitcherContainerView* _contentView;
	SBDisplayItem* _returnToDisplayItem;
	SBDisplayItem* _returnToSideDisplayItem;
	SBDisplayItem* _initialDisplayItem;
	SBMainDisplayLayoutState* _initialLayoutState;
	NSMutableDictionary* _otherReturnToElementsByRole;
	char _visible;
	SBAppSwitcherSettings* _settings;
	Class _contentViewControllerClass;
	NSMutableArray* _servicesRemovedWhileAwayFromSwitcher;
	NSMutableSet* _appsHostedForTermination;
	SBAppStatusBarSettingsAssertion* _showStatusBarForSwitcherAssertion;
	FBUIApplicationSceneDeactivationAssertion* _appSwitcherResignActiveAssertion;
	NSCountedSet* _suppressBackgroundReasons;
	_UILegibilitySettings* _legibilitySettings;

}

@property (setter=_setReturnToDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToDisplayItem;                                    //@synthesize returnToDisplayItem=_returnToDisplayItem - In the implementation block
@property (setter=_setReturnToSideDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToSideDisplayItem;                            //@synthesize returnToSideDisplayItem=_returnToSideDisplayItem - In the implementation block
@property (setter=_setInitialDisplayItem:,nonatomic,copy) SBDisplayItem * _initialDisplayItem;                                      //@synthesize initialDisplayItem=_initialDisplayItem - In the implementation block
@property (setter=_setInitialLayoutState:,nonatomic,copy) SBMainDisplayLayoutState * _initialLayoutState;                           //@synthesize initialLayoutState=_initialLayoutState - In the implementation block
@property (setter=_setOtherReturnToElementsByRole:,nonatomic,copy) NSMutableDictionary * _otherReturnToElementsByRole;              //@synthesize otherReturnToElementsByRole=_otherReturnToElementsByRole - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                            //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)toggleSwitcherNoninteractivelyWithSource:(int)arg1 ;
-(float)scaleForDownscaledSnapshotGeneration;
-(void)configureWithEntity:(id)arg1 forElement:(id)arg2 layoutState:(id)arg3 ;
-(SBDisplayItem *)_returnToDisplayItem;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(void)endTransitionWithSuccess:(char)arg1 completion:(/*^block*/id)arg2 ;
-(SBDisplayItem *)_returnToSideDisplayItem;
-(void)switcherContentController:(id)arg1 activatedBestAppSuggestion:(id)arg2 ;
-(void)switcherContentController:(id)arg1 selectedItem:(id)arg2 ;
-(void)endInteractionWithCommitment:(char)arg1 ;
-(id)nextDisplayItem;
-(void)suppressBackgroundForReason:(id)arg1 ;
-(void)stopSuppressingBackgroundForReason:(id)arg1 ;
-(void)_setReturnToDisplayItem:(id)arg1 ;
-(void)_setReturnToSideDisplayItem:(id)arg1 ;
-(SBDisplayItem *)_initialDisplayItem;
-(void)_setInitialDisplayItem:(id)arg1 ;
-(SBMainDisplayLayoutState *)_initialLayoutState;
-(void)_setInitialLayoutState:(id)arg1 ;
-(id)pageForDisplayItem:(id)arg1 ;
-(char)canTransitionWithTranslation;
-(void)startTransitionPresenting:(char)arg1 withRequest:(id)arg2 ;
-(void)performPresentationAnimationForTransitionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(char)supportsReuse;
-(char)requiresGrabberForControlCenterGesture;
-(void)_switcherModelChanged:(id)arg1 ;
-(void)_updateContentViewControllerClassFromSettings;
-(void)_warmAppInfoForAppsInList;
-(char)_activateSwitcherNoninteractivelyWithSource:(int)arg1 switcherTransition:(int)arg2 ;
-(char)_isTransitioningToOrFromSwitcher;
-(char)_dismissSwitcherNoninteractivelyWithSource:(int)arg1 ;
-(/*^block*/id)_dismissSwitcherValidatorWithEventLabel:(id)arg1 transactionProvider:(/*^block*/id)arg2 ;
-(char)_toggleSwitcherNoninteractivelyWithSource:(int)arg1 switcherTransition:(int)arg2 ;
-(/*^block*/id)_toggleSwitcherTransitionValidator;
-(void)_noteSwitcherDidPresentWithSource:(int)arg1 didCommit:(char)arg2 ;
-(void)_quitAppRepresentedByDisplayItem:(id)arg1 forReason:(int)arg2 ;
-(id)_displayItemFromLayoutElement:(id)arg1 ;
-(void)_insertDisplayItem:(id)arg1 atIndex:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(id)_displayItemFromAlert:(id)arg1 ;
-(id)_entityForDisplayItem:(id)arg1 ;
-(NSMutableDictionary *)_otherReturnToElementsByRole;
-(void)_configureRequestForDismissal:(id)arg1 withEventLabel:(id)arg2 ;
-(void)_doUglySiriActivationThingsIfNecessary:(id)arg1 ;
-(void)_switcherServiceRemoved:(id)arg1 ;
-(void)_switcherServiceAdded:(id)arg1 ;
-(void)_appActivationStateDidChange:(id)arg1 ;
-(void)_switcherRemoteAlertRemoved:(id)arg1 ;
-(void)_switcherRemoteAlertAdded:(id)arg1 ;
-(void)_continuityAppSuggestionChanged:(id)arg1 ;
-(void)_rebuildAppListCache;
-(void)_updateBestAppSuggestion;
-(void)_lockOrientationForSwitcher;
-(void)_releaseSwitcherOrientationLock;
-(void)_disableContextHostingForApp:(id)arg1 ;
-(void)_destroyAppListCache;
-(void)_insertSwitcherService:(id)arg1 atIndex:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)_replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)_isBestAppSuggestionEligibleForSwitcher:(id)arg1 ;
-(void)_cacheAppList;
-(void)_temporarilyHostAppForQuitting:(id)arg1 ;
-(void)_removeDisplayItem:(id)arg1 forReason:(int)arg2 completion:(/*^block*/id)arg3 ;
-(char)activateSwitcherNoninteractively;
-(void)setReturnToDisplayItem:(id)arg1 ;
-(void)performDismissAnimationForTransitionRequest:(id)arg1 toDisplayItem:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_setPreviousLayoutState:(id)arg1 withTopAlert:(id)arg2 ;
-(void)_setOtherReturnToElementsByRole:(id)arg1 ;
-(/*^block*/id)_activateSwitcherValidatorWithEventLabel:(id)arg1 transactionProvider:(/*^block*/id)arg2 ;
-(void)switcherContentController:(id)arg1 deletedItem:(id)arg2 ;
-(char)switcherContentController:(id)arg1 canDeleteItem:(id)arg2 ;
-(id)_initWithDisplay:(id)arg1 ;
-(void)dealloc;
-(id)view;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)prepareForReuse;
-(void)viewDidLoad;
-(char)isVisible;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)_contentViewController;
-(id)initWithDisplay:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(char)activateSwitcherNoninteractivelyWithSource:(int)arg1 ;
-(char)dismissSwitcherNoninteractively;
@end
