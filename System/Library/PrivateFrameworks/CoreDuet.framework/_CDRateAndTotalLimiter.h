/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter {

	int _totalCount;
	int _currentTotal;

}

@property (assign) int currentTotal;              //@synthesize currentTotal=_currentTotal - In the implementation block
@property (readonly) int totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(id)description;
-(id)initWithCount:(int)arg1 perPeriod:(double)arg2 totalCountLimit:(int)arg3 ;
-(id)initWithCount:(int)arg1 perPeriod:(double)arg2 ;
-(char)debited;
-(int)currentTotal;
-(void)setCurrentTotal:(int)arg1 ;
-(char)credit;
-(int)totalCount;
@end

