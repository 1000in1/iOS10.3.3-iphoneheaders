/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioTransmitter : NSObject {

	tagHANDLE* _rtpHandle;
	unsigned* _packetSent;
	unsigned _sampleRate;
	unsigned _samplesPerFrame;

}
-(void)dealloc;
-(char)sendAudioSamples:(char*)arg1 withPayload:(int)arg2 timestamp:(unsigned)arg3 byteCount:(int)arg4 marker:(int)arg5 nextInterval:(float)arg6 sentBytes:(int*)arg7 padding:(char*)arg8 paddingLength:(unsigned char)arg9 sendReport:(int)arg10 ;
-(char)setupEncoders:(AudioStreamBasicDescription*)arg1 blockSize:(int)arg2 ;
-(id)initWithRTPHandle:(tagHANDLE*)arg1 ;
@end
