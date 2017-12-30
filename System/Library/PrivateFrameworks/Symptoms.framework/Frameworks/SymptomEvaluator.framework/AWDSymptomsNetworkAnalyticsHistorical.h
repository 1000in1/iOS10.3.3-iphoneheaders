/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:45 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkAnalyticsHistorical : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _connAttempts;
	unsigned long long _connSuccess;
	unsigned long long _dnsCompleteFailures;
	unsigned long long _dnsPartialFailures;
	unsigned long long _epochs;
	unsigned long long _faultyStaySecs;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _secsSinceLastTrimmed;
	unsigned long long _timestamp;
	unsigned long long _totalStaySecs;
	NSString* _identifier;
	int _networkType;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasNetworkType; 
@property (assign,nonatomic) int networkType;                                      //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) char hasEpochs; 
@property (assign,nonatomic) unsigned long long epochs;                            //@synthesize epochs=_epochs - In the implementation block
@property (assign,nonatomic) char hasTotalStaySecs; 
@property (assign,nonatomic) unsigned long long totalStaySecs;                     //@synthesize totalStaySecs=_totalStaySecs - In the implementation block
@property (assign,nonatomic) char hasFaultyStaySecs; 
@property (assign,nonatomic) unsigned long long faultyStaySecs;                    //@synthesize faultyStaySecs=_faultyStaySecs - In the implementation block
@property (assign,nonatomic) char hasConnAttempts; 
@property (assign,nonatomic) unsigned long long connAttempts;                      //@synthesize connAttempts=_connAttempts - In the implementation block
@property (assign,nonatomic) char hasConnSuccess; 
@property (assign,nonatomic) unsigned long long connSuccess;                       //@synthesize connSuccess=_connSuccess - In the implementation block
@property (assign,nonatomic) char hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                         //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) char hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                        //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) char hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                           //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) char hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                          //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) char hasSecsSinceLastTrimmed; 
@property (assign,nonatomic) unsigned long long secsSinceLastTrimmed;              //@synthesize secsSinceLastTrimmed=_secsSinceLastTrimmed - In the implementation block
@property (assign,nonatomic) char hasDnsPartialFailures; 
@property (assign,nonatomic) unsigned long long dnsPartialFailures;                //@synthesize dnsPartialFailures=_dnsPartialFailures - In the implementation block
@property (assign,nonatomic) char hasDnsCompleteFailures; 
@property (assign,nonatomic) unsigned long long dnsCompleteFailures;               //@synthesize dnsCompleteFailures=_dnsCompleteFailures - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)identifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
-(char)hasIdentifier;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(char)arg1 ;
-(char)hasBytesIn;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasBytesOut:(char)arg1 ;
-(char)hasBytesOut;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsIn:(char)arg1 ;
-(char)hasPacketsIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(char)arg1 ;
-(char)hasPacketsOut;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(char)arg1 ;
-(char)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(int)networkType;
-(void)setConnAttempts:(unsigned long long)arg1 ;
-(unsigned long long)connAttempts;
-(void)setEpochs:(unsigned long long)arg1 ;
-(void)setHasEpochs:(char)arg1 ;
-(char)hasEpochs;
-(void)setTotalStaySecs:(unsigned long long)arg1 ;
-(void)setHasTotalStaySecs:(char)arg1 ;
-(char)hasTotalStaySecs;
-(void)setFaultyStaySecs:(unsigned long long)arg1 ;
-(void)setHasFaultyStaySecs:(char)arg1 ;
-(char)hasFaultyStaySecs;
-(void)setHasConnAttempts:(char)arg1 ;
-(char)hasConnAttempts;
-(void)setConnSuccess:(unsigned long long)arg1 ;
-(void)setHasConnSuccess:(char)arg1 ;
-(char)hasConnSuccess;
-(void)setSecsSinceLastTrimmed:(unsigned long long)arg1 ;
-(void)setHasSecsSinceLastTrimmed:(char)arg1 ;
-(char)hasSecsSinceLastTrimmed;
-(void)setDnsPartialFailures:(unsigned long long)arg1 ;
-(void)setHasDnsPartialFailures:(char)arg1 ;
-(char)hasDnsPartialFailures;
-(void)setDnsCompleteFailures:(unsigned long long)arg1 ;
-(void)setHasDnsCompleteFailures:(char)arg1 ;
-(char)hasDnsCompleteFailures;
-(unsigned long long)epochs;
-(unsigned long long)totalStaySecs;
-(unsigned long long)faultyStaySecs;
-(unsigned long long)connSuccess;
-(unsigned long long)secsSinceLastTrimmed;
-(unsigned long long)dnsPartialFailures;
-(unsigned long long)dnsCompleteFailures;
@end

