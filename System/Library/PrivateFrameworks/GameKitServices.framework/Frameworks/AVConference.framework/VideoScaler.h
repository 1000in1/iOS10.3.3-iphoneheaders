/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VideoScaler : NSObject {

	char* _tempBuffer1;
	char* _tempBuffer2;
	unsigned long _tempBufferWidth;
	unsigned long _tempBufferHeight;
	IOSurfaceAcceleratorRef _ioSurfaceAccelerator;

}
-(id)init;
-(void)dealloc;
-(long)rotatePixelBuffer:(CVBufferRef)arg1 withPixelFormat:(unsigned long)arg2 usingPixelBufferPool:(CVPixelBufferPoolRef)arg3 andStoreTo:(_CVBuffer*)arg4 ;
-(long)convertAndScalePixelBuffer:(CVBufferRef)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned long)arg4 usingPixelBufferPool:(CVPixelBufferPoolRef)arg5 andStoreTo:(_CVBuffer*)arg6 ;
@end

