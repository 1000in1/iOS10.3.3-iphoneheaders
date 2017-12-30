/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent {

	int _blendMode;
	float _opacity;
	CUIColor* _color;
	short _angle;
	unsigned _distance;
	unsigned _blurSize;
	unsigned _spread;

}

@property (assign) int blendMode;                  //@synthesize blendMode=_blendMode - In the implementation block
@property (assign) float opacity;                  //@synthesize opacity=_opacity - In the implementation block
@property (retain) CUIColor * color;               //@synthesize color=_color - In the implementation block
@property (assign) short angle;                    //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned distance;              //@synthesize distance=_distance - In the implementation block
@property (assign) unsigned blurSize;              //@synthesize blurSize=_blurSize - In the implementation block
@property (assign) unsigned spread;                //@synthesize spread=_spread - In the implementation block
-(void)setBlurSize:(unsigned)arg1 ;
-(void)setSpread:(unsigned)arg1 ;
-(char)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)blurSize;
-(unsigned)spread;
-(id)init;
-(void)dealloc;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(void)setAngle:(short)arg1 ;
-(short)angle;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(unsigned)effectType;
@end

