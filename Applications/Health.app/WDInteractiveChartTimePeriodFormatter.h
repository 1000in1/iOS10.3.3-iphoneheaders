/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDInteractiveChartDataFormatter.h>

@class WDTimePeriodDataUnitValueFormatter;

@interface WDInteractiveChartTimePeriodFormatter : WDInteractiveChartDataFormatter {

	WDTimePeriodDataUnitValueFormatter* _timePeriodFormatter;
	double _timePeriod;

}

@property (assign,nonatomic) double timePeriod;              //@synthesize timePeriod=_timePeriod - In the implementation block
-(id)formattedStringWithMajorFont:(id)arg1 minorFont:(id)arg2 unitController:(id)arg3 dataUnit:(id)arg4 ;
-(id)_prefixStringWithDataUnit:(id)arg1 ;
-(double)timePeriod;
-(void)setTimePeriod:(double)arg1 ;
@end

