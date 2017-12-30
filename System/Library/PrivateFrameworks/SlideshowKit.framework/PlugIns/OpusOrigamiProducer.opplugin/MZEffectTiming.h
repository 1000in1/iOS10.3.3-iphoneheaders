/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZEffectTiming
@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
@optional
-(NSRange*)multiImageSlideRange;
-(void)appendSlideInformation:(id)arg1 andTextInformation:(id)arg2;
-(void)setMultiImageSlideRange:(NSRange)arg1;
-(id)effectAuthoredAttributes;
-(unsigned)effectAuthoredSlideCount;

@required
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)showTimeForSlideAtIndex:(unsigned)arg1;
-(double)showDurationForSlideAtIndex:(unsigned)arg1;
-(double)displayTimeForSlideAtIndex:(unsigned)arg1;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3;
-(double)lowestDisplayTime;
-(double)displayTimeForTextAtIndex:(unsigned)arg1;
-(double)mainDuration;

@end

