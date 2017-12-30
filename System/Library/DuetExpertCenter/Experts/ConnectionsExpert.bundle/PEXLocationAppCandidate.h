/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/ConnectionsExpert.bundle/ConnectionsExpert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PEXLocationAppCandidate : NSObject {

	NSString* _bundleIdentifier;
	unsigned _eligibility;

}

@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned eligibility;                     //@synthesize eligibility=_eligibility - In the implementation block
+(id)stringForScoreInput:(unsigned)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 eligibility:(unsigned)arg2 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned)eligibility;
-(id)transportType;
-(void)setEligibility:(unsigned)arg1 ;
@end

