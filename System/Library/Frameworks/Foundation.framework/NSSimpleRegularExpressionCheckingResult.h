/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

	NSRegularExpression* _regularExpression;
	NSRange _ranges[3];

}
-(char)_adjustRangesWithOffset:(int)arg1 ;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned)arg2 regularExpression:(id)arg3 ;
-(id)rangeArray;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(void)dealloc;
-(NSRange)range;
-(NSRange)rangeAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfRanges;
-(id)regularExpression;
@end

