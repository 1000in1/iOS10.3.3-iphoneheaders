/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:48 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class UIImage;

@interface TSUImage : NSObject {

	CGImageRef mCachedSliceableImage;
	CFDictionaryRef mImageSlices;
	long mImageSliceCacheLock;
	id mCachedSystemImage;
	long mCachedImageLock;

}

@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) int imageOrientation; 
@property (nonatomic,readonly) float scale; 
+(id)imageWithSize:(CGSize)arg1 drawnUsingBlock:(/*^block*/id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithUIImage:(id)arg1 ;
+(id)noisePatternWithWidth:(unsigned)arg1 height:(unsigned)arg2 factor:(float)arg3 ;
-(id)init;
-(CGSize)size;
-(void)dealloc;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(void)drawInRect:(CGRect)arg1 ;
-(CGImageRef)CGImage;
-(int)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(float)arg2 orientation:(int)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(UIImage *)UIImage;
-(id)initWithImageSourceRef:(CGImageSourceRef)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(CGImageRef)CGImageForContentsScale:(float)arg1 ;
-(id)imagePartsWithLeftCapWidth:(float)arg1 rightCapWidth:(float)arg2 topCapHeight:(float)arg3 bottomCapHeight:(float)arg4 ;
-(id)TIFFRepresentation;
-(id)JPEGRepresentationWithCompressionQuality:(float)arg1 ;
-(id)PNGRepresentation;
-(id)stretchedImageOfSize:(CGSize)arg1 leftCapWidth:(float)arg2 rightCapWidth:(float)arg3 topCapHeight:(float)arg4 bottomCapHeight:(float)arg5 ;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 stretchingCenterWidthBy:(float)arg3 ;
@end

