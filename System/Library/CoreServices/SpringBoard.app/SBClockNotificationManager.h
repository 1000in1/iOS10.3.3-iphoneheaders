/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationCenterObserver.h>

@class UNUserNotificationCenter, NSString;

@interface SBClockNotificationManager : NSObject <UNUserNotificationCenterObserver> {

	UNUserNotificationCenter* _userNotificationCenter;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_updateAlarmStatusBarItemForPendingNotificationRequests:(id)arg1 ;
-(void)_updateTimerShortcutItems;
-(void)removePendingNotificationRequestsWithIdentifier:(id)arg1 ;
-(id)init;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getPendingNotificationRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didDeliverNotifications:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didChangePendingNotificationRequests:(id)arg2 ;
@end

