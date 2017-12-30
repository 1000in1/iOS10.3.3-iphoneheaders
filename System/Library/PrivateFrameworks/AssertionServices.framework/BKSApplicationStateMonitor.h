/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, BSSignal, NSArray;

@interface BKSApplicationStateMonitor : NSObject {

	NSObject*<OS_xpc_object> _connection;
	BSSignal* _invalidationSignal;
	/*^block*/id _handler;
	unsigned _interestedStates;
	NSArray* _interestedBundleIDs;
	char _elevatedPriority;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _messageHandlingQueue;
	NSObject*<OS_xpc_object> _serverEndpoint;
	char _denied;

}

@property (assign,nonatomic) unsigned interestedStates; 
@property (nonatomic,copy) NSArray * interestedBundleIDs; 
@property (nonatomic,copy) id handler; 
@property (nonatomic,readonly) char elevatedPriority; 
-(void)queue_invalidate;
-(void)queue_reregister;
-(void)queue_connectionWasInvalidated;
-(void)queue_handleMessage:(id)arg1 ;
-(id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned)arg3 elevatedPriority:(char)arg4 ;
-(void)setInterestedBundleIDs:(NSArray *)arg1 ;
-(void)setInterestedStates:(unsigned)arg1 ;
-(void)setElevatedPriority:(char)arg1 ;
-(void)queue_registerWithServer;
-(void)queue_setHandler:(/*^block*/id)arg1 ;
-(void)queue_setInterestedBundleIDs:(id)arg1 ;
-(void)queue_setInterestedStates:(unsigned)arg1 ;
-(void)queue_setElevatedPriority:(char)arg1 ;
-(void)updateInterestedBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(void)queue_updateInterestedStates;
-(void)queue_updateInterestedStates:(char)arg1 ;
-(char)elevatedPriority;
-(void)updateInterestedStates:(unsigned)arg1 ;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 elevatedPriority:(char)arg3 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)_connection;
-(unsigned)mostElevatedApplicationStateForPID:(int)arg1 ;
-(void)_setEndpoint:(id)arg1 ;
-(unsigned)interestedStates;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(void)updateInterestedBundleIDs:(id)arg1 ;
-(void)applicationInfoForApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)applicationStateForApplication:(id)arg1 ;
-(id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2 ;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 isUserInteractive:(char)arg3 ;
-(NSArray *)interestedBundleIDs;
-(void)applicationInfoForPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(char)isApplicationBeingDebugged:(id)arg1 ;
@end

