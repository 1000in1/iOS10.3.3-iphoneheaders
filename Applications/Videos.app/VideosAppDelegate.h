/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <Videos/VideosExtrasContextDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>
#import <Videos/VideosRentalAlertControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, VideosExtrasContext, NSMutableDictionary, VideosExtrasPlaybackContext, NSString;

@interface VideosAppDelegate : UIResponder <UIApplicationTestingDelegate, VideosExtrasContextDelegate, MPVideoOverlayDelegate, VideosRentalAlertControllerDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	VideosExtrasContext* _extrasContext;
	NSMutableDictionary* _extrasPidToStoreIDMap;
	VideosExtrasPlaybackContext* _extrasPlaybackContext;
	/*^block*/id _beginPlaybackBlock;
	/*^block*/id _checkCellularPlaybackBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,copy) id beginPlaybackBlock;                      //@synthesize beginPlaybackBlock=_beginPlaybackBlock - In the implementation block
@property (nonatomic,copy) id checkCellularPlaybackBlock;              //@synthesize checkCellularPlaybackBlock=_checkCellularPlaybackBlock - In the implementation block
@property (nonatomic,retain) UIWindow * window;                        //@synthesize window=_window - In the implementation block
-(char)_switchViewTest:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 ;
-(char)_playLocalVideo:(id)arg1 ;
-(char)_selectLocalVideo:(id)arg1 ;
-(char)_scrollViewTest:(id)arg1 testOptions:(id)arg2 identifier:(id)arg3 ;
-(id)_initialPPT;
-(id)_findScrollViewInView:(id)arg1 ;
-(id)_findScrollViewInViewController:(id)arg1 ;
-(id)_selectFirstVideo:(id)arg1 ;
-(void)launchExtrasForMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)videosRentalAlertControllerDidCancel:(id)arg1 ;
-(void)videosRentalAlertControllerDidFinish:(id)arg1 ;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)_updateCloudLibraryAndRentals;
-(void)launchExtrasForMediaItem:(id)arg1 ;
-(id)checkCellularPlaybackBlock;
-(void)setCheckCellularPlaybackBlock:(id)arg1 ;
-(char)_playItemWithPID:(id)arg1 ;
-(void)launchExtrasWithURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3 ;
-(void)setBeginPlaybackBlock:(id)arg1 ;
-(id)beginPlaybackBlock;
-(void)_endDiscoveringMediaLibrariesIfNecessary;
-(void)launchExtrasWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)launchExtrasWithContext:(id)arg1 ;
-(id)_mediaItemsFromMediaElement:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)application:(id)arg1 willChangeStatusBarOrientation:(int)arg2 duration:(double)arg3 ;
-(void)application:(id)arg1 didChangeStatusBarOrientation:(int)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(char)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(char)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(char)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2 ;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)_itemWillChangeNotification:(id)arg1 ;
-(void)extrasRequestReloadWithContext:(id)arg1 ;
-(void)extrasRequestsPlaybackStop;
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(char)arg2 ;
-(void)extrasContext:(id)arg1 hadFatalError:(id)arg2 ;
@end
