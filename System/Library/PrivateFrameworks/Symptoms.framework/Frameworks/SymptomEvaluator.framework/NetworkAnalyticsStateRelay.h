/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NetworkAnalyticsStateRelay : NSObject {

	char _active;
	char _primary;
	char _knownGood;
	char _rxSignalThresholded;
	char _txThresholded;
	char _arpOut;
	char _dnsOut;
	char _tcpExtraStatsPositive;
	char _supportsIPv4;
	char _supportsIPv6;
	unsigned char _radioTechnology;
	NSString* _interfaceName;
	int _linkQuality;
	int _advisory;
	int _interface;
	unsigned _cellSPIType;
	int _lastReportedRxSignalStrength;
	unsigned long long _lastReportedL2TxFrames;
	unsigned long long _lastReportedL2TxRetry;
	unsigned long long _lastReportedL2TxFail;

}

@property (retain) NSString * interfaceName;                               //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) char active;                                            //@synthesize active=_active - In the implementation block
@property (assign) char primary;                                           //@synthesize primary=_primary - In the implementation block
@property (assign) char knownGood;                                         //@synthesize knownGood=_knownGood - In the implementation block
@property (assign) char rxSignalThresholded;                               //@synthesize rxSignalThresholded=_rxSignalThresholded - In the implementation block
@property (assign) char txThresholded;                                     //@synthesize txThresholded=_txThresholded - In the implementation block
@property (assign) char arpOut;                                            //@synthesize arpOut=_arpOut - In the implementation block
@property (assign) char dnsOut;                                            //@synthesize dnsOut=_dnsOut - In the implementation block
@property (assign) int linkQuality;                                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign) int advisory;                                           //@synthesize advisory=_advisory - In the implementation block
@property (assign) char supportsIPv4;                                      //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign) char supportsIPv6;                                      //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (assign) unsigned char radioTechnology;                          //@synthesize radioTechnology=_radioTechnology - In the implementation block
@property (assign) unsigned cellSPIType;                                   //@synthesize cellSPIType=_cellSPIType - In the implementation block
@property (assign) int lastReportedRxSignalStrength;                       //@synthesize lastReportedRxSignalStrength=_lastReportedRxSignalStrength - In the implementation block
@property (assign) unsigned long long lastReportedL2TxFrames;              //@synthesize lastReportedL2TxFrames=_lastReportedL2TxFrames - In the implementation block
@property (assign) unsigned long long lastReportedL2TxRetry;               //@synthesize lastReportedL2TxRetry=_lastReportedL2TxRetry - In the implementation block
@property (assign) unsigned long long lastReportedL2TxFail;                //@synthesize lastReportedL2TxFail=_lastReportedL2TxFail - In the implementation block
@property (readonly) int interface;                                        //@synthesize interface=_interface - In the implementation block
@property (assign) char tcpExtraStatsPositive;                             //@synthesize tcpExtraStatsPositive=_tcpExtraStatsPositive - In the implementation block
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)description;
-(char)active;
-(void)setActive:(char)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(int)interface;
-(void)setLinkQuality:(int)arg1 ;
-(int)linkQuality;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setPrimary:(char)arg1 ;
-(int)advisory;
-(unsigned)cellSPIType;
-(void)setRxSignalThresholded:(char)arg1 ;
-(void)setSupportsIPv4:(char)arg1 ;
-(void)setSupportsIPv6:(char)arg1 ;
-(void)setLastReportedL2TxFrames:(unsigned long long)arg1 ;
-(void)setLastReportedL2TxFail:(unsigned long long)arg1 ;
-(char)rxSignalThresholded;
-(char)supportsIPv4;
-(char)supportsIPv6;
-(unsigned long long)lastReportedL2TxFrames;
-(unsigned long long)lastReportedL2TxFail;
-(void)setTcpExtraStatsPositive:(char)arg1 ;
-(char)knownGood;
-(char)txThresholded;
-(char)arpOut;
-(char)dnsOut;
-(char)tcpExtraStatsPositive;
-(void)setKnownGood:(char)arg1 ;
-(void)setTxThresholded:(char)arg1 ;
-(void)setArpOut:(char)arg1 ;
-(void)setDnsOut:(char)arg1 ;
-(void)setAdvisory:(int)arg1 ;
-(id)initForInternalType:(int)arg1 ;
-(unsigned char)radioTechnology;
-(void)setRadioTechnology:(unsigned char)arg1 ;
-(void)setCellSPIType:(unsigned)arg1 ;
-(int)lastReportedRxSignalStrength;
-(void)setLastReportedRxSignalStrength:(int)arg1 ;
-(unsigned long long)lastReportedL2TxRetry;
-(void)setLastReportedL2TxRetry:(unsigned long long)arg1 ;
-(char)primary;
@end

