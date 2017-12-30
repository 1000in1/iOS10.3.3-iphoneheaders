/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVCAudioStreamConfig : NSObject {

	int _codecType;
	char _cnEnabled;
	unsigned _cnPayloadType;
	unsigned _dtmfPayloadType;
	unsigned _dtmfTimestampRate;
	unsigned _ptime;
	unsigned _maxPtime;
	int _audioStreamMode;
	int _rateModeMask;
	int _preferredAMRMode;
	char _octetAligned;
	char _dtxEnabled;
	char _latencySensitiveMode;

}

@property (assign,nonatomic) int audioStreamMode;                                                  //@synthesize audioStreamMode=_audioStreamMode - In the implementation block
@property (assign,nonatomic) int codecType;                                                        //@synthesize codecType=_codecType - In the implementation block
@property (assign,getter=isCNEnabled,nonatomic) char cnEnabled;                                    //@synthesize cnEnabled=_cnEnabled - In the implementation block
@property (assign,nonatomic) unsigned cnPayloadType;                                               //@synthesize cnPayloadType=_cnPayloadType - In the implementation block
@property (assign,nonatomic) unsigned dtmfPayloadType;                                             //@synthesize dtmfPayloadType=_dtmfPayloadType - In the implementation block
@property (assign,nonatomic) unsigned dtmfTimestampRate;                                           //@synthesize dtmfTimestampRate=_dtmfTimestampRate - In the implementation block
@property (assign,nonatomic) unsigned ptime;                                                       //@synthesize ptime=_ptime - In the implementation block
@property (assign,nonatomic) unsigned maxPtime;                                                    //@synthesize maxPtime=_maxPtime - In the implementation block
@property (assign,getter=isOctectAligned,nonatomic) char octetAligned;                             //@synthesize octetAligned=_octetAligned - In the implementation block
@property (assign,getter=isDTXEnabled,nonatomic) char dtxEnabled;                                  //@synthesize dtxEnabled=_dtxEnabled - In the implementation block
@property (assign,nonatomic) int rateModeMask;                                                     //@synthesize rateModeMask=_rateModeMask - In the implementation block
@property (assign,nonatomic) int preferredAMRMode;                                                 //@synthesize preferredAMRMode=_preferredAMRMode - In the implementation block
@property (assign,getter=isLatencySensitiveMode,nonatomic) char latencySensitiveMode;              //@synthesize latencySensitiveMode=_latencySensitiveMode - In the implementation block
-(id)init;
-(char)isValid;
-(int)preferredAMRMode;
-(char)isLatencySensitiveMode;
-(int)rateModeMask;
-(unsigned)dtmfTimestampRate;
-(unsigned)maxPtime;
-(void)setDtmfPayloadType:(unsigned)arg1 ;
-(void)setDtmfTimestampRate:(unsigned)arg1 ;
-(void)setMaxPtime:(unsigned)arg1 ;
-(void)setRateModeMask:(int)arg1 ;
-(void)setPreferredAMRMode:(int)arg1 ;
-(void)setLatencySensitiveMode:(char)arg1 ;
-(char)isDTMFValid;
-(char)isCNValid;
-(int)codecType;
-(void)setCodecType:(int)arg1 ;
-(void)setOctetAligned:(char)arg1 ;
-(void)setDtxEnabled:(char)arg1 ;
-(void)setAudioStreamMode:(int)arg1 ;
-(void)setCnEnabled:(char)arg1 ;
-(void)setCnPayloadType:(unsigned)arg1 ;
-(void)setPtime:(unsigned)arg1 ;
-(unsigned)dtmfPayloadType;
-(char)isOctectAligned;
-(char)isDTXEnabled;
-(int)audioStreamMode;
-(char)isCNEnabled;
-(unsigned)cnPayloadType;
-(unsigned)ptime;
@end

