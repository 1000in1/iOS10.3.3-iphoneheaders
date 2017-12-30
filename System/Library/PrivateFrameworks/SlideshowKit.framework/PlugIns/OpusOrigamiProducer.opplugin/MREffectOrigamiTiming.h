/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MZEffectTiming.h>

@class NSString, NSArray;

@interface MREffectOrigamiTiming : NSObject <MZEffectTiming> {

	NSString* _effectID;
	NSArray* _description;
	NSArray* _animationTimeBounds;
	double _durationStretchFactor;
	double _slideTimings[8][2];
	double _phaseInDuration;
	double _mainDuration;
	double _phaseOutDuration;
	double _defaultPhaseInDuration;
	double _defaultMainDuration;
	double _defaultPhaseOutDuration;

}

@property (nonatomic,readonly) double phaseInDuration;               //@synthesize phaseInDuration=_phaseInDuration - In the implementation block
@property (nonatomic,readonly) double mainDuration;                  //@synthesize mainDuration=_mainDuration - In the implementation block
@property (nonatomic,readonly) double phaseOutDuration;              //@synthesize phaseOutDuration=_phaseOutDuration - In the implementation block
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)showTimeForSlideAtIndex:(unsigned)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(double)lowestDisplayTime;
-(double)displayTimeForTextAtIndex:(unsigned)arg1 ;
-(double)mainDuration;
-(void)dealloc;
@end

