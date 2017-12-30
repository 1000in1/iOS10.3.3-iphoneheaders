/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLBufferLayoutDescriptorArray, MTLAttributeDescriptorArray;

@interface MTLStageInputOutputDescriptor : NSObject <NSCopying>

@property (readonly) MTLBufferLayoutDescriptorArray * layouts; 
@property (readonly) MTLAttributeDescriptorArray * attributes; 
@property (assign,nonatomic) unsigned indexType; 
@property (assign,nonatomic) unsigned indexBufferIndex; 
+(id)stageInputOutputDescriptor;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)formattedDescription:(unsigned)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

