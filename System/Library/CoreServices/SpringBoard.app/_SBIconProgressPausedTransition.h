/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressPausedTransition : _SBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	char _toPaused;
	float _fraction;

}
+(id)newTransitionToPaused:(char)arg1 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(void)updateToPaused:(char)arg1 ;
-(char)isCompleteWithView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(void)_updateView:(id)arg1 ;
-(id)_initToPaused:(char)arg1 ;
-(void)_updateTimingFunction;
-(void)_updateElapsedTimeFromFraction;
@end

