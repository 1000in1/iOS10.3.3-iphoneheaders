/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIMotionEffectEngineLogger : NSObject {

	int _motionLevelSamples[8];
	int _sampleCount;
	int _updateFreqency;
	double _lastUpdateTimeStamp;

}
-(void)recordMotionMagnitude:(float)arg1 atTimestamp:(double)arg2 ;
-(id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2 ;
-(void)_dumpToAggregated;
@end

