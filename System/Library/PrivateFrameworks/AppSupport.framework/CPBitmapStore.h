/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSCache, NSObject;

@interface CPBitmapStore : NSObject {

	NSString* _path;
	NSString* _imagePath;
	NSCache* _cache;
	int _version;
	NSString* _versionPath;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesBackground;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesDefault;
	char _lockOnRead;

}

@property (nonatomic,readonly) int version; 
@property (assign,nonatomic) char lockOnRead;                      //@synthesize lockOnRead=_lockOnRead - In the implementation block
@property (assign,nonatomic) unsigned cacheItemLimit; 
-(id)imageNameForKey:(id)arg1 inGroup:(id)arg2 ;
-(char)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(char)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(CGImageRef)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 scale:(float)arg5 fillMem:(/*^block*/id)arg6 alternateCompletion:(/*^block*/id)arg7 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 formatColor:(CGColorRef)arg5 scale:(float)arg6 data:(id)arg7 ;
-(CGImageRef)copyImageForKey:(id)arg1 ;
-(void)commitTxn;
-(CGImageRef)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(char)arg4 scale:(float)arg5 draw:(/*^block*/id)arg6 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(char)arg4 scale:(float)arg5 data:(id)arg6 ;
-(void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(char)arg4 scale:(float)arg5 data:(id)arg6 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(unsigned char)arg4 scale:(float)arg5 data:(id)arg6 ;
-(void)removeImagesInGroups:(id)arg1 ;
-(id)_versionPath;
-(unsigned)cacheItemLimit;
-(id)cacheNumberForKey:(id)arg1 ;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(unsigned)memContentOffset;
-(char)lockOnRead;
-(void)dealloc;
-(void)purge;
-(void)commitTransaction;
-(int)setVersion:(int)arg1 ;
-(int)version;
-(id)initWithPath:(id)arg1 version:(int)arg2 ;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(char)arg3 image:(CGImageRef)arg4 ;
-(void)removeImagesInGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLockOnRead:(char)arg1 ;
-(void)setCacheItemLimit:(unsigned)arg1 ;
-(unsigned)imageCount;
-(id)allGroups;
-(id)imagePath;
@end

