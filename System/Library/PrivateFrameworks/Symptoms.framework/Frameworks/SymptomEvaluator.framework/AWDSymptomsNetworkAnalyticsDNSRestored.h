/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkAnalyticsDNSRestored : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dnsServers;
	int _networkType;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNetworkType; 
@property (assign,nonatomic) int networkType;                           //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) char hasDnsServers; 
@property (assign,nonatomic) unsigned dnsServers;                       //@synthesize dnsServers=_dnsServers - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(char)arg1 ;
-(char)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(int)networkType;
-(void)setDnsServers:(unsigned)arg1 ;
-(void)setHasDnsServers:(char)arg1 ;
-(char)hasDnsServers;
-(unsigned)dnsServers;
@end

