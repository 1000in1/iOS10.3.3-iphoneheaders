/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent {

	unsigned _blurSize;
	unsigned _softenSize;
	short _angle;
	unsigned _altitude;
	unsigned _direction;
	int _highlightBlendMode;
	CUIColor* _highlightColor;
	float _highlightOpacity;
	int _shadowBlendMode;
	CUIColor* _shadowColor;
	float _shadowOpacity;

}

@property (assign) unsigned blurSize;                      //@synthesize blurSize=_blurSize - In the implementation block
@property (assign) unsigned softenSize;                    //@synthesize softenSize=_softenSize - In the implementation block
@property (assign) short angle;                            //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned altitude;                      //@synthesize altitude=_altitude - In the implementation block
@property (assign) unsigned direction;                     //@synthesize direction=_direction - In the implementation block
@property (assign) int highlightBlendMode;                 //@synthesize highlightBlendMode=_highlightBlendMode - In the implementation block
@property (retain) CUIColor * highlightColor;              //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign) float highlightOpacity;                 //@synthesize highlightOpacity=_highlightOpacity - In the implementation block
@property (assign) int shadowBlendMode;                    //@synthesize shadowBlendMode=_shadowBlendMode - In the implementation block
@property (retain) CUIColor * shadowColor;                 //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign) float shadowOpacity;                    //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
-(void)setBlurSize:(unsigned)arg1 ;
-(void)setSoftenSize:(unsigned)arg1 ;
-(void)setHighlightBlendMode:(int)arg1 ;
-(void)setHighlightOpacity:(float)arg1 ;
-(void)setShadowBlendMode:(int)arg1 ;
-(char)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)blurSize;
-(int)highlightBlendMode;
-(int)shadowBlendMode;
-(unsigned)softenSize;
-(float)highlightOpacity;
-(id)init;
-(void)setShadowColor:(CUIColor *)arg1 ;
-(void)dealloc;
-(void)setDirection:(unsigned)arg1 ;
-(unsigned)direction;
-(CUIColor *)shadowColor;
-(void)setShadowOpacity:(float)arg1 ;
-(float)shadowOpacity;
-(CUIColor *)highlightColor;
-(void)setHighlightColor:(CUIColor *)arg1 ;
-(void)setAngle:(short)arg1 ;
-(short)angle;
-(void)setAltitude:(unsigned)arg1 ;
-(unsigned)altitude;
-(unsigned)effectType;
@end

