/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic,retain) id<MTLTexture> texture; 
@property (assign,nonatomic) unsigned level; 
@property (assign,nonatomic) unsigned slice; 
@property (assign,nonatomic) unsigned depthPlane; 
@property (nonatomic,retain) id<MTLTexture> resolveTexture; 
@property (assign,nonatomic) unsigned resolveLevel; 
@property (assign,nonatomic) unsigned resolveSlice; 
@property (assign,nonatomic) unsigned resolveDepthPlane; 
@property (assign,nonatomic) unsigned loadAction; 
@property (assign,nonatomic) unsigned storeAction; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end
