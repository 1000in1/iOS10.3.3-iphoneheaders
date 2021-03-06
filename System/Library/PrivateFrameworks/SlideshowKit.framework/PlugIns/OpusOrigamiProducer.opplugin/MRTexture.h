/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class EAGLContext, MRContextState;

@interface MRTexture : NSObject {

	EAGLContext* _parenGLContext;
	EAGLContext* _glContext;
	float _borderColor[4];
	char _textureNameIsNotOurs;
	char _hasMipmap;
	char _isPowerOfTwo;
	char _isShared;
	char _isFloat;
	char _isPremultiplied;
	char _isOpaque;
	MRContextState* _innerState;
	unsigned _textureName;
	unsigned _textureTarget;
	unsigned _orientation;
	unsigned long _pixelFormat;
	unsigned _framebufferName;
	int _minFilter;
	int _magFilter;
	int _wrapS;
	int _wrapT;
	NSRange _size;
	double _timestamp;

}

@property (readonly) MRContextState * innerState;                   //@synthesize innerState=_innerState - In the implementation block
@property (readonly) NSRange size;                                  //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long pixelFormat;                     //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (readonly) unsigned textureName;                          //@synthesize textureName=_textureName - In the implementation block
@property (readonly) unsigned textureTarget;                        //@synthesize textureTarget=_textureTarget - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned orientation;                  //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned framebufferName;                      //@synthesize framebufferName=_framebufferName - In the implementation block
@property (readonly) EAGLContext * glContext;                       //@synthesize glContext=_glContext - In the implementation block
@property (readonly) char isFBO; 
@property (readonly) char hasMipmap;                                //@synthesize hasMipmap=_hasMipmap - In the implementation block
@property (readonly) char isPowerOfTwo;                             //@synthesize isPowerOfTwo=_isPowerOfTwo - In the implementation block
@property (readonly) char isFloat;                                  //@synthesize isFloat=_isFloat - In the implementation block
@property (readonly) char isMonochromatic; 
@property (assign,nonatomic) char isPremultiplied;                  //@synthesize isPremultiplied=_isPremultiplied - In the implementation block
@property (assign,nonatomic) char isOpaque;                         //@synthesize isOpaque=_isOpaque - In the implementation block
@property (assign,nonatomic) char isShared;                         //@synthesize isShared=_isShared - In the implementation block
@property (assign,nonatomic) int minFilter;                         //@synthesize minFilter=_minFilter - In the implementation block
@property (assign,nonatomic) int magFilter;                         //@synthesize magFilter=_magFilter - In the implementation block
@property (assign,nonatomic) int wrapS;                             //@synthesize wrapS=_wrapS - In the implementation block
@property (assign,nonatomic) int wrapT;                             //@synthesize wrapT=_wrapT - In the implementation block
@property (assign,nonatomic) const float* borderColor; 
-(char)isFloat;
-(void)setBorderColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(unsigned)framebufferName;
-(char)isMonochromatic;
-(void)uploadData:(void*)arg1 rowBytes:(unsigned)arg2 toRect:(CGRect)arg3 ;
-(unsigned)textureName;
-(char)isFBO;
-(id)initWithSize:(NSRange)arg1 inGLContext:(id)arg2 options:(const SCD_Struct_MR7*)arg3 ;
-(id)initWithTextureName:(unsigned)arg1 textureTarget:(unsigned)arg2 size:(NSRange)arg3 inGLContext:(id)arg4 options:(const SCD_Struct_MR7*)arg5 ;
-(id)initWithData:(void*)arg1 width:(unsigned long)arg2 height:(unsigned long)arg3 rowBytes:(unsigned long)arg4 inGLContext:(id)arg5 options:(const SCD_Struct_MR7*)arg6 ;
-(id)initWithDatas:(void*)arg1 dataCount:(unsigned)arg2 width:(unsigned long)arg3 height:(unsigned long)arg4 rowBytes:(unsigned long)arg5 inGLContext:(id)arg6 options:(const SCD_Struct_MR7*)arg7 ;
-(void)setIsPremultiplied:(char)arg1 ;
-(char)hasMipmap;
-(id)initFBOWithSize:(NSRange)arg1 inGLContext:(id)arg2 options:(const SCD_Struct_MR7*)arg3 ;
-(id)_initWithSize:(NSRange)arg1 inGLContext:(id)arg2 isFBO:(char)arg3 options:(const SCD_Struct_MR7*)arg4 ;
-(MRContextState *)innerState;
-(int)minFilter;
-(int)magFilter;
-(NSRange)size;
-(void)dealloc;
-(double)timestamp;
-(void)setOrientation:(unsigned)arg1 ;
-(unsigned)orientation;
-(void)setTimestamp:(double)arg1 ;
-(void)setBorderColor:(const float*)arg1 ;
-(char)isOpaque;
-(void)setLabel:(id)arg1 ;
-(const float*)borderColor;
-(void)cleanup;
-(unsigned long)pixelFormat;
-(EAGLContext *)glContext;
-(void)setMinFilter:(int)arg1 ;
-(void)setMagFilter:(int)arg1 ;
-(char)isShared;
-(void)setWrapS:(int)arg1 ;
-(void)setWrapT:(int)arg1 ;
-(void)setIsOpaque:(char)arg1 ;
-(unsigned)textureTarget;
-(int)wrapS;
-(int)wrapT;
-(char)isPremultiplied;
-(void)setIsShared:(char)arg1 ;
-(char)isPowerOfTwo;
@end

