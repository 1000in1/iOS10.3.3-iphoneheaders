/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString;

@interface _UIDatePickerComponent : NSObject {

	unsigned _equivalentUnit;
	NSString* _formatString;
	unsigned _calendarUnit;
	float _width;
	NSRange _unitRange;

}

@property (nonatomic,readonly) NSString * formatString;              //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,readonly) unsigned calendarUnit;                //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,readonly) unsigned equivalentUnit; 
@property (assign,nonatomic) NSRange unitRange;                      //@synthesize unitRange=_unitRange - In the implementation block
@property (assign,nonatomic) float width;                            //@synthesize width=_width - In the implementation block
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 ;
+(id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(int)arg3 ;
-(id)description;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(unsigned)calendarUnit;
-(NSString *)formatString;
-(unsigned)equivalentUnit;
-(void)setUnitRange:(NSRange)arg1 ;
-(NSRange)unitRange;
-(id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned)arg2 ;
@end

