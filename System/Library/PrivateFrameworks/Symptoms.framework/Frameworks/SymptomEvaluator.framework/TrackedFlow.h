/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/TrackedFlowCounts.h>

@class NSString, NSValue, AppTracker, NSDate;

@interface TrackedFlow : TrackedFlowCounts {

	unsigned long long _snapshotRxWiFiBytes;
	unsigned long long _snapshotTxWiFiBytes;
	unsigned long long _snapshotRxPkts;
	unsigned long long _snapshotTxPkts;
	unsigned long long _snapshotRxDupeBytes;
	unsigned long long _snapshotRxOOOBytes;
	unsigned long long _snapshotTxReTxBytes;
	int _snapshotTxUnacked;
	char _isNiced;
	char _isRNF;
	unsigned _trafficMgtFlags;
	unsigned _trafficClassFlags;
	unsigned _ifIndex;
	int _ifType;
	NSString* _ownerKey;
	NSValue* _key;
	AppTracker* _ultimateUser;
	AppTracker* _immediateUser;
	NSDate* _startingTimestamp;
	NSDate* _endingTimestamp;
	unsigned _txUnacked;
	unsigned _flags;
	unsigned _disposition;
	AppTracker* _dispositionSource;
	double _duration;
	double _wifiDownlRate;
	double _cellDownlRate;
	unsigned long long _backgroundCellFlowTrackingSeqNo;

}

@property (assign,nonatomic) unsigned ifIndex;                                                //@synthesize ifIndex=_ifIndex - In the implementation block
@property (assign,nonatomic) int ifType;                                                      //@synthesize ifType=_ifType - In the implementation block
@property (nonatomic,retain) NSString * ownerKey;                                             //@synthesize ownerKey=_ownerKey - In the implementation block
@property (nonatomic,retain) NSValue * key;                                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) AppTracker * ultimateUser;                                       //@synthesize ultimateUser=_ultimateUser - In the implementation block
@property (nonatomic,retain) AppTracker * immediateUser;                                      //@synthesize immediateUser=_immediateUser - In the implementation block
@property (nonatomic,retain) NSDate * startingTimestamp;                                      //@synthesize startingTimestamp=_startingTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * endingTimestamp;                                        //@synthesize endingTimestamp=_endingTimestamp - In the implementation block
@property (assign,nonatomic) double duration;                                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned txUnacked;                                              //@synthesize txUnacked=_txUnacked - In the implementation block
@property (assign,nonatomic) unsigned flags;                                                  //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned trafficMgtFlags;                                        //@synthesize trafficMgtFlags=_trafficMgtFlags - In the implementation block
@property (assign,nonatomic) unsigned trafficClassFlags;                                      //@synthesize trafficClassFlags=_trafficClassFlags - In the implementation block
@property (assign,nonatomic) double wifiDownlRate;                                            //@synthesize wifiDownlRate=_wifiDownlRate - In the implementation block
@property (assign,nonatomic) double cellDownlRate;                                            //@synthesize cellDownlRate=_cellDownlRate - In the implementation block
@property (assign,nonatomic) char isNiced;                                                    //@synthesize isNiced=_isNiced - In the implementation block
@property (assign,nonatomic) char isRNF;                                                      //@synthesize isRNF=_isRNF - In the implementation block
@property (assign,nonatomic) unsigned disposition;                                            //@synthesize disposition=_disposition - In the implementation block
@property (nonatomic,retain) AppTracker * dispositionSource;                                  //@synthesize dispositionSource=_dispositionSource - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundCellFlowTrackingSeqNo;              //@synthesize backgroundCellFlowTrackingSeqNo=_backgroundCellFlowTrackingSeqNo - In the implementation block
+(void)initialize;
+(void)setPolledFlowQueue:(id)arg1 ;
+(void)removeTrackingForKey:(id)arg1 ;
+(unsigned)countFlowsPassingTest:(/*^block*/id)arg1 ;
+(id)startTrackingForKey:(id)arg1 ;
+(unsigned)allActiveFlowsCount;
+(id)flowForKey:(id)arg1 ;
+(unsigned long long)rnfUsageGrandTallyAfterAdding:(unsigned long long)arg1 ;
+(id)ownersOfFlowsPassingTest:(/*^block*/id)arg1 ;
+(void)stopPollingWifiFlows;
+(void)startPollingWifiFlows:(unsigned)arg1 ;
+(id)currentCellUsers;
+(id)getPolledFlowInfo;
+(void)_wifiStallCheckStarted;
+(void)_wifiStallCheck;
+(void)_notifyPollingEnd;
-(id)init;
-(NSValue *)key;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setKey:(NSValue *)arg1 ;
-(void)setDisposition:(unsigned)arg1 ;
-(unsigned)disposition;
-(NSString *)ownerKey;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(BOOL)inheritEarlyProperties:(id)arg1 ;
-(void)setOwnerKey:(NSString *)arg1 ;
-(void)setIsRNF:(char)arg1 ;
-(void)setTxUnacked:(unsigned)arg1 ;
-(void)setEndingTimestamp:(NSDate *)arg1 ;
-(NSDate *)startingTimestamp;
-(void)inheritLateProperties:(id)arg1 ;
-(void)getOverheadIn:(unsigned long long*)arg1 out:(unsigned long long*)arg2 ;
-(void)setCellDownlRate:(double)arg1 ;
-(void)setWifiDownlRate:(double)arg1 ;
-(unsigned)ifIndex;
-(NSDate *)endingTimestamp;
-(unsigned long long)backgroundCellFlowTrackingSeqNo;
-(AppTracker *)ultimateUser;
-(char)isRNF;
-(double)wifiDownlRate;
-(unsigned)trafficClassFlags;
-(unsigned)trafficMgtFlags;
-(void)setDispositionSource:(AppTracker *)arg1 ;
-(AppTracker *)immediateUser;
-(AppTracker *)dispositionSource;
-(void)setUltimateUser:(AppTracker *)arg1 ;
-(void)setImmediateUser:(AppTracker *)arg1 ;
-(int)ifType;
-(unsigned)txUnacked;
-(void)setTrafficMgtFlags:(unsigned)arg1 ;
-(void)setTrafficClassFlags:(unsigned)arg1 ;
-(void)_decrementCounters;
-(void)_takeSnapshot;
-(void)_updateScoreholder:(scoreHolder*)arg1 ;
-(void)setIfIndex:(unsigned)arg1 ;
-(void)setIfType:(int)arg1 ;
-(void)setStartingTimestamp:(NSDate *)arg1 ;
-(double)cellDownlRate;
-(char)isNiced;
-(void)setIsNiced:(char)arg1 ;
-(void)setBackgroundCellFlowTrackingSeqNo:(unsigned long long)arg1 ;
@end

