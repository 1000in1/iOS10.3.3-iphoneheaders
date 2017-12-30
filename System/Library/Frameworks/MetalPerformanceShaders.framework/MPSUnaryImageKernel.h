/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSKernel.h>

@interface MPSUnaryImageKernel : MPSKernel {

	SCD_Struct_MP4 _offset;
	SCD_Struct_MP6 _clipRect;
	unsigned _edgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	void* _encodeData;
	/*function pointer*/void* _getPreferredTileSize;

}

@property (assign,nonatomic) SCD_Struct_MP4 offset;                //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP6 clipRect;              //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned edgeMode;                    //@synthesize edgeMode=_edgeMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP5)arg1 ;
-(unsigned)edgeMode;
-(char)encodeToCommandBuffer:(id)arg1 inPlaceTexture:(id*)arg2 fallbackCopyAllocator:(/*^block*/id)arg3 ;
-(void)setEdgeMode:(unsigned)arg1 ;
-(id)init;
-(id)debugDescription;
-(void)setOffset:(SCD_Struct_MP4)arg1 ;
-(SCD_Struct_MP4)offset;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(SCD_Struct_MP6)clipRect;
-(void)setClipRect:(SCD_Struct_MP6)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end

