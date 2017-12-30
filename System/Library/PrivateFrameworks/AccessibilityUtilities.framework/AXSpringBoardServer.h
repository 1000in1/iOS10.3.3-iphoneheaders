/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXServer.h>
#import <libobjc.A.dylib/AXSystemAppServer.h>

@class AXAccessQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface AXSpringBoardServer : AXServer <AXSystemAppServer> {

	AXAccessQueue* _accessQueue;
	/*^block*/id _currentAlertHandler;
	NSMutableArray* _actionHandlers;
	NSMutableDictionary* _reachabilityHandlers;

}

@property (nonatomic,retain) AXAccessQueue * accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,copy) id currentAlertHandler;                                    //@synthesize currentAlertHandler=_currentAlertHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionHandlers;                         //@synthesize actionHandlers=_actionHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reachabilityHandlers;              //@synthesize reachabilityHandlers=_reachabilityHandlers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)init;
-(void)dealloc;
-(int)activeInterfaceOrientation;
-(void)setVolume:(float)arg1 ;
-(char)hasActiveCall;
-(void)unlockDevice;
-(void)setActionHandlers:(NSMutableArray *)arg1 ;
-(void)setReachabilityHandlers:(NSMutableDictionary *)arg1 ;
-(void)setCurrentAlertHandler:(id)arg1 ;
-(id)currentAlertHandler;
-(NSMutableDictionary *)reachabilityHandlers;
-(NSMutableArray *)actionHandlers;
-(void)_didConnectToServer;
-(id)_handleReplyResult:(id)arg1 ;
-(id)_handleActionResult:(id)arg1 ;
-(id)_handleReachabilityResult:(id)arg1 ;
-(char)_shouldValidateEntitlements;
-(void)_willClearServer;
-(void)_wasDisconnectedFromClient;
-(void)_didConnectToClient;
-(void)cleanupAlertHandler;
-(void)showAlert:(int)arg1 withHandler:(/*^block*/id)arg2 withData:(id)arg3 ;
-(void)registerSpringBoardActionHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(void)setCancelGestureActivation:(unsigned)arg1 cancelEnabled:(char)arg2 ;
-(void)registerReachabilityHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(id)_axSpringBoardServerInstanceDelegate;
-(id)_axSpringBoardServerInstance;
-(char)_shouldDispatchLocally;
-(void)_getPasscodeStatusImmediate:(/*^block*/id)arg1 ;
-(char)isMediaPlayingForApp:(id)arg1 ;
-(id)_messageForMediaPlayingQueryForBundleID:(id)arg1 ;
-(void)pauseMediaForApp:(id)arg1 ;
-(void)resumeMediaForApp:(id)arg1 ;
-(char)isNotificationCenterVisible;
-(void)toggleNotificationCenter;
-(char)_isSystemAppFrontmostExcludingSiri:(char)arg1 ;
-(void)_isSystemAppFrontmostExcludingSiri:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)isMultiTaskingActive;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)pid:(/*^block*/id)arg1 ;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1 ;
-(char)openSiri;
-(char)dismissSiri;
-(char)isSiriVisible;
-(char)isAppSwitcherVisible;
-(char)isControlCenterVisible;
-(char)isSideSwitcherVisible;
-(char)isScreenSaverVisible;
-(char)isNotificationVisible;
-(char)isNowPlayingUIVisible;
-(char)isSoftwareUpdateUIVisible;
-(char)isSiriTalkingOrListening;
-(char)isReceivingAirPlay;
-(char)isMediaPlaying;
-(void)wakeUpDeviceIfNecessary;
-(id)_serviceName;
-(void)takeScreenshot;
-(void)openAssistiveTouchCustomGestureCreation;
-(void)openSCATCustomGestureCreation;
-(void)setHearingAidControlVisible:(char)arg1 ;
-(void)startHearingAidServer;
-(int)topEventPidOverride;
-(char)isOrientationLocked;
-(void)setOrientationLocked:(char)arg1 ;
-(void)resetDimTimer;
-(char)isSideSwitchUsedForOrientation;
-(char)isRingerMuted;
-(float)reachabilityOffset;
-(float)volumeLevel;
-(void)hideAlert;
-(void)showAlert:(int)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setShowSpeechPlaybackControls:(char)arg1 ;
-(void)removeActionHandler:(id)arg1 ;
-(void)cancelReachabilityDetection;
-(char)toggleIncomingCall;
-(void)setReachabilityActive:(char)arg1 ;
-(void)removeReachabilityHandler:(id)arg1 ;
-(char)isInspectorMinimized;
-(char)isPointInsideAccessibilityInspector:(id)arg1 ;
-(int)activeApplicationOrientation;
-(void)copyStringToPasteboard:(id)arg1 ;
-(void)activateSOSMode;
-(char)isScreenLockedWithPasscode:(char*)arg1 ;
-(void)screenLockStatus:(/*^block*/id)arg1 ;
-(char)isSystemSleeping;
-(char)isSyncingRestoringResettingOrUpdating;
-(char)areSystemGesturesDisabledNatively;
-(char)areSystemGesturesDisabledByAccessibility;
-(id)installedApps;
-(void)isMediaPlayingForApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pauseMedia;
-(void)resumeMedia;
-(char)hasActiveOrPendingCall;
-(char)hasActiveOrPendingCallOrFaceTime;
-(char)isMakingEmergencyCall;
-(void)showNotificationCenter;
-(void)hideNotificationCenter;
-(char)showNotificationCenter:(char)arg1 ;
-(void)showControlCenter:(char)arg1 ;
-(void)openAppSwitcher;
-(void)dismissAppSwitcher;
-(void)simulateEdgePressHaptics;
-(void)revealSpotlight;
-(char)clearSideAppState;
-(void)setSiriIsTalking:(char)arg1 ;
-(void)openVoiceControl;
-(char)isVoiceControlRunning;
-(char)isSpeakThisTemporarilyDisabled;
-(id)allowedMedusaGestures;
-(char)performMedusaGesture:(unsigned)arg1 ;
-(void)systemAppInfoWithQuery:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(char)isSystemAppShowingAnAlert;
-(id)focusedAppPID;
-(int)purpleBuddyPID;
-(void)purpleBuddyPID:(/*^block*/id)arg1 ;
-(id)runningAppPIDs;
-(char)isSystemAppFrontmost;
-(void)isSystemAppFrontmost:(/*^block*/id)arg1 ;
-(char)isSystemAppFrontmostExludingSiri;
-(char)isPurpleBuddyAppFrontmost;
-(char)isSettingsAppFrontmost;
-(id)focusedApps;
-(char)loadGAXBundleForUnmanagedASAM;
-(void)launchMagnifierApp;
-(void)isMagnifierVisibleWithCompletion:(/*^block*/id)arg1 ;
-(void)userEventOccurred;
-(void)setLockScreenDimTimerEnabled:(char)arg1 ;
-(char)isMagnifierVisible;
-(id)applicationWithIdentifier:(id)arg1 ;
-(id)focusedAppProcess;
-(id)runningAppProcesses;
-(id)_axSpringBoardServerInstanceIfExists;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(AXAccessQueue *)accessQueue;
-(int)pid;
@end
