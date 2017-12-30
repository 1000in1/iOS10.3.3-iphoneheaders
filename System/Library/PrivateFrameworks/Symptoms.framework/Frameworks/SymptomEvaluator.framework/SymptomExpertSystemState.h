/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:45 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/ExpertSystemStateCore.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SymptomExpertSystemState : ExpertSystemStateCore {

	NSObject*<OS_dispatch_source> _strobe;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> strobe;              //@synthesize strobe=_strobe - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned)arg2 entryPreds:(id)arg3 ;
-(NSObject*<OS_dispatch_source>)strobe;
-(void)setStrobe:(NSObject*<OS_dispatch_source>)arg1 ;
@end

