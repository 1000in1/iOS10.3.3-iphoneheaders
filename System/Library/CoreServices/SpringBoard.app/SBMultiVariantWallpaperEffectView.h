/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBWallpaperEffectView;

@interface SBMultiVariantWallpaperEffectView : UIView {

	SBWallpaperEffectView* _homeWallpaperEffectView;
	SBWallpaperEffectView* _lockWallpaperEffectView;
	int _variant;
	int _style;
	unsigned _transformOptions;

}

@property (assign,nonatomic) int variant;                            //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) int style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned transformOptions;              //@synthesize transformOptions=_transformOptions - In the implementation block
-(void)offsetWallpaperBy:(CGPoint)arg1 ;
-(id)_activeEffectView;
-(void)_createEffectViewForVariantIfNeeded:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setTransformOptions:(unsigned)arg1 ;
-(unsigned)transformOptions;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end

