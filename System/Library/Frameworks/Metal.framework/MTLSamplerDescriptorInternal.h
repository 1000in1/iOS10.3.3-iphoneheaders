/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSamplerDescriptor.h>

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {

	MTLSamplerDescriptorPrivate* _private;

}
-(id)formattedDescription:(unsigned)arg1 ;
-(const MTLSamplerDescriptorPrivate*)descriptorPrivate;
-(char)lodAverage;
-(void)setLodAverage:(char)arg1 ;
-(unsigned)minFilter;
-(unsigned)magFilter;
-(unsigned)sAddressMode;
-(unsigned)tAddressMode;
-(unsigned)rAddressMode;
-(char)normalizedCoordinates;
-(float)lodMinClamp;
-(void)setLodMinClamp:(float)arg1 ;
-(float)lodMaxClamp;
-(void)setLodMaxClamp:(float)arg1 ;
-(unsigned)compareFunction;
-(void)setCompareFunction:(unsigned)arg1 ;
-(void)setNormalizedCoordinates:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(float)lodBias;
-(void)setLodBias:(float)arg1 ;
-(void)setSAddressMode:(unsigned)arg1 ;
-(void)setTAddressMode:(unsigned)arg1 ;
-(void)setMinFilter:(unsigned)arg1 ;
-(void)setMagFilter:(unsigned)arg1 ;
-(void)setMipFilter:(unsigned)arg1 ;
-(void)setMaxAnisotropy:(unsigned)arg1 ;
-(void)setRAddressMode:(unsigned)arg1 ;
-(unsigned)mipFilter;
-(unsigned)maxAnisotropy;
@end

