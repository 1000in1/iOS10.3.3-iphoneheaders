/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTSleepAlarm, NSArray, NSCalendar, NSDate;

@interface MTSleepAlarmGraphData : NSObject {

	MTSleepAlarm* _sleepAlarm;
	NSArray* _allColumnData;
	NSCalendar* _calendar;

}

@property (nonatomic,retain) MTSleepAlarm * sleepAlarm;                       //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) NSArray * allColumnData;                         //@synthesize allColumnData=_allColumnData - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                           //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * earliestStartOnFirstDay; 
@property (nonatomic,readonly) NSDate * latestEndOnFirstDay; 
@property (nonatomic,readonly) int columnCount; 
@property (nonatomic,readonly) float height; 
@property (nonatomic,readonly) float bedtimeOriginY; 
@property (nonatomic,readonly) float wakeTimeOriginY; 
-(id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2 ;
-(float)bedtimeOriginY;
-(float)wakeTimeOriginY;
-(NSDate *)earliestStartOnFirstDay;
-(NSDate *)latestEndOnFirstDay;
-(void)setSleepAlarm:(MTSleepAlarm *)arg1 ;
-(id)sleepAlarmIntervalForDay:(int)arg1 ;
-(NSArray *)allColumnData;
-(void)setAllColumnData:(NSArray *)arg1 ;
-(id)objectAtIndexedSubscript:(int)arg1 ;
-(float)height;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(int)columnCount;
-(MTSleepAlarm *)sleepAlarm;
@end

