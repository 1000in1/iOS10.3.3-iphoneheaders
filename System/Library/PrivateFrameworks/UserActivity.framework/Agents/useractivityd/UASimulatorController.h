/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, SFPeerDevice, NSSet;

@interface UASimulatorController : UACornerActionManagerHandler {

	NSMutableSet* _simulators;
	NSObject*<OS_dispatch_queue> _dispatchQ;
	unsigned _simulatorPort;
	SFPeerDevice* _ourPeerDevice;

}

@property (assign) unsigned simulatorPort;                              //@synthesize simulatorPort=_simulatorPort - In the implementation block
@property (retain) SFPeerDevice * ourPeerDevice;                        //@synthesize ourPeerDevice=_ourPeerDevice - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQ;              //@synthesize dispatchQ=_dispatchQ - In the implementation block
@property (retain,readonly) NSSet * simulators; 
-(NSSet *)simulators;
-(void)addSimulator:(id)arg1 ;
-(void)removeSimulator:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQ;
-(void)setDispatchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)simulatorPort;
-(void)setSimulatorPort:(unsigned)arg1 ;
-(SFPeerDevice *)ourPeerDevice;
-(void)setOurPeerDevice:(SFPeerDevice *)arg1 ;
-(char)active;
-(id)initWithManager:(id)arg1 ;
-(id)statusString;
-(id)simulatorStatus;
-(char)terminate;
@end

