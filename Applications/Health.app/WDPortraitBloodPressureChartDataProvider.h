/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDPortraitChartDataProvider.h>

@interface WDPortraitBloodPressureChartDataProvider : WDPortraitChartDataProvider
-(id)_queriesWithCompletion:(/*^block*/id)arg1 ;
-(NSArray*)_chartPointsFromStatisticsCollection:(id)arg1 ;
-(id)_generateMinMaxSeriesWithPointStyle:(int)arg1 ;
-(id)_chartPointForStatistics:(id)arg1 dataUnit:(id)arg2 ;
-(id)fetchOperationWithCompletion:(/*^block*/id)arg1 ;
-(id)generateSecondaryValue;
-(id)generateChartSeries;
-(id)generateChartPoints;
@end

