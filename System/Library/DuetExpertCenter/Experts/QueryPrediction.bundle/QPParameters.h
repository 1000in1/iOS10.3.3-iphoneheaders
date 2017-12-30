/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _QPExpertParameters, NSString;

@interface QPParameters : NSObject {

	_QPExpertParameters* parameters;
	NSString* _expertIdentifier;

}

@property (readonly) NSString * expertIdentifier;                         //@synthesize expertIdentifier=_expertIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * abGroupIdentifier; 
-(unsigned)basePointsForSource:(id)arg1 ;
-(unsigned)candidateLimitForSource:(id)arg1 ;
-(char)sourceContributesWithForegroundApp:(id)arg1 ;
-(id)init;
-(NSString *)expertIdentifier;
-(NSString *)abGroupIdentifier;
@end

