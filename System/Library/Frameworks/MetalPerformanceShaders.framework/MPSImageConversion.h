/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@class MPSImageTransformSequence;

@interface MPSImageConversion : MPSUnaryImageKernel {

	MPSImageTransformSequence* transform;
	[2 srcDecode];
	[2 destDecode];
	ConversionInfo_s* convertInfo;
	/*function pointer*/void* matFun;
	/*function pointer*/void* trcFun;
	/*function pointer*/void* lutFun;
	/*function pointer*/void* optionsFun;
	unsigned sourceAlpha;
	unsigned destinationAlpha;

}

@property (nonatomic,readonly) unsigned sourceAlpha; 
@property (nonatomic,readonly) unsigned destinationAlpha; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned)sourceAlpha;
-(unsigned)destinationAlpha;
-(id)initWithDevice:(id)arg1 transform:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceDecode:(const float*)arg3 destinationTexture:(id)arg4 destinationDecode:(const float*)arg5 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 srcAlpha:(unsigned)arg2 destAlpha:(unsigned)arg3 backgroundColor:(float*)arg4 conversionInfo:(const CGColorConversionInfoRef)arg5 ;
-(id)initWithDevice:(id)arg1 ;
@end

