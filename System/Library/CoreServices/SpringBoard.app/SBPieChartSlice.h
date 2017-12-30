/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface SBPieChartSlice : NSObject {

	float _value;
	UIColor* _fillColor;

}

@property (readonly) float value;                      //@synthesize value=_value - In the implementation block
@property (readonly) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(id)sliceWithValue:(float)arg1 fillColor:(id)arg2 ;
-(id)initWithValue:(float)arg1 fillColor:(id)arg2 ;
-(float)value;
-(UIColor *)fillColor;
@end

