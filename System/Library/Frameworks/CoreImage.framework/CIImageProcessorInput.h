/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorInOut.h>
#import <libobjc.A.dylib/CIImageProcessorInput.h>

@protocol CIImageProcessorInput
@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@required
-(const void*)baseAddress;
-(int)format;
-(CGRect)region;
-(CVBufferRef)pixelBuffer;
-(unsigned long)bytesPerRow;
-(id<MTLTexture>)metalTexture;

@end


@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput> {

	BOOL _forCPU;

}

@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) const void* baseAddress; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
-(const void*)baseAddress;
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 bounds:(CGRect)arg3 context:(Context*)arg4 forCPU:(BOOL)arg5 ;
-(void)dealloc;
-(id<MTLTexture>)metalTexture;
@end

