/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResults, VCMediaNegotiatorAudioResults, VCMediaNegotiatorVideoResults, VCMediaNegotiatorCaptionsResults;

@interface VCMediaNegotiator : NSObject {

	char _usePreNegotiation;
	char _negotiationDone;
	VCMediaNegotiatorLocalConfiguration* _localSettings;
	VCMediaNegotiatorResults* _negotiatedSettings;
	VCMediaNegotiatorAudioResults* _negotiatedAudioSettings;
	VCMediaNegotiatorVideoResults* _negotiatedVideoSettings;
	VCMediaNegotiatorVideoResults* _negotiatedScreenSettings;
	VCMediaNegotiatorCaptionsResults* _negotiatedCaptionsSettings;

}

@property (nonatomic,readonly) char isCaller; 
@property (nonatomic,readonly) char usePreNegotiation;                                                     //@synthesize usePreNegotiation=_usePreNegotiation - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorLocalConfiguration * localSettings;                        //@synthesize localSettings=_localSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorResults * negotiatedSettings;                              //@synthesize negotiatedSettings=_negotiatedSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorAudioResults * negotiatedAudioSettings;                    //@synthesize negotiatedAudioSettings=_negotiatedAudioSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorVideoResults * negotiatedVideoSettings;                    //@synthesize negotiatedVideoSettings=_negotiatedVideoSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorVideoResults * negotiatedScreenSettings;                   //@synthesize negotiatedScreenSettings=_negotiatedScreenSettings - In the implementation block
@property (nonatomic,readonly) VCMediaNegotiatorCaptionsResults * negotiatedCaptionsSettings;              //@synthesize negotiatedCaptionsSettings=_negotiatedCaptionsSettings - In the implementation block
-(void)dealloc;
-(char)isCaller;
-(char)usePreNegotiation;
-(VCMediaNegotiatorVideoResults *)negotiatedScreenSettings;
-(VCMediaNegotiatorVideoResults *)negotiatedVideoSettings;
-(char)processResponseBlob:(id)arg1 ;
-(id)initWithLocalSettings:(id)arg1 ;
-(id)newInviteBlob;
-(char)processInviteBlob:(id)arg1 ;
-(id)newResponseBlob;
-(unsigned)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2 ;
-(VCMediaNegotiatorResults *)negotiatedSettings;
-(VCMediaNegotiatorAudioResults *)negotiatedAudioSettings;
-(VCMediaNegotiatorLocalConfiguration *)localSettings;
-(id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2 ;
-(char)setupBandwidthSettingsForMediaBlob:(id)arg1 ;
-(void)setupCaptionsForMediaBlob:(id)arg1 ;
-(id)newCompressedBlob:(id)arg1 ;
-(id)newDecompressedBlob:(id)arg1 ;
-(void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1 ;
-(char)negotiateAudioSettings:(id)arg1 ;
-(char)negotiateVideoSettings:(id)arg1 ;
-(char)negotiateScreenSettings:(id)arg1 ;
-(char)negotiateCaptionsWithCaptionsSettings:(id)arg1 ;
-(char)setupAudioWithNegotiatedSettings:(id)arg1 ;
-(char)setupVideoWithNegotiatedSettings:(id)arg1 ;
-(char)setupScreenWithNegotiatedSettings:(id)arg1 ;
-(int)bandwidthConfigurationWithOperatingMode:(int)arg1 connectionType:(int)arg2 ;
-(char)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3 ;
-(void)negotiateAudioAllowRecording:(id)arg1 ;
-(char)negotiateAudioPrimaryPayload:(id)arg1 ;
-(char)negotiateAudioDTXPayload:(id)arg1 ;
-(void)negotiateAudioSecondaryPayloads:(id)arg1 ;
-(id)negotiateVideoMaxResolutionWithLocalRules:(id)arg1 remoteRules:(id)arg2 ;
-(id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2 ;
-(char)processParameterSets:(id)arg1 videoResults:(id)arg2 ;
-(void)negotiateRTCPFB:(id)arg1 ;
-(id)getPreferredVideoPayloadList:(id)arg1 ;
-(char)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(char)arg7 ;
-(id)getPreferredScreenPayloadList;
-(VCMediaNegotiatorCaptionsResults *)negotiatedCaptionsSettings;
@end
