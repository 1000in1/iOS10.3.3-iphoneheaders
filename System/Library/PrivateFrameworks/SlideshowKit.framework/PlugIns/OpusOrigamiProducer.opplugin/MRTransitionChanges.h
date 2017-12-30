/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRLayer, MCTransitionTrigger, MRGesturePanZoomRotation;

@interface MRTransitionChanges : NSObject {

	double startTime;
	double duration;
	char isBackwards;
	MRLayer* _currentSublayer;
	MRLayer* _nextSublayer;
	MCTransitionTrigger* _transition;
	MRGesturePanZoomRotation* _pzr;

}

@property (retain) MRLayer * currentSublayer;                     //@synthesize currentSublayer=_currentSublayer - In the implementation block
@property (retain) MRLayer * nextSublayer;                        //@synthesize nextSublayer=_nextSublayer - In the implementation block
@property (retain) MCTransitionTrigger * transition;              //@synthesize transition=_transition - In the implementation block
@property (retain) MRGesturePanZoomRotation * pzr;                //@synthesize pzr=_pzr - In the implementation block
-(MRLayer *)currentSublayer;
-(void)setPzr:(MRGesturePanZoomRotation *)arg1 ;
-(void)setCurrentSublayer:(MRLayer *)arg1 ;
-(void)setNextSublayer:(MRLayer *)arg1 ;
-(MRLayer *)nextSublayer;
-(MRGesturePanZoomRotation *)pzr;
-(void)dealloc;
-(void)setTransition:(MCTransitionTrigger *)arg1 ;
-(MCTransitionTrigger *)transition;
@end

