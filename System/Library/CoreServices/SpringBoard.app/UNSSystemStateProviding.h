/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNSSystemStateProviding <NSObject>
@optional
-(void)handleContentAvailableNotificationForApplication:(id)arg1 userInfo:(id)arg2 priority:(int)arg3 completion:(/*^block*/id)arg4;

@required
-(char)isApplicationRestricted:(id)arg1;
-(char)isApplicationInstalled:(id)arg1;
-(char)shouldThrottleContentNotificationForApplicatin:(id)arg1 onDate:(id)arg2 withLastCount:(unsigned*)arg3 onDay:(int*)arg4;
-(char)isRemoteNotificationBackgroundModeSupportedForApplication:(id)arg1;
-(char)isNewsstandApplication:(id)arg1;
-(char)isNewsstandContentBackgroundModeSupportedForApplication:(id)arg1;
-(char)isBackgroundAppRefreshSupportedForApplication:(id)arg1;

@end

