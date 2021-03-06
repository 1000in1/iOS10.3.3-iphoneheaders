/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineDescriptor.h>

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {

	MTLRenderPipelineDescriptorPrivate _private;

}
-(id)formattedDescription:(unsigned)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(id)newSerializedVertexDataWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(id)fragmentFunction;
-(id)serializeFragmentData;
-(const MTLRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned)tessellationPartitionMode;
-(void)setTessellationPartitionMode:(unsigned)arg1 ;
-(unsigned)maxTessellationFactor;
-(void)setMaxTessellationFactor:(unsigned)arg1 ;
-(char)isTessellationFactorScaleEnabled;
-(void)setTessellationFactorScaleEnabled:(char)arg1 ;
-(unsigned)tessellationFactorFormat;
-(void)setTessellationFactorFormat:(unsigned)arg1 ;
-(unsigned)tessellationControlPointIndexType;
-(void)setTessellationControlPointIndexType:(unsigned)arg1 ;
-(unsigned)tessellationFactorStepFunction;
-(void)setTessellationFactorStepFunction:(unsigned)arg1 ;
-(unsigned)tessellationOutputWindingOrder;
-(void)setTessellationOutputWindingOrder:(unsigned)arg1 ;
-(unsigned)sampleMask;
-(void)setSampleMask:(unsigned)arg1 ;
-(float)sampleCoverage;
-(void)setSampleCoverage:(float)arg1 ;
-(char)isAlphaToCoverageEnabled;
-(void)setAlphaToCoverageEnabled:(char)arg1 ;
-(char)isAlphaToOneEnabled;
-(void)setAlphaToOneEnabled:(char)arg1 ;
-(char)isRasterizationEnabled;
-(void)setRasterizationEnabled:(char)arg1 ;
-(char)isVertexEnabled;
-(char)isLogicOperationEnabled;
-(void)setLogicOperationEnabled:(char)arg1 ;
-(unsigned)logicOperation;
-(void)setLogicOperation:(unsigned)arg1 ;
-(char)isAlphaTestEnabled;
-(void)setAlphaTestEnabled:(char)arg1 ;
-(unsigned)alphaTestFunction;
-(void)setAlphaTestFunction:(unsigned)arg1 ;
-(void)setClipDistanceEnableMask:(unsigned char)arg1 ;
-(unsigned char)clipDistanceEnableMask;
-(char)isPointSmoothEnabled;
-(void)setPointSmoothEnabled:(char)arg1 ;
-(unsigned)vertexDepthCompareClampMask;
-(void)setVertexDepthCompareClampMask:(unsigned)arg1 ;
-(unsigned)fragmentDepthCompareClampMask;
-(void)setFragmentDepthCompareClampMask:(unsigned)arg1 ;
-(char)isDepthStencilWriteDisabled;
-(void)setDepthStencilWriteDisabled:(char)arg1 ;
-(id)fastBlendDescriptorAtIndex:(unsigned)arg1 ;
-(void)attachVertexDescriptor:(id)arg1 ;
-(void)setVertexEnabled:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)sampleCount;
-(void)setSampleCount:(unsigned)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)colorAttachments;
-(void)setDepthAttachmentPixelFormat:(unsigned)arg1 ;
-(void)setStencilAttachmentPixelFormat:(unsigned)arg1 ;
-(id)vertexDescriptor;
-(void)setVertexDescriptor:(id)arg1 ;
-(void)setVertexFunction:(id)arg1 ;
-(void)setFragmentFunction:(id)arg1 ;
-(unsigned)depthAttachmentPixelFormat;
-(unsigned)stencilAttachmentPixelFormat;
-(id)vertexFunction;
@end

