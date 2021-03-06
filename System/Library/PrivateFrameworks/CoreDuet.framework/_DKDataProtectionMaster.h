/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _DKDataProtectionMaster : NSObject {

	NSMutableDictionary* _handlers;
	char _deviceFormatedForContentProtection;
	NSMutableDictionary* _availableState;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _notifyToken;
	char _notifyEnabled;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(char)isDataAvailableFor:(id)arg1 ;
-(char)isDataAvailableForClassA;
-(char)isDataAvailableForClassC;
-(void)handleKeyBagLockNotification;
-(char)deviceHasBeenUnlockedSinceBoot;
-(char)deviceIsPasswordConfigured;
-(id)registerStateChangeHandler:(/*^block*/id)arg1 ;
-(void)deregisterStateChangeHandler:(id)arg1 ;
-(char)deviceIsLocked;
@end

