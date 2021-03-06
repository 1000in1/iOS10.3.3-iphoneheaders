/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/Support/watchlistd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <watchlistd/APSConnectionDelegate.h>

@class APSConnection, NSString;

@interface WLDPushNotificationController : NSObject <APSConnectionDelegate> {

	APSConnection* _connection;
	NSString* _environment;
	char _notificationsEnabled;
	char _pushEnabled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)setNotificationsEnabled:(char)arg1 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
@end

