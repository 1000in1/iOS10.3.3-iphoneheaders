/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenManager, SBMainDisplayPolicyAggregator;

@interface SBTodayWidgetXCodeDebuggingUtility : NSObject {

	SBLockScreenManager* _lockScreenManager;
	SBMainDisplayPolicyAggregator* _policyAggregator;

}
-(void)launchTodayViewFromCurrentContextWithCompletion:(/*^block*/id)arg1 ;
-(void)_reallyLaunchTodayViewFromCurrentContextWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
@end

