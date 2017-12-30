/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _UIGlintyStringViewDelegate;
@class NSString, UIFont, _UILegibilitySettings, _UIVibrantSettings, UIView, UIColor, UILabel, UIImage, NSMutableSet;

@interface _UIGlintyStringView : UIView {

	char _animationRepeats;
	char _adjustsFontSizeToFitWidth;
	char _hasCustomBackgroundColor;
	char _highlight;
	char _allowsLuminanceAdjustments;
	char _usesBackgroundDimming;
	char _needsTextUpdate;
	char _animating;
	char _fading;
	char _showing;
	id<_UIGlintyStringViewDelegate> _delegate;
	NSString* _text;
	UIFont* _font;
	NSString* _textLanguage;
	_UILegibilitySettings* _legibilitySettings;
	_UIVibrantSettings* _vibrantSettings;
	UIView* _backgroundView;
	UIColor* _backgroundColor;
	UIColor* _chevronBackgroundColor;
	int _chevronStyle;
	float _horizontalPadding;
	UILabel* _label;
	UIView* _spotlightView;
	int _textIndex;
	UIImage* _chevron;
	UIView* _highlightView;
	UIView* _effectView;
	UIView* _blurView;
	UIView* _shimmerImageView;
	UIView* _reflectionImageView;
	float _blurAlpha;
	NSMutableSet* _blurHiddenRequesters;
	CGSize _labelSize;
	CGRect _chevronFrame;

}

