/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:47 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SYDPushManager;

@interface SYDSchedulerPushManager : NSObject {

	NSString* _environment;
	NSString* _user;
	double _refreshInterval;
	SYDPushManager* _pushManager;

}

@property (nonatomic,readonly) NSString * environment; 
@property (nonatomic,readonly) NSString * user;                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) SYDPushManager * pushManager;              //@synthesize pushManager=_pushManager - In the implementation block
+(id)sharedManagers;
+(void)_registerManager:(id)arg1 ;
+(void)_managerDidChange:(id)arg1 ;
+(void)_unregisterManager:(id)arg1 ;
-(id)persistentState;
-(void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3 ;
-(double)nextUpdateInterval;
-(void)resetUpdates;
-(void)didUpdateTokenOnServer:(id)arg1 ;
-(id)initWithPersistentState:(id)arg1 pushManager:(id)arg2 ;
-(SYDPushManager *)pushManager;
-(void)_managerNeedsUpdateOnServer:(id)arg1 ;
-(void)_managerDidReceivePushNotification:(id)arg1 ;
-(void)dealloc;
-(NSString *)environment;
-(double)refreshInterval;
-(char)needsUpdate;
-(void)shutdown;
-(id)publicToken;
-(NSString *)user;
@end

