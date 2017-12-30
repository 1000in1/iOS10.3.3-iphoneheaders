/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedTexture : CUINamedLookup {

	float _scale;
	cuintproperties _textureProperties;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) float scale;                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) int exifOrientation; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,readonly) char isAlphaCropped; 
-(char)_cacheRenditionProperties;
-(id)textureWithBufferAllocator:(id)arg1 ;
-(CGSize)size;
-(id)description;
-(float)scale;
-(int)exifOrientation;
-(char)isOpaque;
-(char)isAlphaCropped;
-(CGRect)alphaCroppedRect;
@end

