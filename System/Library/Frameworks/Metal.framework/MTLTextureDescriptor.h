/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLTextureDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned textureType; 
@property (assign,nonatomic) unsigned pixelFormat; 
@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) unsigned height; 
@property (assign,nonatomic) unsigned depth; 
@property (assign,nonatomic) unsigned mipmapLevelCount; 
@property (assign,nonatomic) unsigned sampleCount; 
@property (assign,nonatomic) unsigned arrayLength; 
@property (assign,nonatomic) unsigned resourceOptions; 
@property (assign,nonatomic) unsigned cpuCacheMode; 
@property (assign,nonatomic) unsigned storageMode; 
@property (assign,nonatomic) unsigned usage; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)texture2DDescriptorWithPixelFormat:(unsigned)arg1 width:(unsigned)arg2 height:(unsigned)arg3 mipmapped:(char)arg4 ;
+(id)textureCubeDescriptorWithPixelFormat:(unsigned)arg1 size:(unsigned)arg2 mipmapped:(char)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

