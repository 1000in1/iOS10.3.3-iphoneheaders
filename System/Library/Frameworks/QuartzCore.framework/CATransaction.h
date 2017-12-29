/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CATransaction : NSObject
+(char)lowLatency;
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)popAnimator;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(void)setPresentationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
+(char)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(char)arg1 ;
+(char)disableRunLoopObserverCommits;
+(void)setDisableRunLoopObserverCommits:(char)arg1 ;
+(void)assertInactive;
+(double)inputTime;
+(id)valueForKey:(id)arg1 ;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)flush;
+(void)synchronize;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setLowLatency:(char)arg1 ;
+(unsigned)currentState;
+(void)setInputTime:(double)arg1 ;
+(void)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(char)disableActions;
+(void)setDisableActions:(char)arg1 ;
+(void)lock;
+(void)unlock;
+(unsigned)generateSeed;
+(void)commit;
+(void)begin;
+(double)animationDuration;
+(void)activate;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(id)animationTimingFunction;
+(/*^block*/id)animator;
+(void)activateBackground:(char)arg1 ;
+(double)commitTime;
+(void)setCommitTime:(double)arg1 ;
@end
