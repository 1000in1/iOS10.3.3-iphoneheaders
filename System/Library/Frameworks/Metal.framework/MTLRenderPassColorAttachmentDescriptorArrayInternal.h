/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLRenderPassColorAttachmentDescriptorArray.h>

@class MTLRenderPassColorAttachmentDescriptorInternal, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

@interface MTLRenderPassColorAttachmentDescriptorArrayInternal : MTLRenderPassColorAttachmentDescriptorArray {

	MTLRenderPassColorAttachmentDescriptorInternal* _color_descriptors[8];
	MTLRenderPassDepthAttachmentDescriptorInternal* _depth_descriptor;
	MTLRenderPassStencilAttachmentDescriptorInternal* _stencil_descriptor;

}
-(id)_descriptorAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
@end

