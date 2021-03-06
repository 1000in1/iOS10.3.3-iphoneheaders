/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBSteppedAnimationTimingFunctionCalculator : NSObject {

	NSMutableDictionary* _functionsByName;
	float _percentComplete;

}

@property (assign,nonatomic) float percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 ;
-(float)valueForFunctionWithName:(id)arg1 ;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(float)arg3 and:(float)arg4 ;
-(void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2 ;
-(id)timingFunctionNames;
-(id)init;
-(float)percentComplete;
-(void)setPercentComplete:(float)arg1 ;
@end

