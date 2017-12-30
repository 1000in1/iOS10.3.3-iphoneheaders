/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIPluginHost.h>
#import <SpringBoard/SBDashBoardExternalBehaviorProviding.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@protocol SBUIPluginViewControllerInterface, BSInvalidatable;
@class BSEventQueue, NSString, SBAssistantWindow, SBFAuthenticationAssertion, NSMutableSet, NSHashTable, FBUIApplicationSceneDeactivationAssertion, UIViewController, FBDisplayLayoutElement, SBMiscellaneousSystemAnimationSettings;

@interface SBAssistantController : SBUIPluginHost <SBDashBoardExternalBehaviorProviding, _UISettingsKeyObserver> {

	BSEventQueue* _operationQueue;
	NSString* _appDisplayIDBeingHosted;
	SBAssistantWindow* _assistantWindow;
	char _unlockedDevice;
	char _launchedInStark;
	char _isHidingOtherWindows;
	int _activationEvent;
	SBFAuthenticationAssertion* _disableAssertion;
	NSMutableSet* _dismissingReasons;
	int _pendingDismissViewType;
	NSHashTable* _observers;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	UIViewController*<SBUIPluginViewControllerInterface> _mainScreenViewController;
	FBDisplayLayoutElement* _mainDisplayLayoutElement;
	FBDisplayLayoutElement* _starkDisplayLayoutElement;
	id<BSInvalidatable> _hideApplicationModalAlertsAssertion;
	NSString* _pendedCarPlayActivationBundleIdentifier;
	SBMiscellaneousSystemAnimationSettings* _settings;

}

@property (assign,nonatomic) char unlockedDevice;                                //@synthesize unlockedDevice=_unlockedDevice - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int idleTimerDuration; 
@property (nonatomic,readonly) int idleTimerMode; 
@property (nonatomic,readonly) int idleWarnMode; 
@property (nonatomic,readonly) int scrollingStrategy; 
@property (nonatomic,readonly) int notificationBehavior; 
@property (nonatomic,readonly) unsigned restrictedCapabilities; 
@property (nonatomic,readonly) int proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) int participantState; 
+(char)isAssistantVisible;
+(char)isAssistantRunningHidden;
+(char)isAssistantViewVisible:(int)arg1 ;
+(char)shouldEnterAssistant;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(char)supportedAndEnabled;
+(char)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1 ;
-(NSString *)dashBoardIdentifier;
-(char)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(char)activatePluginForEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(id)activationSettings;
-(char)isAssistantViewVisible:(int)arg1 ;
-(void)_prototypeSettingsChanged;
-(int)scrollingStrategy;
-(int)proximityDetectionMode;
-(int)idleTimerDuration;
-(int)idleWarnMode;
-(void)dismissAssistantViewIfNecessary:(int)arg1 withAnimation:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)dismissAssistantViewIfNecessary:(int)arg1 withAnimation:(int)arg2 factory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissAssistantViewIfNecessary:(int)arg1 withAnimation:(int)arg2 ;
-(char)pluginWantsInterfaceOrientation:(int*)arg1 ;
-(char)pluginSuppressesNotifications;
-(char)pluginWantsScreenDimInterval:(double*)arg1 ;
-(char)_isPluginLoaded;
-(void)_starkSiriWillAppear:(id)arg1 ;
-(void)_starkSiriDidAppear:(id)arg1 ;
-(void)_starkSiriWillDisappear:(id)arg1 ;
-(void)_starkSiriDidDisappear:(id)arg1 ;
-(void)_loadPlugin;
-(void)_notePluginVisibilityDidChange;
-(void)setUnlockedDevice:(char)arg1 ;
-(id)_activationSettingsWithDismissalDisallowed:(char)arg1 ;
-(void)dismissPluginForEvent:(int)arg1 ;
-(double)_defaultAnimatedDismissDurationForMainScreen;
-(char)_isDismissingAllViews;
-(void)_toggleModalAlertHidingAssertion:(char)arg1 ;
-(void)_notifyObserversViewWillAppear:(int)arg1 ;
-(void)_bioAuthenticated:(id)arg1 ;
-(void)_viewDidAppearWithType:(int)arg1 ;
-(void)_notifyObserversViewWillDisappear:(int)arg1 ;
-(void)_viewDidDisappearWithType:(int)arg1 ;
-(void)uiPluginAttemptMesaUnlock;
-(void)_notifyObserversViewDidAppear:(int)arg1 ;
-(void)_notifyObserversViewDidDisappear:(int)arg1 ;
-(void)_updateSceneClientSettings;
-(void)_createAssistantWindowIfNecessary;
-(void)_viewWillAppearOnMainScreen:(char)arg1 ;
-(void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 setShowsStatusBar:(char)arg2 ;
-(id)_fakeStatusBarForOrientation:(int)arg1 ;
-(void)_viewDidAppearOnMainScreen:(char)arg1 ;
-(void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2 ;
-(void)_viewWillDisappearOnMainScreen:(char)arg1 ;
-(void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2 ;
-(void)_viewDidDisappearOnMainScreen:(char)arg1 ;
-(void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2 ;
-(void)_presentForMainScreenAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleSiriPreheatCommand;
-(void)dismissAssistantView:(int)arg1 forAlertActivation:(id)arg2 ;
-(id)mainScreenView;
-(id)transferOwnershipOfAuthenticationAssertion;
-(void)_dismissUIPlugin:(id)arg1 animated:(char)arg2 ;
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(char)arg3 ;
-(char)unlockedDevice;
-(char)shouldEnterAssistant;
-(void)_dismissForMainScreenWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)window;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(int)idleTimerMode;
-(char)supportedAndEnabled;
-(char)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1 ;
-(unsigned)restrictedCapabilities;
-(int)notificationBehavior;
-(char)shouldShowLockStatusBarTime;
-(char)handleSiriButtonDownEventFromSource:(int)arg1 activationEvent:(int)arg2 ;
-(void)handleSiriButtonUpEventFromSource:(int)arg1 ;
-(void)dismissAssistantViewIfNecessary:(int)arg1 ;
-(char)activateIgnoringTouches;
-(int)participantState;
-(char)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)uiPlugin:(id)arg1 isNowRunning:(char)arg2 ;
-(char)uiPlugin:(id)arg1 openURL:(id)arg2 ;
-(void)uiPluginUserEventOccurred:(id)arg1 ;
-(char)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(char)arg4 ;
-(char)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3 ;
-(void)uiPlugin:(id)arg1 setExpectsFaceContact:(char)arg2 ;
@end

