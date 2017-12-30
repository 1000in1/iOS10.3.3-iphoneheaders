/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKeychainProxy/CKDLockMonitor.h>
#import <CloudKeychainProxy/XPCNotificationListener.h>

@protocol CKDLockListener;
@class NSObject, XPCNotificationDispatcher;

@interface CKDAKSLockMonitor : NSObject <CKDLockMonitor, XPCNotificationListener> {

	char _unlockedSinceBoot;
	char _locked;
	NSObject*<CKDLockListener> _listener;
	XPCNotificationDispatcher* _dispatcher;
	/*^block*/id _notificationBlock;

}

@property (retain) XPCNotificationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (copy) id notificationBlock;                                  //@synthesize notificationBlock=_notificationBlock - In the implementation block
@property (readonly) char unlockedSinceBoot;                            //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (readonly) char locked;                                       //@synthesize locked=_locked - In the implementation block
@property (__weak) NSObject*<CKDLockListener> listener;                 //@synthesize listener=_listener - In the implementation block
+(id)monitor;
-(void)recheck;
-(void)notifyListener;
-(void)connectTo:(id)arg1 ;
-(void)handleNotification:(const char*)arg1 ;
-(id)init;
-(NSObject*<CKDLockListener>)listener;
-(void)setListener:(NSObject*<CKDLockListener>)arg1 ;
-(id)notificationBlock;
-(void)setNotificationBlock:(id)arg1 ;
-(char)locked;
-(XPCNotificationDispatcher *)dispatcher;
-(void)setDispatcher:(XPCNotificationDispatcher *)arg1 ;
-(char)unlockedSinceBoot;
@end

