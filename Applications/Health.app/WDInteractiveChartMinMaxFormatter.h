/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDInteractiveChartDataFormatter.h>

@class HKUnit;

@interface WDInteractiveChartMinMaxFormatter : WDInteractiveChartDataFormatter {

	char _prefixedUnit;
	HKUnit* _unit;
	double _minValue;
	double _maxValue;

}

@property (assign,nonatomic) double minValue;                //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) HKUnit * unit;                  //@synthesize unit=_unit - In the implementation block
@property (assign,nonatomic) char prefixedUnit;              //@synthesize prefixedUnit=_prefixedUnit - In the implementation block
-(id)formattedStringWithMajorFont:(id)arg1 minorFont:(id)arg2 unitController:(id)arg3 dataUnit:(id)arg4 ;
-(char)prefixedUnit;
-(void)setPrefixedUnit:(char)arg1 ;
-(double)minValue;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
@end

