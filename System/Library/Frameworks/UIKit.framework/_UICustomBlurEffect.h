/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBlurEffect.h>

@class _UIBackdropViewSettings, UIColor;

@interface _UICustomBlurEffect : UIBlurEffect {

	_UIBackdropViewSettings* _blurEffect;

}

@property (assign,nonatomic) float grayscaleTintLevel; 
@property (assign,nonatomic) float grayscaleTintAlpha; 
@property (assign,nonatomic) char lightenGrayscaleWithSourceOver; 
@property (nonatomic,retain) UIColor * colorTint; 
@property (assign,nonatomic) float colorTintAlpha; 
@property (assign,nonatomic) float colorBurnTintLevel; 
@property (assign,nonatomic) float colorBurnTintAlpha; 
@property (assign,nonatomic) float darkeningTintAlpha; 
@property (assign,nonatomic) float darkeningTintHue; 
@property (assign,nonatomic) float darkeningTintSaturation; 
@property (assign,nonatomic) char darkenWithSourceOver; 
@property (assign,nonatomic) float blurRadius; 
@property (assign,nonatomic) float saturationDeltaFactor; 
@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) float zoom; 
+(id)effectWithStyle:(int)arg1 ;
-(id)init;
-(void)setBlurRadius:(float)arg1 ;
-(float)blurRadius;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(void)setGrayscaleTintLevel:(float)arg1 ;
-(void)setGrayscaleTintAlpha:(float)arg1 ;
-(void)setColorTint:(UIColor *)arg1 ;
-(void)setColorTintAlpha:(float)arg1 ;
-(void)setSaturationDeltaFactor:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)saturationDeltaFactor;
-(float)grayscaleTintAlpha;
-(float)grayscaleTintLevel;
-(UIColor *)colorTint;
-(float)colorTintAlpha;
-(float)darkeningTintAlpha;
-(void)setDarkeningTintAlpha:(float)arg1 ;
-(id)effectSettings;
-(char)lightenGrayscaleWithSourceOver;
-(void)setLightenGrayscaleWithSourceOver:(char)arg1 ;
-(float)colorBurnTintLevel;
-(void)setColorBurnTintLevel:(float)arg1 ;
-(float)colorBurnTintAlpha;
-(void)setColorBurnTintAlpha:(float)arg1 ;
-(float)darkeningTintHue;
-(void)setDarkeningTintHue:(float)arg1 ;
-(float)darkeningTintSaturation;
-(void)setDarkeningTintSaturation:(float)arg1 ;
-(char)darkenWithSourceOver;
-(void)setDarkenWithSourceOver:(char)arg1 ;
-(float)zoom;
-(void)setZoom:(float)arg1 ;
@end

