/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString, NSMutableArray;

@interface DisconnectionStateStatistics : NSObject {

	NSSet* _daysOfWeek;
	unsigned _periodId;
	NSString* _disconnectedFromNetworkId;
	NSString* _connectToNetworkId;
	NSMutableArray* _networkStateRecords;
	unsigned _averageDisconnectionLength;

}

@property (readonly) NSSet * daysOfWeek;                                //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (readonly) unsigned periodId;                                 //@synthesize periodId=_periodId - In the implementation block
@property (readonly) NSString * disconnectedFromNetworkId;              //@synthesize disconnectedFromNetworkId=_disconnectedFromNetworkId - In the implementation block
@property (readonly) NSString * connectToNetworkId;                     //@synthesize connectToNetworkId=_connectToNetworkId - In the implementation block
@property (readonly) NSMutableArray * networkStateRecords;              //@synthesize networkStateRecords=_networkStateRecords - In the implementation block
@property (readonly) unsigned averageDisconnectionLength;               //@synthesize averageDisconnectionLength=_averageDisconnectionLength - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSSet *)daysOfWeek;
-(unsigned)periodId;
-(NSString *)disconnectedFromNetworkId;
-(NSString *)connectToNetworkId;
-(NSMutableArray *)networkStateRecords;
-(unsigned)averageDisconnectionLength;
-(id)initWithDaysOfWeek:(id)arg1 periodId:(unsigned)arg2 forNetworkStateRecord:(id)arg3 ;
-(char)isMergeableWithDisconnectionStateStatistics:(id)arg1 ;
-(void)mergeDisconnectionStateStatistics:(id)arg1 ;
-(void)calculateAverageLength;
@end

