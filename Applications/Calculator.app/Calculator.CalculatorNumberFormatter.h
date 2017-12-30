/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSNumberFormatter.h>

@interface Calculator.CalculatorNumberFormatter : NSNumberFormatter {

	 maximumDigitCount;
	 allowScientific;

}

@property (assign,nonatomic) int maximumDigitCount; 
@property (assign,nonatomic) char allowScientific; 
-(int)maximumDigitCount;
-(void)setMaximumDigitCount:(int)arg1 ;
-(char)allowScientific;
-(void)setAllowScientific:(char)arg1 ;
-(id)initWithMaximumDigitCount:(int)arg1 ;
-(unsigned)desiredStyleForNumber:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
@end

