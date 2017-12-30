/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOClient.h>

@class NSString;

@interface VCVoIPRelayInternal : NSObject <VCAudioIOClient> {

	AudioStreamBasicDescription _audioFormat;
	unsigned _blockSizeSamples;
	char _canProcessAudio;
	/*^block*/id _clientCaptureBlock;
	/*^block*/id _clientRenderBlock;

}

@property (assign,nonatomic) AudioStreamBasicDescription audioFormat;              //@synthesize audioFormat=_audioFormat - In the implementation block
@property (assign,nonatomic) unsigned blockSizeSamples;                            //@synthesize blockSizeSamples=_blockSizeSamples - In the implementation block
@property (assign,nonatomic) char canProcessAudio;                                 //@synthesize canProcessAudio=_canProcessAudio - In the implementation block
@property (nonatomic,copy) id clientCaptureBlock;                                  //@synthesize clientCaptureBlock=_clientCaptureBlock - In the implementation block
@property (nonatomic,copy) id clientRenderBlock;                                   //@synthesize clientRenderBlock=_clientRenderBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)deviceRole;
-(char)onCaptureSound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned long)arg9 ;
-(char)onPlaySound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 averagePower:(float)arg5 ;
-(char)canProcessAudio;
-(void)setCanProcessAudio:(char)arg1 ;
-(AudioStreamBasicDescription)audioFormat;
-(void)setAudioFormat:(AudioStreamBasicDescription)arg1 ;
-(unsigned)blockSizeSamples;
-(void)setBlockSizeSamples:(unsigned)arg1 ;
-(id)clientCaptureBlock;
-(void)setClientCaptureBlock:(id)arg1 ;
-(id)clientRenderBlock;
-(void)setClientRenderBlock:(id)arg1 ;
@end

