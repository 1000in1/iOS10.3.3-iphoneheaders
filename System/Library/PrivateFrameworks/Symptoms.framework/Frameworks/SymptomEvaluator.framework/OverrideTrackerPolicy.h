/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OverrideTrackerPolicy : NSObject {

	NSMutableDictionary* _maxConnectionPolicyOverrides;
	NSMutableDictionary* _maxRRCTimePolicyOverrides;

}
+(id)sharedInstance;
-(id)init;
-(id)maxConnectionPolicyForTarget:(id)arg1 ;
-(id)maxRRCTimePolicyForTarget:(id)arg1 ;
@end

