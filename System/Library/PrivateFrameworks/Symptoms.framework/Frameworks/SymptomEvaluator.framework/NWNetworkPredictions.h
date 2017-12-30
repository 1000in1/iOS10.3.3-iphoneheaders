/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:45 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NWNetworkPredictions : NSObject <NSSecureCoding> {

	NSDate* _changePointAt;
	int _toQuality;
	int _resolutionSeconds;
	double _confidence;

}

@property (readonly) NSDate * changePointAt;              //@synthesize changePointAt=_changePointAt - In the implementation block
@property (readonly) int toQuality;                       //@synthesize toQuality=_toQuality - In the implementation block
@property (readonly) double confidence;                   //@synthesize confidence=_confidence - In the implementation block
@property (readonly) int resolutionSeconds;               //@synthesize resolutionSeconds=_resolutionSeconds - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)confidence;
-(id)initWithSpec:(id)arg1 toQuality:(int)arg2 withConfidence:(double)arg3 resolutionSeconds:(unsigned)arg4 ;
-(NSDate *)changePointAt;
-(int)toQuality;
-(int)resolutionSeconds;
@end

