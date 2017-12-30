/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate {

	unsigned _type;

}

@property (readonly) unsigned type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(id)title;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(unsigned)timeOfDay:(id)arg1 ;
-(id)timeOfDayAsString:(unsigned)arg1 ;
-(int)hourInGMT:(id)arg1 ;
@end

