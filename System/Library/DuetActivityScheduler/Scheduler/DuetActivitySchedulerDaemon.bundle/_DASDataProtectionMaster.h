/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _DASDataProtectionMaster : NSObject {

	char _deviceFormatedForContentProtection;
	char _notifyEnabled;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _availableState;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _notifyToken;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateQueue;               //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,readonly) char deviceFormatedForContentProtection;               //@synthesize deviceFormatedForContentProtection=_deviceFormatedForContentProtection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * handlers;                        //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * availableState;                  //@synthesize availableState=_availableState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notifyQueue;              //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,readonly) int notifyToken;                                       //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,readonly) char notifyEnabled;                                    //@synthesize notifyEnabled=_notifyEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(char)isDataAvailableFor:(id)arg1 ;
-(char)isDataAvailableForClassA;
-(char)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(char)deviceHasBeenUnlockedSinceBoot;
-(char)deviceIsPasswordConfigured;
-(id)registerStateChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterStateChangeHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(char)deviceIsLocked;
-(int)notifyToken;
-(NSMutableDictionary *)handlers;
-(char)deviceFormatedForContentProtection;
-(NSMutableDictionary *)availableState;
-(char)notifyEnabled;
@end
