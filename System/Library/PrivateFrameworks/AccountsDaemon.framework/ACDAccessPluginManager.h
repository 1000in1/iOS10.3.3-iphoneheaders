/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSObject;

@interface ACDAccessPluginManager : NSObject {

	NSSet* _accessPlugins;
	NSObject*<OS_dispatch_queue> _accessPluginQueue;

}
-(id)init;
-(void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_authorizationPluginForAccountType:(id)arg1 ;
@end

