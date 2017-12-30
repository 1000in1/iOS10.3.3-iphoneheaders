/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol _HKAnchoredObjectQueryObserver;
@class UIWindow, CHWorkoutsListDataProvider, CHTabBarController, FitnessNavigationController, FUNavigationController, CHFitnessFriendsNavigationController, MonthViewController, AchievementsViewController, HKHealthStore, FFFriendListManager, CHFriendManager, _HKAnchoredObjectQueryManager, LoadingView, CHActivityChartDataCache, CHNavigationTracker, AWDServerConnection, FIUIModel, FitnessDateCache, NSString;

@interface FitnessAppDelegate : UIResponder <UIApplicationTestingDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	CHWorkoutsListDataProvider* _dataProvider;
	CHTabBarController* _tabBarController;
	FitnessNavigationController* _navController;
	FUNavigationController* _workoutsNavController;
	FUNavigationController* _achievementsNav;
	CHFitnessFriendsNavigationController* _sharingNavigationController;
	MonthViewController* _monthVC;
	AchievementsViewController* _achievementsVC;
	HKHealthStore* _healthStore;
	FFFriendListManager* _friendListManager;
	CHFriendManager* _friendManager;
	_HKAnchoredObjectQueryManager* _queryManager;
	LoadingView* _loadingView;
	CHWorkoutsListDataProvider* _workoutsDataProvider;
	CHActivityChartDataCache* _chartDataCache;
	CHNavigationTracker* _navigationTracker;
	id<_HKAnchoredObjectQueryObserver> _calorieGoalObserver;
	AWDServerConnection* _awdServerConnection;
	char _shouldRetryQuery;
	FIUIModel* _model;
	FitnessDateCache* _dateCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) FIUIModel * model;                         //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) FitnessDateCache * dateCache;              //@synthesize dateCache=_dateCache - In the implementation block
-(void)_createOrbActionsWithSharingEnabled:(char)arg1 ;
-(void)_fitnessFriendsListChanged:(id)arg1 ;
-(void)_achievementsUnreadCountChanged:(id)arg1 ;
-(void)_setupAnchoredObjectQuery;
-(void)_loadNavigationView;
-(void)_handleShortcutItem:(id)arg1 didJustLaunch:(char)arg2 ;
-(void)_handleTodayShortcut;
-(void)_refreshBadgeCounts;
-(void)_showCoachingDataCollectionMessageIfNeeded;
-(void)_setBadgeCount:(unsigned)arg1 forTabBarItem:(id)arg2 ;
-(id)_fitnessDataCollectionEnabledPreference;
-(void)_setFitnessDataCollectionEnabled:(char)arg1 ;
-(void)_migrateFitnessDataCollectionPreferenceIfNeeded;
-(void)_handleHistoryShortcutDidJustLaunch:(char)arg1 ;
-(void)_handleWorkoutsShortcut;
-(void)_handleAchievementsShortcut;
-(void)_handleFriendsShortcut;
-(void)_handleActivityShareShortcut;
-(void)setDateCache:(FitnessDateCache *)arg1 ;
-(char)testOneDayViewDataGathering;
-(char)testWeekViewDataGathering;
-(char)testMonthViewScrolling;
-(char)testMonthViewHorizontalSwiping;
-(char)testDayViewPaging;
-(void)_blockDidComplete:(id)arg1 ;
-(id)predicateInRangeFrom:(double)arg1 to:(double)arg2 ;
-(id)_goToMonthView;
-(void)_updateForMonthViewSwipeTest;
-(id)_goToDayView;
-(void)_dayPagingScrollSettled:(id)arg1 ;
-(void)_setModelToPreviousDay;
-(id)_weekStartForDate:(id)arg1 ;
-(char)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(FIUIModel *)model;
-(void)_incrementForScrollTest;
-(void)setModel:(FIUIModel *)arg1 ;
-(id)_createRootViewController;
-(FitnessDateCache *)dateCache;
@end

