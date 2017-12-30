/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <Home/HOOnboardingRootNavigationControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>

@class HFSimpleItemManager, NAFuture, HUWallpaperView, NSMutableDictionary, NSMutableArray, NSString;

@interface HOMainTabBarController : UITabBarController <HFItemManagerDelegate, HFHomeManagerObserver, HOOnboardingRootNavigationControllerDelegate, HUPresentationDelegate> {

	char _showingOnboarding;
	char _showingDataSyncing;
	HFSimpleItemManager* _itemManager;
	NAFuture* _loadTabsFuture;
	NAFuture* _dataSyncStateChangeProcessingFuture;
	HUWallpaperView* _wallpaperView;
	NSMutableDictionary* _tabItemsMap;
	NSMutableDictionary* _tabClassToNavigationControllerMap;
	NSMutableArray* _triggersPendingExecutionConfirmation;

}

@property (nonatomic,retain) HFSimpleItemManager * itemManager;                                    //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,retain) NAFuture * loadTabsFuture;                                            //@synthesize loadTabsFuture=_loadTabsFuture - In the implementation block
@property (assign,nonatomic) char showingOnboarding;                                               //@synthesize showingOnboarding=_showingOnboarding - In the implementation block
@property (assign,nonatomic) char showingDataSyncing;                                              //@synthesize showingDataSyncing=_showingDataSyncing - In the implementation block
@property (nonatomic,retain) NAFuture * dataSyncStateChangeProcessingFuture;                       //@synthesize dataSyncStateChangeProcessingFuture=_dataSyncStateChangeProcessingFuture - In the implementation block
@property (nonatomic,retain) HUWallpaperView * wallpaperView;                                      //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tabItemsMap;                                    //@synthesize tabItemsMap=_tabItemsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tabClassToNavigationControllerMap;              //@synthesize tabClassToNavigationControllerMap=_tabClassToNavigationControllerMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * triggersPendingExecutionConfirmation;                //@synthesize triggersPendingExecutionConfirmation=_triggersPendingExecutionConfirmation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onboardingNavigationControllerDidFinish:(id)arg1 ;
-(id)presentConfirmationAlertForExecutingTrigger:(id)arg1 ;
-(int)preferredBarStyleForTabViewController:(id)arg1 ;
-(void)showOnboardingIfNeededForHomeInvitation:(id)arg1 ;
-(id)selectTab:(int)arg1 ;
-(void)setTabItemsMap:(NSMutableDictionary *)arg1 ;
-(void)setTabClassToNavigationControllerMap:(NSMutableDictionary *)arg1 ;
-(void)setLoadTabsFuture:(NAFuture *)arg1 ;
-(NSMutableDictionary *)tabItemsMap;
-(void)setTriggersPendingExecutionConfirmation:(NSMutableArray *)arg1 ;
-(void)setDataSyncStateChangeProcessingFuture:(NAFuture *)arg1 ;
-(void)_showOnboardingIfNeededForHome:(id)arg1 ;
-(NAFuture *)loadTabsFuture;
-(id)_navigationControllerForItem:(id)arg1 ;
-(void)_showOnboardingIfNeededForHome:(id)arg1 homeInvitation:(id)arg2 ;
-(NAFuture *)dataSyncStateChangeProcessingFuture;
-(id)_processDataSyncStateChangeForHomeManager:(id)arg1 ;
-(void)setShowingDataSyncing:(char)arg1 ;
-(char)showingOnboarding;
-(void)_showDataSyncingControllerForState:(unsigned)arg1 ;
-(void)_dismissOnboardingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)tabClassToNavigationControllerMap;
-(char)showingDataSyncing;
-(void)_showOnboardingWithOnboardingStates:(id)arg1 isFirstHome:(char)arg2 ;
-(void)setShowingOnboarding:(char)arg1 ;
-(NSMutableArray *)triggersPendingExecutionConfirmation;
-(void)_presentLocationTriggerAlertsIfNeeded;
-(void)_presentLocationAlertForTrigger:(id)arg1 ;
-(void)_userDidConfirmExection:(char)arg1 ofTrigger:(id)arg2 ;
-(id)init;
-(void)viewWillLayoutSubviews;
-(void)applicationWillEnterForeground;
-(HFSimpleItemManager *)itemManager;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(void)setItemManager:(HFSimpleItemManager *)arg1 ;
-(void)finishPresentation:(id)arg1 animated:(char)arg2 ;
-(char)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
-(HUWallpaperView *)wallpaperView;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1 ;
@end

