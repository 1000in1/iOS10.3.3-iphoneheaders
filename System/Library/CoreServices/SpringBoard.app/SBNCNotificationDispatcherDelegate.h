/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/NCNotificationDispatcherDelegate.h>

@class SBNotificationBannerDestination, NSString;

@interface SBNCNotificationDispatcherDelegate : NSObject <NCNotificationDispatcherDelegate> {

	SBNotificationBannerDestination* _bannerDestination;

}

@property (assign,nonatomic,__weak) SBNotificationBannerDestination * bannerDestination;              //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBNotificationBannerDestination *)bannerDestination;
-(void)setBannerDestination:(SBNotificationBannerDestination *)arg1 ;
-(void)_requestAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)dispatcher:(id)arg1 launchForegroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5 ;
-(void)dispatcher:(id)arg1 launchBackgroundApplicationForAction:(id)arg2 notificationRequest:(id)arg3 fromDestination:(id)arg4 withParameters:(id)arg5 ;
-(char)_isPushOrLocalNotificationRequest:(id)arg1 ;
-(int)_launchOriginFromDestination:(id)arg1 ;
-(void)dispatcher:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forDestination:(id)arg3 notificationRequest:(id)arg4 withParameters:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)dispatcher:(id)arg1 didExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 ;
-(void)dispatcher:(id)arg1 willExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
@end

