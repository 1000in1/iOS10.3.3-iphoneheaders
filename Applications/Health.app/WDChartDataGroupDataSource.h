/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WDChartDataGroupDataSource <NSObject>
@optional
-(id)dataGroup:(id)arg1 annotationForPointInSetAtIndex:(unsigned)arg2 pointIndex:(unsigned)arg3;
-(id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned)arg2;

@required
-(unsigned)numberOfDataSetsInGroup:(id)arg1;
-(unsigned)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned)arg2;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned)arg2 pointIndex:(unsigned)arg3;

@end

