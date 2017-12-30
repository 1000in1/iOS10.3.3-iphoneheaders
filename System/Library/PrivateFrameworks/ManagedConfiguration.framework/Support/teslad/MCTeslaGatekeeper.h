/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:07 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/teslad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSTimer, NSString;

@interface MCTeslaGatekeeper : NSObject <NSXPCListenerDelegate> {

	NSTimer* _idleTimer;
	unsigned long long _lastConnectionTimestamp;
	double _machTimeScaleFactor;

}

@property (nonatomic,retain) NSTimer * idleTimer;                           //@synthesize idleTimer=_idleTimer - In the implementation block
@property (assign) unsigned long long lastConnectionTimestamp;              //@synthesize lastConnectionTimestamp=_lastConnectionTimestamp - In the implementation block
@property (assign) double machTimeScaleFactor;                              //@synthesize machTimeScaleFactor=_machTimeScaleFactor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGatekeeper;
-(void)setLastConnectionTimestamp:(unsigned long long)arg1 ;
-(void)setMachTimeScaleFactor:(double)arg1 ;
-(unsigned long long)lastConnectionTimestamp;
-(double)machTimeScaleFactor;
-(void)idleTimerDidFire:(id)arg1 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resetIdleTimer;
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
@end

