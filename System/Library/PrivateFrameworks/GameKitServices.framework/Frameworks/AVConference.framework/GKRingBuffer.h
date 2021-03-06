/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:49 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKRingBuffer : NSObject {

	void* ringBufRef;
	unsigned long endTime;
	unsigned long capacity;
	unsigned long bytesPerFrame;

}
-(id)init;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long)arg1 bytesPerFrame:(unsigned long)arg2 ;
-(void)increaseCapacity:(unsigned long)arg1 ;
-(char)store:(char*)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3 ;
-(long)needsNewNumSamples:(unsigned long)arg1 timestamp:(unsigned long)arg2 ;
-(long)fetch:(char*)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3 ;
@end

