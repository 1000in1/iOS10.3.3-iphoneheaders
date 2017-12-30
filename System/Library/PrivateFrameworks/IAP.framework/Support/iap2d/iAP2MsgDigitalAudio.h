/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class iAP2Connection;

@interface iAP2MsgDigitalAudio : NSObject {

	iAP2Connection* pConnection;
	int digAudSampleEnum;
	unsigned digAudSampleMask;
	unsigned digAudVolumeLevel;
	unsigned digAudSoundCheck;
	BOOL bDigAudSendNewProp;
	BOOL bDigAudIsActive;

}

@property (nonatomic,readonly) int digAudSampleEnum; 
@property (assign,nonatomic) unsigned digAudSampleMask; 
@property (nonatomic,readonly) unsigned digAudVolumeLevel; 
@property (nonatomic,readonly) unsigned digAudSoundCheck; 
@property (nonatomic,readonly) BOOL bDigAudSendNewProp; 
@property (nonatomic,readonly) BOOL bDigAudIsActive; 
+(id)getActiveDigitalAudioInstance;
-(void)shuttingDown;
-(BOOL)bDigAudIsActive;
-(id)supportedSampleRatesList;
-(unsigned)currentSampleRate;
-(void)updateSampleRate:(unsigned)arg1 ;
-(unsigned)convertToSupportedSampleRate:(unsigned)arg1 ;
-(void)updateVolumeLevel:(unsigned)arg1 ;
-(void)setDigAudSampleMask:(unsigned)arg1 ;
-(int)startAudioPropertyNotifications;
-(int)stopAudioPropertyNotifications;
-(int)newAudioPropertyNotification;
-(void)updateSoundCheck:(unsigned)arg1 ;
-(int)digAudSampleEnum;
-(unsigned)digAudSampleMask;
-(unsigned)digAudVolumeLevel;
-(unsigned)digAudSoundCheck;
-(BOOL)bDigAudSendNewProp;
-(void)dealloc;
-(id)description;
-(id)initWithConnection:(id)arg1 ;
@end

