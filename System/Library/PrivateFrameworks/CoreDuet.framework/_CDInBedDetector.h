/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
#import <CoreDuet/CoreDuet-Structs.h>
@interface _CDInBedDetector : NSObject {

	id<_DKKnowledgeQuerying> _knowledge;
	unsigned _method;

}

@property (retain) id<_DKKnowledgeQuerying> knowledge;              //@synthesize knowledge=_knowledge - In the implementation block
@property (assign) unsigned method;                                 //@synthesize method=_method - In the implementation block
+(id)inBedDetector;
+(id)inBedDetectorWithKnowledge:(id)arg1 ;
+(id)inBedDetectorWithKnowledge:(id)arg1 method:(unsigned)arg2 ;
+(id)simpleLockBasedInBedDetector;
-(unsigned)method;
-(id)initWithKnowledge:(id)arg1 method:(unsigned)arg2 ;
-(NSArray*)lockedTimesBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(NSArray*)detectInBedWithPolicyV1BetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id<_DKKnowledgeQuerying>)knowledge;
-(id)findDateIntervalOfEventInStream:(id)arg1 datePredicate:(id)arg2 valuePredicate:(id)arg3 sortDescriptor:(id)arg4 error:(id*)arg5 ;
-(id)findLatestEndOfWalkingActivityBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)findLastTimeDeviceWasLockedBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3 ;
-(NSArray*)detectInBedBetweenBedtimeDate:(id)arg1 wakupDate:(id)arg2 error:(id*)arg3 ;
-(void)setKnowledge:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)setMethod:(unsigned)arg1 ;
@end

