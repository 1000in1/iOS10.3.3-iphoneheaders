/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebCookieStorageObjCAdapter : NSObject {

	/*function pointer*/void* m_cookieChangeCallback;

}
-(void)notifyCookiesChangedOnMainThread;
-(void)cookiesChangedNotificationHandler:(id)arg1 ;
-(void)startListeningForCookieChangeNotificationsWithCallback:(/*function pointer*/void*)arg1 ;
-(void)stopListeningForCookieChangeNotifications;
@end

