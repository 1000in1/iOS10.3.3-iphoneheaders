/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUIApplicationServiceDelegate <NSObject>
@optional
-(void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3;
-(void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)applicationService:(id)arg1 deleteAllSnapshotsForBundleIdentifier:(id)arg2;
-(void)applicationService:(id)arg1 setNextWakeDate:(id)arg2 forBundleIdentifier:(id)arg3;
-(void)applicationService:(id)arg1 suspendApplicationWithBundleIdentifier:(id)arg2;

@end

