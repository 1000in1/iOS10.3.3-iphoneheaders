/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryUsageUI/BatteryUsageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableArray, UIColor, NSDate;

@interface PLBatteryUIMoveableGraphView : UIView {

	float maxPower;
	float minPower;
	int _errValue;
	float horizontal_label_offset;
	float vertical_label_offset;
	float rectWidth;
	float rectHeight;
	float xInterval;
	float yInterval;
	NSMutableDictionary* defaultTextAttributes;
	NSMutableArray* _dateChangeArray;
	int _graphType;
	NSMutableArray* _inputData;
	UIColor* _labelColor;
	UIColor* _graphBackgroundColor;
	UIColor* _lineColor;
	UIColor* _gridColor;
	NSDate* _startDate;
	NSDate* _endDate;
	double _displayRange;
	CGSize _displaySize;
	double _MaxDataRange;

}

@property (assign,nonatomic) double displayRange;                       //@synthesize displayRange=_displayRange - In the implementation block
@property (assign,nonatomic) CGSize displaySize;                        //@synthesize displaySize=_displaySize - In the implementation block
@property (assign,nonatomic) double MaxDataRange;                       //@synthesize MaxDataRange=_MaxDataRange - In the implementation block
@property (assign,nonatomic) int graphType;                             //@synthesize graphType=_graphType - In the implementation block
@property (nonatomic,copy) NSMutableArray * inputData;                  //@synthesize inputData=_inputData - In the implementation block
@property (nonatomic,copy) UIColor * labelColor;                        //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,copy) UIColor * graphBackgroundColor;              //@synthesize graphBackgroundColor=_graphBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * lineColor;                         //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,copy) UIColor * gridColor;                         //@synthesize gridColor=_gridColor - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
+(int)graphHeight;
-(void)setGridColor:(UIColor *)arg1 ;
-(void)setGraphType:(int)arg1 ;
-(id)DateChangeArray;
-(void)setMaxDataRange:(double)arg1 ;
-(double)MaxDataRange;
-(double)setGridRange:(double)arg1 ;
-(UIColor *)gridColor;
-(double)displayRange;
-(void)setDefaultRange;
-(int)graphType;
-(void)setRangesFromArray:(id)arg1 ;
-(void)drawGrid:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawErrorText:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)setGraphBackgroundColor:(UIColor *)arg1 ;
-(void)setDisplayRange:(double)arg1 ;
-(void)initGraphAttributes;
-(UIColor *)graphBackgroundColor;
-(void)drawDayLines:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawFill:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawLine:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSMutableArray *)inputData;
-(void)setInputData:(NSMutableArray *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(CGSize)displaySize;
-(void)setDisplaySize:(CGSize)arg1 ;
@end

