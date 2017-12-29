/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIResponder.h>
#import <AppStore/SKUIAdvertisingSelectionTargetAction.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <AppStore/SKUIApplicationDelegate.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <AppStore/SKUIMetricsApplicationDelegate.h>

@class ASApplicationController, ASLaunchNotificationsController, SKUIURL, NSMutableArray, UIWindow, NSString;

@interface ASAppDelegate : UIResponder <SKUIAdvertisingSelectionTargetAction, CLLocationManagerDelegate, SKUIApplicationDelegate, UIApplicationTestingDelegate, SKUIMetricsApplicationDelegate> {

	ASApplicationController* _applicationController;
	char _didDisplayFirstPage;
	ASLaunchNotificationsController* _launchNotificationsController;
	SKUIURL* _launchURL;
	int _networkStartCount;
	char _onActiveShouldResumeApplication;
	NSMutableArray* _presentationQueue;
	/*^block*/id _quickActionBlock;
	UIWindow* _window;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)_networkingStartNotification:(id)arg1 ;
-(void)_networkingStopNotification:(id)arg1 ;
-(id)_newDefaultTabBarItemsWithClientContext:(id)arg1 style:(int)arg2 ;
-(void)_showBlankPlaceholderViewController;
-(void)_loadApplicationWithLaunchOptions:(id)arg1 ;
-(void)askForLocationPermissionIfNeeded;
-(void)_openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(void)_handleNonHostProductURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)_runLaunchTestWithName:(id)arg1 options:(id)arg2 ;
-(char)_runTestWithName:(id)arg1 options:(id)arg2 tabIdentifier:(id)arg3 ;
-(void)_showExternalURL:(id)arg1 ;
-(char)_runSearchResultsTestWithName:(id)arg1 options:(id)arg2 ;
-(char)_runTabSwitchTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_lookupProductURLForBundleIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(unsigned)_indexOfTabWithIdentifier:(id)arg1 ;
-(void)_showTransientViewController:(id)arg1 ;
-(void)_showEULAViewControllerWithURL:(id)arg1 ;
-(void)_selectUpdatesTab;
-(void)_askForLocationPermission;
-(id)init;
-(void)dealloc;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(unsigned)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void)skuiadvertising_advertWasSelected:(id)arg1 ;
-(void)application:(id)arg1 didReselectTabBarItem:(id)arg2 ;
-(void)application:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)application:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(id)application:(id)arg1 navigationControllerWithTabBarItem:(id)arg2 ;
-(void)applicationDidChangeClientContext:(id)arg1 ;
-(void)applicationDidDisplayFirstPage:(id)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
@end
