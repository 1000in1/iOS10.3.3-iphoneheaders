/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallLockScreen/InCallLockScreen-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString, NSAttributedString, UIFont, UIColor, CAGradientLayer, CALayer, PHMarqueeContentView, UILabel;

@interface PHMarqueeView : UIView <CAAnimationDelegate> {

	char _scalingEnabled;
	NSString* _text;
	NSAttributedString* _attributedText;
	UIFont* _font;
	UIColor* _textColor;
	float _maxNonMarqueeWidth;
	float _scrollDelay;
	float _scrollSpeed;
	/*^block*/id _animationState;
	CAGradientLayer* _leftMaskLayer;
	CAGradientLayer* _rightMaskLayer;
	CALayer* _maskContainerLayer;
	PHMarqueeContentView* _contentView;
	UILabel* _label;

}

@property (retain) CAGradientLayer * leftMaskLayer;                                    //@synthesize leftMaskLayer=_leftMaskLayer - In the implementation block
@property (retain) CAGradientLayer * rightMaskLayer;                                   //@synthesize rightMaskLayer=_rightMaskLayer - In the implementation block
@property (retain) CALayer * maskContainerLayer;                                       //@synthesize maskContainerLayer=_maskContainerLayer - In the implementation block
@property (retain) PHMarqueeContentView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
@property (retain) UILabel * label;                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedText;                      //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIFont * font;                                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (assign,getter=isScalingEnabled,nonatomic) char scalingEnabled;              //@synthesize scalingEnabled=_scalingEnabled - In the implementation block
@property (assign,nonatomic) float maxNonMarqueeWidth;                                 //@synthesize maxNonMarqueeWidth=_maxNonMarqueeWidth - In the implementation block
@property (assign,nonatomic) float scrollDelay;                                        //@synthesize scrollDelay=_scrollDelay - In the implementation block
@property (assign,nonatomic) float scrollSpeed;                                        //@synthesize scrollSpeed=_scrollSpeed - In the implementation block
@property (nonatomic,copy) id animationState;                                          //@synthesize animationState=_animationState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)maskEdges:(unsigned)arg1 ;
-(CAGradientLayer *)rightMaskLayer;
-(void)sizeLabel;
-(char)requiresMarquee;
-(void)setScrollSpeed:(float)arg1 ;
-(CAGradientLayer *)leftMaskLayer;
-(void)removeMarqueeAnimation;
-(char)isScalingEnabled;
-(float)maxNonMarqueeWidth;
-(CALayer *)maskContainerLayer;
-(void)addMarqueeAnimationIfNecessary;
-(void)maskEdges:(unsigned)arg1 animated:(char)arg2 ;
-(void)setMaskContainerLayer:(CALayer *)arg1 ;
-(void)setLeftMaskLayer:(CAGradientLayer *)arg1 ;
-(void)setRightMaskLayer:(CAGradientLayer *)arg1 ;
-(void)setAttributedOrPlainText:(id)arg1 ;
-(void)setScalingEnabled:(char)arg1 ;
-(void)setMaxNonMarqueeWidth:(float)arg1 ;
-(float)scrollDelay;
-(void)setScrollDelay:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(PHMarqueeContentView *)arg1 ;
-(void)layoutSubviews;
-(PHMarqueeContentView *)contentView;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIFont *)font;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(id)animationState;
-(void)setAnimationState:(id)arg1 ;
-(float)scrollSpeed;
@end

