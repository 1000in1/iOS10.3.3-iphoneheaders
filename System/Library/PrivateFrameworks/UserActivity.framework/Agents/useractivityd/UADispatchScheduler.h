/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSString;

@interface UADispatchScheduler : NSObject {

	double _frequency;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _executingGroup;
	NSString* _name;
	/*^block*/id _block;
	unsigned long long _runCount;
	unsigned long long _nextTime;

}

@property (retain,readonly) NSObject*<OS_dispatch_source> source;                     //@synthesize source=_source - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_group> executingGroup;              //@synthesize executingGroup=_executingGroup - In the implementation block
@property (copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (assign) double frequency;                                                  //@synthesize frequency=_frequency - In the implementation block
@property (retain,readonly) id block;                                                 //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long runCount;                                     //@synthesize runCount=_runCount - In the implementation block
@property (readonly) unsigned long long nextTime;                                     //@synthesize nextTime=_nextTime - In the implementation block
+(id)dispatchScheduler:(id)arg1 frequency:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(char)scheduleAt:(id)arg1 ;
-(unsigned long long)nextTime;
-(char)scheduleNext:(double)arg1 ;
-(id)nextRunTimeString;
-(void)doIt;
-(id)init:(id)arg1 frequency:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_group>)executingGroup;
-(void)updateFrequency:(double)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)reset;
-(void)suspend;
-(void)resume;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)block;
-(unsigned long long)runCount;
-(void)waitUntilComplete;
@end

