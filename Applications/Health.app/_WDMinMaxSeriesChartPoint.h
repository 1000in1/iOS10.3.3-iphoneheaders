/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Health/Health-Structs.h>
@interface _WDMinMaxSeriesChartPoint : NSObject {

	unsigned _minMaxOptions;
	CGPoint _absoluteMinPoint;
	CGPoint _absoluteMaxPoint;

}

@property (assign,nonatomic) CGPoint absoluteMinPoint;              //@synthesize absoluteMinPoint=_absoluteMinPoint - In the implementation block
@property (assign,nonatomic) CGPoint absoluteMaxPoint;              //@synthesize absoluteMaxPoint=_absoluteMaxPoint - In the implementation block
@property (assign,nonatomic) unsigned minMaxOptions;                //@synthesize minMaxOptions=_minMaxOptions - In the implementation block
-(CGPoint)absoluteMinPoint;
-(void)setAbsoluteMinPoint:(CGPoint)arg1 ;
-(CGPoint)absoluteMaxPoint;
-(void)setAbsoluteMaxPoint:(CGPoint)arg1 ;
-(unsigned)minMaxOptions;
-(void)setMinMaxOptions:(unsigned)arg1 ;
@end

