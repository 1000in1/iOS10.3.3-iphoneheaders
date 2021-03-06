/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIColor, BarShadowView;

@interface BlurView : UIView {

	_UIBackdropView* _backdrop;
	char _blurDisabled;
	UIColor* _blurDisabledBackgroundColor;
	int _privateStyle;
	BarShadowView* _topShadow;
	BarShadowView* _bottomShadow;
	BarShadowView* _leftShadow;
	BarShadowView* _rightShadow;
	int _style;
	unsigned _edgesWithBarShadow;

}

@property (assign,nonatomic) int style;                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * backdrop;              //@synthesize backdrop=_backdrop - In the implementation block
@property (assign,nonatomic) unsigned edgesWithBarShadow;               //@synthesize edgesWithBarShadow=_edgesWithBarShadow - In the implementation block
+(char)_isBlurDisabledViaDefaults;
+(char)_isBlurDisabledButBackdropViewShownForDevice;
-(void)_configChanged;
-(char)_hasBackdrop;
-(id)_backdropSettings;
-(void)_addBackDrop;
-(void)_transitionToCurrentStyle;
-(void)_removeBackDrop;
-(void)setBlurDisabledBackgroundColor:(id)arg1 ;
-(void)setEdgesWithBarShadow:(unsigned)arg1 ;
-(unsigned)edgesWithBarShadow;
-(void)layoutSubviews;
-(void)dealloc;
-(int)style;
-(void)didAddSubview:(id)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)transitionToStyle:(int)arg1 ;
-(id)initWithPrivateStyle:(int)arg1 ;
-(void)transitionToPrivateStyle:(int)arg1 ;
-(_UIBackdropView *)backdrop;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(int)arg2 ;
-(void)_updateForStyleChange;
@end

