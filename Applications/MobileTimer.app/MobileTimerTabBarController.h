/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>

@class UINavigationController;

@interface MobileTimerTabBarController : UITabBarController {

	UINavigationController* _stopwatchNavController;
	UINavigationController* _timerNavController;
	UINavigationController* _alarmNavControllerSmall;
	UINavigationController* _alarmNavController;
	UINavigationController* _sleepAlarmNavController;
	UINavigationController* _worldClockNavControllerSmall;
	UINavigationController* _worldClockNavController;

}
-(void)populateShortcutItems;
-(id)worldClockViewController;
-(id)alarmViewController;
-(id)stopwatchViewController;
-(id)timerViewController;
-(id)bedtimeViewController;
-(void)performActionForShortcutItem:(id)arg1 ;
-(void)invalidateViewControllersWithTraitCollection:(id)arg1 ;
-(id)navigationControllerForHorizontalSizeClass:(int)arg1 verticalSizeClass:(int)arg2 atIndex:(int)arg3 ;
-(id)topViewControllerForTab:(int)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(char)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
@end

