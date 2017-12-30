/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface WDDateRange : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(id)dateRangeWithTimePeriod:(int)arg1 anchorDate:(id)arg2 ;
+(id)dateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithTimePeriod:(int)arg1 anchorDate:(id)arg2 ;
-(id)_getStartDateFromAnchorDate:(id)arg1 timePeriod:(int)arg2 ;
-(id)_getEndDateFromStartDate:(id)arg1 timePeriod:(int)arg2 ;
-(char)dateInRange:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

