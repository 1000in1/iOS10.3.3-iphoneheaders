/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate* _private;

}
-(id)formattedDescription:(unsigned)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(id)computeFunction;
-(id)newSerializedComputeData;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)setStageInputDescriptor:(id)arg1 ;
-(id)stageInputDescriptor;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(char)arg1 ;
-(char)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)setComputeFunction:(id)arg1 ;
@end

