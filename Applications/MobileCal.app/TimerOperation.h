/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSTimer;

@interface TimerOperation : NSOperation {

	char _executing;
	char _finished;
	NSTimer* _timer;
	double _timeInterval;

}

@property (assign) double timeInterval;                       //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                 //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) char isExecuting;              //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) char isFinished;               //@synthesize finished=_finished - In the implementation block
+(id)operationWithTimeInterval:(double)arg1 ;
-(id)init;
-(void)cancel;
-(void)start;
-(void)timerFired:(id)arg1 ;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(void)main;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)finish;
-(char)isAsynchronous;
-(id)initWithTimeInterval:(double)arg1 ;
@end

