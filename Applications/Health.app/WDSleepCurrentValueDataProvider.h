/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDPortraitDataProvider.h>

@interface WDSleepCurrentValueDataProvider : WDPortraitDataProvider
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_queryDateRangeFromSampleDate:(id)arg1 ;
-(id)_currentSleepQueryWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchQueryResultFromDate:(id)arg1 toDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)currentValue;
@end

