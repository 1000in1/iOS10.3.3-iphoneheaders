/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate;

@interface _CDAutoSuCache : NSObject {

	NSDictionary* _predictedSleep;
	NSDate* _predictedSleepValidityStartDate;
	NSDate* _predictedSleepValidityEndDate;

}

@property (retain) NSDictionary * predictedSleep;                         //@synthesize predictedSleep=_predictedSleep - In the implementation block
@property (retain) NSDate * predictedSleepValidityStartDate;              //@synthesize predictedSleepValidityStartDate=_predictedSleepValidityStartDate - In the implementation block
@property (retain) NSDate * predictedSleepValidityEndDate;                //@synthesize predictedSleepValidityEndDate=_predictedSleepValidityEndDate - In the implementation block
+(id)sharedCache;
-(void)clear;
-(void)setPredictedSleep:(NSDictionary *)arg1 ;
-(void)setPredictedSleepValidityStartDate:(NSDate *)arg1 ;
-(void)setPredictedSleepValidityEndDate:(NSDate *)arg1 ;
-(NSDate *)predictedSleepValidityStartDate;
-(NSDate *)predictedSleepValidityEndDate;
-(NSDictionary *)predictedSleep;
-(void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3 ;
-(id)cachedPredictedSleepDictionaryForDate:(id)arg1 ;
@end

