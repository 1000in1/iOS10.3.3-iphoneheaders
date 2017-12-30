/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBBannerContextView, UIView;

@interface SBBannerContainerView : UIView {

	char _modal;
	char _highlighted;
	SBBannerContextView* _bannerView;
	UIView* _backgroundView;
	UIView* _inlayView;
	float _maximumHeight;
	UIView* _inlayContainerView;

}

@property (nonatomic,retain) UIView * inlayContainerView;                          //@synthesize inlayContainerView=_inlayContainerView - In the implementation block
@property (assign,getter=isModal,nonatomic) char modal;                            //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic,__weak) SBBannerContextView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * backgroundView;                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIView * inlayView;                            //@synthesize inlayView=_inlayView - In the implementation block
@property (assign,nonatomic) float maximumHeight;                                  //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) char highlighted;                                     //@synthesize highlighted=_highlighted - In the implementation block
-(void)setInlayView:(UIView *)arg1 ;
-(void)_layoutInlayContainerView;
-(CGRect)_inlineContainerFrame;
-(CGRect)_backgroundFrame;
-(float)_bannerBottomY;
-(UIView *)inlayContainerView;
-(void)setInlayContainerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(char)highlighted;
-(char)isModal;
-(void)setModal:(char)arg1 ;
-(void)setBannerView:(SBBannerContextView *)arg1 ;
-(SBBannerContextView *)bannerView;
-(void)setMaximumHeight:(float)arg1 ;
-(float)maximumHeight;
-(UIView *)inlayView;
-(void)_layoutBackgroundView;
@end

