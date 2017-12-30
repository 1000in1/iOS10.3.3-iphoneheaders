/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MPSImage.h>

@interface MPSTemporaryImage : MPSImage {

	unsigned _readCount;

}

@property (assign,nonatomic) unsigned readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 ;
+(id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2 ;
-(void)setReadCount:(unsigned)arg1 ;
-(unsigned)readCount;
-(void)dealloc;
-(id)debugDescription;
-(unsigned)setPurgeableState:(unsigned)arg1 ;
@end

