/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUIServices/SBUIVibrantButton.h>

@class SBWallpaperEffectView;

@interface SBDashBoardVibrantWallpaperButton : SBUIVibrantButton {

	SBWallpaperEffectView* _effectView;

}

@property (nonatomic,readonly) SBWallpaperEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
-(void)_updateVibrancy;
-(id)initWithFrame:(CGRect)arg1 ;
-(SBWallpaperEffectView *)effectView;
-(void)setLegibilitySettings:(id)arg1 ;
@end

