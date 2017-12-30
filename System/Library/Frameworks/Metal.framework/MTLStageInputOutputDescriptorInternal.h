/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLStageInputOutputDescriptor.h>

@class MTLBufferLayoutDescriptorArrayInternal, MTLAttributeDescriptorArrayInternal;

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {

	MTLBufferLayoutDescriptorArrayInternal* _vertexBufferArray;
	MTLAttributeDescriptorArrayInternal* _attributeArray;
	unsigned _indexBufferIndex;
	unsigned _indexType;

}
+(id)vertexDescriptor;
-(id)formattedDescription:(unsigned)arg1 ;
-(unsigned)indexBufferIndex;
-(void)setIndexBufferIndex:(unsigned)arg1 ;
-(id)newSerializedDescriptor;
-(char)validateWithVertexFunction:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(id)layouts;
-(unsigned)indexType;
-(void)setIndexType:(unsigned)arg1 ;
@end

