/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, WDChartPointAnnotation;


@protocol WDChartPoint <NSObject>
@property (nonatomic,retain) NSDate * xValue; 
@property (nonatomic,retain) id yValue; 
@property (nonatomic,retain) WDChartPointAnnotation * annotation; 
@required
-(id)averageYValue;
-(WDChartPointAnnotation *)annotation;
-(void)setAnnotation:(id)arg1;
-(NSDate *)xValue;
-(id)yValue;
-(id)allYValues;
-(id)yValueForKey:(id)arg1;
-(id)minYValue;
-(id)maxYValue;
-(void)setXValue:(id)arg1;
-(void)setYValue:(id)arg1;

@end

