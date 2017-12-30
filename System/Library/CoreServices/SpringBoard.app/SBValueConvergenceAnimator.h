/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBValueConvergenceAnimator : NSObject {

	float _previousForce;
	float _diff;
	char _finishesOnValueConvergence;
	float _currentValue;
	float _targetValue;
	/*^block*/id _convergenceFunction;
	/*^block*/id _applier;
	/*^block*/id _completion;
	int _frameInterval;
	double _startTime;
	double _lastFireTime;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastFireTime;                          //@synthesize lastFireTime=_lastFireTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (assign,nonatomic) float currentValue;                           //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) float targetValue;                            //@synthesize targetValue=_targetValue - In the implementation block
@property (assign,nonatomic) char finishesOnValueConvergence;              //@synthesize finishesOnValueConvergence=_finishesOnValueConvergence - In the implementation block
@property (nonatomic,copy) id convergenceFunction;                         //@synthesize convergenceFunction=_convergenceFunction - In the implementation block
@property (nonatomic,copy) id applier;                                     //@synthesize applier=_applier - In the implementation block
@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) int frameInterval;                            //@synthesize frameInterval=_frameInterval - In the implementation block
-(void)setConvergenceFunctionWithConstant:(int)arg1 ;
-(void)setFinishesOnValueConvergence:(char)arg1 ;
-(void)_invokeApplier;
-(void)_invokeCompletionWithFinished:(char)arg1 ;
-(void)_convergeValue;
-(char)finishesOnValueConvergence;
-(id)convergenceFunction;
-(void)setConvergenceFunction:(id)arg1 ;
-(double)lastFireTime;
-(void)setLastFireTime:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(void)_reset;
-(void)stop;
-(float)targetValue;
-(void)setTargetValue:(float)arg1 ;
-(void)setFrameInterval:(int)arg1 ;
-(char)isRunning;
-(void)start;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(double)startTime;
-(double)elapsedTime;
-(float)currentValue;
-(void)setCurrentValue:(float)arg1 ;
-(int)frameInterval;
-(void)setApplier:(id)arg1 ;
-(id)applier;
@end

