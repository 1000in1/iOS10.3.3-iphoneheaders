/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIApplication.h>
#import <Bridge/PSSplitViewControllerNavigationDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <libobjc.A.dylib/EAAccessoryDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class UIWindow, PSSplitViewController, PSUIPrefsRootController, NSMutableSet, EAAccessory, NSString;

@interface PreferencesAppController : UIApplication <PSSplitViewControllerNavigationDelegate, UIApplicationDelegate, EAAccessoryDelegate, MCProfileConnectionObserver, UISplitViewControllerDelegate> {

	PSSplitViewController* _splitViewController;
	PSUIPrefsRootController* _controller;
	UIWindow* _window;
	char _isLocked;
	NSMutableSet* _busyControllers;
	char _loadingExternalURL;
	unsigned _backgroundTaskHandle;
	double _timeoutLimit;
	char _settingsWasResigned;
	unsigned _rootDomainConnect;
	unsigned _pmNotifier;
	IONotificationPortRef _systemPowerPortRef;
	CFRunLoopSourceRef _pmSource;
	EAAccessory* _speakerAccessory;

}

@property (assign) unsigned rootDomainConnect;                      //@synthesize rootDomainConnect=_rootDomainConnect - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)_registerForPowerNotifications;
-(id)oneTimeJumpURL;
-(void)processURL:(id)arg1 ;
-(void)clearControllersForSuspendedState;
-(void)generateURL;
-(id)keyValueDictionaryForURL:(id)arg1 ;
-(void)popToRootOfSettingsSelectGeneral:(char)arg1 performWithoutDeferringTransitions:(char)arg2 ;
-(void)systemDidWake:(id)arg1 ;
-(void)_deregisterForPowerNotifications;
-(id)currentSpecifierIDPath;
-(void)_setOffsetForController:(id)arg1 fromObjectPair:(id)arg2 ;
-(void)popToRootOfSettingsSelectGeneral:(char)arg1 ;
-(void)runScrollTest:(id)arg1 withOptions:(id)arg2 ;
-(void)updateFamilyInviteBadge;
-(void)_clearSavedPositionURL;
-(void)handleFamilyInviteChanged;
-(void)_handleBusyControllers;
-(id)quickActionShortcutItems;
-(void)processAppPrefsURL:(id)arg1 ;
-(void)_rationalizeAccountSettingsURLDictionary:(id)arg1 ;
-(void)_performURLHandlingForController:(id)arg1 dictionary:(id)arg2 items:(id)arg3 controllerNeedsPush:(char)arg4 ;
-(void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 objectOffsetPair:(id)arg3 ;
-(void)handleAuthKitURLIfNeededFromResourceDictionary:(id)arg1 overViewController:(id)arg2 ;
-(void)addBusyControllersFromRootController:(id)arg1 ;
-(void)_suspendControllers;
-(void)_resetSnapshotImage;
-(void)endAndInvalidateBackgroundTask;
-(void)_handleIconChangeForBundleID:(id)arg1 ;
-(void)dealloc;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResumeForEventsOnly;
-(double)defaultImageSnapshotExpiration;
-(void)applicationOpenURL:(id)arg1 ;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)preferredContentSizeCategory;
-(void)significantTimeChange;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(id)rootController;
-(void)controllerFinished:(id)arg1 ;
-(void)splitViewControllerDidPopToRootController:(id)arg1 ;
-(void)resetLocale;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)stopPlayback;
-(id)appWindow;
-(unsigned)rootDomainConnect;
-(void)setRootDomainConnect:(unsigned)arg1 ;
-(void)updateSoftwareUpdateBadgeOnSpecifier:(id)arg1 ;
-(void)_handleExternalApplicationChange;
-(void)accessoryDidDisconnect:(id)arg1 ;
-(void)processURL:(id)arg1 animated:(char)arg2 fromSearch:(char)arg3 ;
-(void)handleDeferredURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 ;
-(void)_accessoryDidConnect:(id)arg1 ;
@end

