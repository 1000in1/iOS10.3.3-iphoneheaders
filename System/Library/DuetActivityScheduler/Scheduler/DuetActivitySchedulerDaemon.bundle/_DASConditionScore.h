/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _DASConditionScore : NSObject {

	NSDate* _date;

}

@property (nonatomic,retain,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)getResponseStringForPolicy:(id)arg1 response:(id)arg2 appliesToActivity:(char)arg3 weightForActivity:(double)arg4 ;
+(double)scoreForActivity:(id)arg1 withState:(id)arg2 response:(int*)arg3 ;
+(double)thresholdScoreForActivity:(id)arg1 ;
+(void)computeOptimalScoreAndDateForActivity:(id)arg1 ;
+(void)determineIfActivityBypassesPredictions:(id)arg1 ;
+(int)getTimeSlotForActivity:(id)arg1 ;
+(double)getScoreForTimeSlot:(int)arg1 activityPriority:(unsigned)arg2 activityScore:(double)arg3 ;
+(double)relaxationFactorForTimeSlot:(int)arg1 activityPriority:(unsigned)arg2 ;
+(double)preOptimalRelaxationFactor:(unsigned)arg1 ;
-(NSDate *)date;
@end

