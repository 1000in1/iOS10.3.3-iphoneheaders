/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface iAP2ProtocolMgr : NSObject {

	BOOL InitComplete;
	NSObject*<OS_dispatch_queue> _TimerQ;

}

@property (nonatomic,readonly) BOOL InitComplete; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> TimerQ;              //@synthesize TimerQ=_TimerQ - In the implementation block
+(id)sharedInstance;
-(void)_changeListenerQueuePriorityHigh:(id)arg1 ;
-(void)_changeListenerQueuePriorityStop:(id)arg1 ;
-(BOOL)ProcessControlSession:(unsigned char)arg1 ForPort:(id)arg2 Data:(char*)arg3 Len:(unsigned)arg4 ;
-(BOOL)ProcessBufferSession:(unsigned char)arg1 ForPort:(id)arg2 Data:(char*)arg3 Len:(unsigned)arg4 ;
-(BOOL)ProcessEASession:(unsigned char)arg1 ForPort:(id)arg2 Data:(char*)arg3 Len:(unsigned)arg4 ;
-(BOOL)ProcessTestSession:(unsigned char)arg1 ForPort:(id)arg2 Data:(char*)arg3 Len:(unsigned)arg4 ;
-(BOOL)InitComplete;
-(NSObject*<OS_dispatch_queue>)TimerQ;
-(id)init;
-(void)dealloc;
@end

