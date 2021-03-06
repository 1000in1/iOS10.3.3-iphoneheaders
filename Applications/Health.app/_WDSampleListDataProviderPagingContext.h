/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, HKQuery;

@interface _WDSampleListDataProviderPagingContext : NSObject {

	char _requiresPaging;
	char _fetchingData;
	NSDate* _earliestProcessedSampleDate;
	HKQuery* _currentQuery;

}

@property (assign,nonatomic) char requiresPaging;                                  //@synthesize requiresPaging=_requiresPaging - In the implementation block
@property (assign,getter=isFetchingData,nonatomic) char fetchingData;              //@synthesize fetchingData=_fetchingData - In the implementation block
@property (nonatomic,retain) NSDate * earliestProcessedSampleDate;                 //@synthesize earliestProcessedSampleDate=_earliestProcessedSampleDate - In the implementation block
@property (nonatomic,retain) HKQuery * currentQuery;                               //@synthesize currentQuery=_currentQuery - In the implementation block
-(void)setRequiresPaging:(char)arg1 ;
-(char)isFetchingData;
-(char)requiresPaging;
-(NSDate *)earliestProcessedSampleDate;
-(void)setFetchingData:(char)arg1 ;
-(void)setEarliestProcessedSampleDate:(NSDate *)arg1 ;
-(void)setCurrentQuery:(HKQuery *)arg1 ;
-(HKQuery *)currentQuery;
@end

