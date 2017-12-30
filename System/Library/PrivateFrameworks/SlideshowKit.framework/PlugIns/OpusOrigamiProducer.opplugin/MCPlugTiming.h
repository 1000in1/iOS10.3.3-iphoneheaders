/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCPlugTiming
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double loopDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,readonly) double fullDuration; 
@property (assign,nonatomic) double numberOfLoops; 
@required
-(double)fullDuration;
-(double)phaseInDuration;
-(void)setPhaseInDuration:(double)arg1;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1;
-(double)loopDuration;
-(void)setLoopDuration:(double)arg1;
-(double)numberOfLoops;
-(void)setNumberOfLoops:(double)arg1;

@end
