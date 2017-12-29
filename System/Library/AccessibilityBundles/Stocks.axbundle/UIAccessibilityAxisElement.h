/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/Stocks.axbundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAxisElement : UIAccessibilityElement {

	NSArray* _axisLabels;
	int _chartInterval;
	char _isAxisX;
	char _isDetailMode;

}

@property (nonatomic,retain) NSArray * axisLabels;              //@synthesize axisLabels=_axisLabels - In the implementation block
@property (assign,nonatomic) int chartInterval;                 //@synthesize chartInterval=_chartInterval - In the implementation block
@property (assign,nonatomic) char isAxisX;                      //@synthesize isAxisX=_isAxisX - In the implementation block
@property (assign,nonatomic) char isDetailMode;                 //@synthesize isDetailMode=_isDetailMode - In the implementation block
-(void)setIsDetailMode:(char)arg1 ;
-(char)isDetailMode;
-(char)isAxisX;
-(void)setAxisLabels:(NSArray *)arg1 ;
-(void)setIsAxisX:(char)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(int)chartInterval;
-(void)setChartInterval:(int)arg1 ;
-(NSArray *)axisLabels;
@end
