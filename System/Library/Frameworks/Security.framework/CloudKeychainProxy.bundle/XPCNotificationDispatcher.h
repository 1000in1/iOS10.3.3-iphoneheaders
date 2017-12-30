/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSPointerArray;

@interface XPCNotificationDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSPointerArray* _listeners;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSPointerArray * listeners;                      //@synthesize listeners=_listeners - In the implementation block
+(id)dispatcher;
-(void)notification:(const char*)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSPointerArray *)listeners;
-(void)setListeners:(NSPointerArray *)arg1 ;
@end

