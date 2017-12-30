/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCAudioRuleCollection, VCVideoRuleCollections, NSDictionary, NSString, VCBitrateArbiter, NSSet;

@interface VCMediaNegotiatorLocalConfiguration : NSObject {

	unsigned _audioSSRC;
	unsigned _videoSSRC;
	VCAudioRuleCollection* _audioRuleCollection;
	VCVideoRuleCollections* _videoRuleCollections;
	VCVideoRuleCollections* _screenRuleCollections;
	char _allowAudioRecording;
	char _allowAudioSwitching;
	int _preferredAudioCodec;
	unsigned _audioUnitNumber;
	int _deviceRole;
	NSDictionary* _videoFeatureStrings;
	char _allowRTCPFB;
	char _isCaller;
	NSString* _basebandCodec;
	unsigned _basebandCodecSampleRate;
	VCBitrateArbiter* _bitrateArbiter;
	NSSet* _captionsReceiverLanguages;
	NSSet* _captionsSenderLanguages;

}

@property (assign,nonatomic) unsigned audioSSRC;                                          //@synthesize audioSSRC=_audioSSRC - In the implementation block
@property (assign,nonatomic) unsigned videoSSRC;                                          //@synthesize videoSSRC=_videoSSRC - In the implementation block
@property (nonatomic,retain) VCAudioRuleCollection * audioRuleCollection;                 //@synthesize audioRuleCollection=_audioRuleCollection - In the implementation block
@property (nonatomic,retain) VCVideoRuleCollections * videoRuleCollections;               //@synthesize videoRuleCollections=_videoRuleCollections - In the implementation block
@property (nonatomic,retain) VCVideoRuleCollections * screenRuleCollections;              //@synthesize screenRuleCollections=_screenRuleCollections - In the implementation block
@property (assign,nonatomic) char allowAudioRecording;                                    //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
@property (assign,nonatomic) char allowAudioSwitching;                                    //@synthesize allowAudioSwitching=_allowAudioSwitching - In the implementation block
@property (assign,nonatomic) unsigned audioUnitNumber;                                    //@synthesize audioUnitNumber=_audioUnitNumber - In the implementation block
@property (assign,nonatomic) int preferredAudioCodec;                                     //@synthesize preferredAudioCodec=_preferredAudioCodec - In the implementation block
@property (assign,nonatomic) int deviceRole;                                              //@synthesize deviceRole=_deviceRole - In the implementation block
@property (nonatomic,retain) NSDictionary * videoFeatureStrings;                          //@synthesize videoFeatureStrings=_videoFeatureStrings - In the implementation block
@property (assign,nonatomic) char allowRTCPFB;                                            //@synthesize allowRTCPFB=_allowRTCPFB - In the implementation block
@property (assign,nonatomic) char isCaller;                                               //@synthesize isCaller=_isCaller - In the implementation block
@property (nonatomic,retain) NSString * basebandCodec;                                    //@synthesize basebandCodec=_basebandCodec - In the implementation block
@property (assign,nonatomic) unsigned basebandCodecSampleRate;                            //@synthesize basebandCodecSampleRate=_basebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) VCBitrateArbiter * bitrateArbiter;                           //@synthesize bitrateArbiter=_bitrateArbiter - In the implementation block
@property (nonatomic,retain) NSSet * captionsSenderLanguages;                             //@synthesize captionsSenderLanguages=_captionsSenderLanguages - In the implementation block
@property (nonatomic,retain) NSSet * captionsReceiverLanguages;                           //@synthesize captionsReceiverLanguages=_captionsReceiverLanguages - In the implementation block
-(void)dealloc;
-(char)allowAudioRecording;
-(void)setAllowAudioRecording:(char)arg1 ;
-(char)allowAudioSwitching;
-(void)setAllowAudioSwitching:(char)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(int)preferredAudioCodec;
-(char)allowRTCPFB;
-(void)setAllowRTCPFB:(char)arg1 ;
-(unsigned)basebandCodecSampleRate;
-(char)isCaller;
-(VCVideoRuleCollections *)videoRuleCollections;
-(void)setAudioSSRC:(unsigned)arg1 ;
-(void)setVideoSSRC:(unsigned)arg1 ;
-(void)setAudioRuleCollection:(VCAudioRuleCollection *)arg1 ;
-(void)setVideoRuleCollections:(VCVideoRuleCollections *)arg1 ;
-(void)setScreenRuleCollections:(VCVideoRuleCollections *)arg1 ;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(void)setVideoFeatureStrings:(NSDictionary *)arg1 ;
-(void)setIsCaller:(char)arg1 ;
-(void)setBitrateArbiter:(VCBitrateArbiter *)arg1 ;
-(void)setBasebandCodecSampleRate:(unsigned)arg1 ;
-(NSDictionary *)videoFeatureStrings;
-(void)setBasebandCodec:(NSString *)arg1 ;
-(NSString *)basebandCodec;
-(VCAudioRuleCollection *)audioRuleCollection;
-(VCVideoRuleCollections *)screenRuleCollections;
-(unsigned)audioUnitNumber;
-(void)setAudioUnitNumber:(unsigned)arg1 ;
-(VCBitrateArbiter *)bitrateArbiter;
-(NSSet *)captionsSenderLanguages;
-(void)setCaptionsSenderLanguages:(NSSet *)arg1 ;
-(NSSet *)captionsReceiverLanguages;
-(void)setCaptionsReceiverLanguages:(NSSet *)arg1 ;
-(unsigned)videoSSRC;
-(unsigned)audioSSRC;
@end

