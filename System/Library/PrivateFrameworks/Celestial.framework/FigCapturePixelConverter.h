/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject {

	OpaqueVTPixelTransferSessionRef _transferSession;
	char _alwaysUseHardwareForConversion;
	BWPixelBufferPool* _pool;
	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	char _prefetchPool;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)_purgeResources;
-(id)initWithPrefetchPool:(char)arg1 ;
-(long)updateOutputPixelFormat:(unsigned long)arg1 dimensions:(SCD_Struct_BW12)arg2 poolCapacity:(int)arg3 colorSpaceProperties:(int)arg4 alwaysUseHardwareForConversion:(char)arg5 ;
-(long)convertSampleBuffer:(opaqueCMSampleBufferRef)arg1 cropRect:(CGRect)arg2 outputSampleBuffer:(opaqueCMSampleBuffer*)arg3 ;
-(long)_buildBufferPool;
-(long)_buildTransferSession;
-(long)convertPixelBuffer:(CVBufferRef)arg1 cropRect:(CGRect)arg2 allocateOutputFromBufferPool:(char)arg3 outputPixelBuffer:(_CVBuffer*)arg4 ;
@end

