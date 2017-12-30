/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSSPropertyCommandSerializing.h>
#import <iWorkImport/TSSPreset.h>
#import <iWorkImport/TSSPresetSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSUColor : NSObject <TSSPropertyCommandSerializing, TSSPreset, TSSPresetSource, NSCopying> {

	CGColorRef mCGColor;
	unsigned mColorRGBSpace;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * presetKind; 
@property (readonly) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned colorRGBSpace; 
@property (nonatomic,readonly) float blueComponent; 
@property (nonatomic,readonly) float redComponent; 
@property (nonatomic,readonly) float greenComponent; 
@property (nonatomic,readonly) float alphaComponent; 
+(id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 targetRGBSpace:(unsigned)arg5 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(id)p_defaultPresetColors:(int)arg1 ;
+(id)blackColor;
+(id)colorWithWhite:(float)arg1 alpha:(float)arg2 ;
+(id)whiteColor;
+(id)clearColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)grayColor;
+(id)lightGrayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)colorWithHexString:(id)arg1 ;
+(id)colorWithUIColor:(id)arg1 ;
+(id)randomColor;
-(id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 targetRGBSpace:(unsigned)arg5 ;
-(id)initWithCGColor:(CGColorRef)arg1 colorSpace:(unsigned)arg2 ;
-(char)isEqualWithTolerance:(id)arg1 ;
-(unsigned)colorRGBSpace;
-(char)p_isEqualToColor:(id)arg1 withTolerance:(float)arg2 ;
-(char)wantsHighContrastBackgroundForDarkMode:(id)arg1 ;
-(void)saveToMessage:(Color*)arg1 ;
-(void)saveToArchive:(Color*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Color*)arg1 unarchiver:(id)arg2 ;
-(NSString *)presetKind;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 colorSpace:(unsigned)arg5 ;
-(CGColorRef)CGColor;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isOpaque;
-(id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
-(id)initWithWhite:(float)arg1 alpha:(float)arg2 ;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(float)alphaComponent;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithPatternImage:(id)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(float)redComponent;
-(float)greenComponent;
-(float)blueComponent;
-(id)initWithHexString:(id)arg1 ;
-(float)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(id)newBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2 ;
-(char)isAlmostEqualToColor:(id)arg1 ;
-(void)getRGBAComponents:(float*)arg1 ;
-(float)hueComponent;
-(float)saturationComponent;
-(float)brightnessComponent;
-(id)UIColor;
-(id)grayscaleColor;
-(id)invertedColor;
-(float)luminance;
-(char)isNearlyWhite;
-(id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)hexString;
-(id)initWithMessage:(const Color*)arg1 ;
@end