@property (assign,nonatomic) char needsTextUpdate;                                    //@synthesize needsTextUpdate=_needsTextUpdate - In the implementation block
@property (nonatomic,retain) UILabel * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) CGSize labelSize;                                        //@synthesize labelSize=_labelSize - In the implementation block
@property (nonatomic,retain) UIView * spotlightView;                                  //@synthesize spotlightView=_spotlightView - In the implementation block
@property (assign,nonatomic) int textIndex;                                           //@synthesize textIndex=_textIndex - In the implementation block
@property (nonatomic,retain) UIImage * chevron;                                       //@synthesize chevron=_chevron - In the implementation block
@property (assign,nonatomic) CGRect chevronFrame;                                     //@synthesize chevronFrame=_chevronFrame - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                  //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) char animating;                                          //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) char fading;                                             //@synthesize fading=_fading - In the implementation block
@property (assign,nonatomic) char showing;                                            //@synthesize showing=_showing - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                     //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * blurView;                                       //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * shimmerImageView;                               //@synthesize shimmerImageView=_shimmerImageView - In the implementation block
@property (nonatomic,retain) UIView * reflectionImageView;                            //@synthesize reflectionImageView=_reflectionImageView - In the implementation block
@property (assign,nonatomic) float blurAlpha;                                         //@synthesize blurAlpha=_blurAlpha - In the implementation block
@property (nonatomic,retain) NSMutableSet * blurHiddenRequesters;                     //@synthesize blurHiddenRequesters=_blurHiddenRequesters - In the implementation block
@property (assign,nonatomic) id<_UIGlintyStringViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSString * textLanguage;                                   //@synthesize textLanguage=_textLanguage - In the implementation block
@property (nonatomic,readonly) CGRect labelFrame; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,retain) _UIVibrantSettings * vibrantSettings;                    //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * chevronBackgroundColor;                        //@synthesize chevronBackgroundColor=_chevronBackgroundColor - In the implementation block
@property (assign,nonatomic) char animationRepeats;                                   //@synthesize animationRepeats=_animationRepeats - In the implementation block
@property (assign,nonatomic) char adjustsFontSizeToFitWidth;                          //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) char hasCustomBackgroundColor;                           //@synthesize hasCustomBackgroundColor=_hasCustomBackgroundColor - In the implementation block
@property (assign,nonatomic) int chevronStyle;                                        //@synthesize chevronStyle=_chevronStyle - In the implementation block
@property (assign,nonatomic) float horizontalPadding;                                 //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) char highlight;                                          //@synthesize highlight=_highlight - In the implementation block
@property (assign,nonatomic) char allowsLuminanceAdjustments;                         //@synthesize allowsLuminanceAdjustments=_allowsLuminanceAdjustments - In the implementation block
@property (assign,nonatomic) char usesBackgroundDimming;                              //@synthesize usesBackgroundDimming=_usesBackgroundDimming - In the implementation block
-(void)layoutSubviews;
-(void)hide;
-(char)showing;
-(void)show;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<_UIGlintyStringViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_highlightColor;
-(id<_UIGlintyStringViewDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setAdjustsFontSizeToFitWidth:(char)arg1 ;
-(char)adjustsFontSizeToFitWidth;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(char)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(char)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIView *)effectView;
-(void)fadeOutWithDuration:(double)arg1 ;
-(char)animating;
-(void)setEffectView:(UIView *)arg1 ;
-(UIView *)highlightView;
-(void)setChevronStyle:(int)arg1 ;
-(void)updateText;
-(void)setNeedsTextUpdate:(char)arg1 ;
-(char)hasCustomBackgroundColor;
-(void)setBlurAlpha:(float)arg1 ;
-(UIView *)blurView;
-(void)updateBlurForHiddenRequesters;
-(char)fading;
-(void)addGlintyAnimations;
-(void)removeGlintyAnimations;
-(void)hideEffects;
-(void)hideBlur;
-(void)setShowing:(char)arg1 ;
-(void)showEffects;
-(void)showBlur;
-(void)setFading:(char)arg1 ;
-(void)fadeInWithDuration:(double)arg1 ;
-(id)_chevronImageForStyle:(int)arg1 ;
-(void)setChevron:(UIImage *)arg1 ;
-(void)updateTextWithBounds:(CGRect)arg1 ;
-(float)_chevronWidthWithPadding;
-(float)_chevronWidthWithPaddingCompression:(float)arg1 ;
-(float)_chevronHeightWithMaxOffset;
-(void)_updateLabelWithFrame:(CGRect)arg1 ;
-(float)_chevronVerticalOffset;
-(char)allowsLuminanceAdjustments;
-(_UIVibrantSettings *)vibrantSettings;
-(UIImage *)chevron;
-(id)shapeViewForCharactersInString:(id)arg1 withFont:(id)arg2 centeredInFrame:(CGRect)arg3 ;
-(void)setShimmerImageView:(UIView *)arg1 ;
-(void)setReflectionImageView:(UIView *)arg1 ;
-(char)usesBackgroundDimming;
-(void)setBlurView:(UIView *)arg1 ;
-(float)blurAlpha;
-(UIView *)shimmerImageView;
-(UIView *)reflectionImageView;
-(void)addShimmerAnimationToLayer:(id)arg1 ;
-(void)addReflectionAnimationToLayer:(id)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(id)_highlightCompositingFilter;
-(char)needsTextUpdate;
-(CGSize)_labelSizeThatFits:(CGSize)arg1 ;
-(float)_chevronPadding;
-(float)baselineOffsetFromBottomWithSize:(CGSize)arg1 ;
-(id)initWithText:(id)arg1 andFont:(id)arg2 ;
-(void)setTextLanguage:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setVibrantSettings:(_UIVibrantSettings *)arg1 ;
-(void)setBlurHidden:(char)arg1 forRequester:(id)arg2 ;
-(void)fadeOut;
-(void)fadeIn;
-(void)setHighlight:(char)arg1 ;
-(void)setHorizontalPadding:(float)arg1 ;
-(void)_updateHighlight;
-(CGRect)labelFrame;
-(CGRect)chevronFrame;
-(float)baselineOffsetFromBottom;
-(NSString *)textLanguage;
-(_UILegibilitySettings *)legibilitySettings;
-(UIColor *)chevronBackgroundColor;
-(void)setChevronBackgroundColor:(UIColor *)arg1 ;
-(char)animationRepeats;
-(void)setAnimationRepeats:(char)arg1 ;
-(void)setHasCustomBackgroundColor:(char)arg1 ;
-(int)chevronStyle;
-(float)horizontalPadding;
-(char)highlight;
-(void)setAllowsLuminanceAdjustments:(char)arg1 ;
-(void)setUsesBackgroundDimming:(char)arg1 ;
-(CGSize)labelSize;
-(void)setLabelSize:(CGSize)arg1 ;
-(UIView *)spotlightView;
-(void)setSpotlightView:(UIView *)arg1 ;
-(int)textIndex;
-(void)setTextIndex:(int)arg1 ;
-(void)setChevronFrame:(CGRect)arg1 ;
-(NSMutableSet *)blurHiddenRequesters;
-(void)setBlurHiddenRequesters:(NSMutableSet *)arg1 ;
@end

