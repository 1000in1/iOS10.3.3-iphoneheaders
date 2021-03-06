/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBackdropView.h>

@class UIImageView, _UIBackdropView;

@interface UICalloutBarBackground : _UIBackdropView {

	float m_dividerOffsets[24];
	UIImageView* _blurMaskView;
	UIImageView* _tintMaskView;
	_UIBackdropView* _separatorView;
	CGRect _highlightRect;

}

@property (nonatomic,retain) UIImageView * blurMaskView;                   //@synthesize blurMaskView=_blurMaskView - In the implementation block
@property (nonatomic,retain) UIImageView * tintMaskView;                   //@synthesize tintMaskView=_tintMaskView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) CGRect highlightRect;                         //@synthesize highlightRect=_highlightRect - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(_UIBackdropView *)separatorView;
-(void)setSeparatorView:(_UIBackdropView *)arg1 ;
-(CGRect)highlightRect;
-(void)setHighlightRect:(CGRect)arg1 ;
-(void)setDividerOffsets:(float*)arg1 ;
-(void)setHighlighted:(char)arg1 forFrame:(CGRect)arg2 ;
-(void)setBlurDisabled:(char)arg1 ;
-(UIImageView *)blurMaskView;
-(void)setBlurMaskView:(UIImageView *)arg1 ;
-(UIImageView *)tintMaskView;
-(void)setTintMaskView:(UIImageView *)arg1 ;
@end

