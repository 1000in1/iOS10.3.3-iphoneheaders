/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface InternalNetworkStateRecord : NSObject {

	int _stateAge;
	int _stateDayOfWeek;
	int _stateSlotId;
	NSString* _stateNetworkId;
	int _stateNetworkLQM;
	int _stateRadioTechnology;
	int _stateDurationSeconds;
	int _stateSlotLength;

}

@property (readonly) int stateAge;                           //@synthesize stateAge=_stateAge - In the implementation block
@property (readonly) int stateDayOfWeek;                     //@synthesize stateDayOfWeek=_stateDayOfWeek - In the implementation block
@property (readonly) int stateSlotId;                        //@synthesize stateSlotId=_stateSlotId - In the implementation block
@property (readonly) NSString * stateNetworkId;              //@synthesize stateNetworkId=_stateNetworkId - In the implementation block
@property (readonly) int stateNetworkLQM;                    //@synthesize stateNetworkLQM=_stateNetworkLQM - In the implementation block
@property (readonly) int stateRadioTechnology;               //@synthesize stateRadioTechnology=_stateRadioTechnology - In the implementation block
@property (readonly) int stateDurationSeconds;               //@synthesize stateDurationSeconds=_stateDurationSeconds - In the implementation block
@property (readonly) int stateSlotLength;                    //@synthesize stateSlotLength=_stateSlotLength - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)_isEqualToNetworkStateRecord:(id)arg1 ;
-(int)stateAge;
-(int)stateDayOfWeek;
-(int)stateSlotId;
-(int)stateSlotLength;
-(NSString *)stateNetworkId;
-(int)stateNetworkLQM;
-(int)stateRadioTechnology;
-(int)stateDurationSeconds;
-(id)initWithAge:(int)arg1 dayOfWeek:(int)arg2 slotId:(int)arg3 networkId:(id)arg4 networkLQM:(int)arg5 radioTechnology:(int)arg6 stateDurationSeconds:(int)arg7 stateSlotLength:(int)arg8 ;
-(void)mergeState:(id)arg1 ;
@end

