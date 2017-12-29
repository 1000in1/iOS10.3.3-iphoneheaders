/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class UIButton, CALayer;

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {

	UIButton* _button;
	UIButton* _externalButton;
	char _selected;
	CALayer* _ringLayer;

}

@property (assign,nonatomic) char selected;                              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) CALayer * ringLayer;                        //@synthesize ringLayer=_ringLayer - In the implementation block
@property (nonatomic,readonly) char extendsHitTestingFrame; 
-(void)layoutSubviews;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(char)canBecomeFocused;
-(int)buttonType;
-(void)setSelected:(char)arg1 ;
-(id)highlightImage;
-(char)usesAdvancedActions;
-(char)selected;
-(float)updateContentsAndWidth;
-(char)allowsUserInteraction;
-(void)_pressButton:(id)arg1 ;
-(char)extendsHitTestingFrame;
-(void)_doubleTapButton:(id)arg1 ;
-(void)_pressAndHoldButton:(id)arg1 ;
-(id)_createButton;
-(void)setLayerHighlightImage:(id)arg1 ;
-(CALayer *)ringLayer;
-(void)setRingLayer:(CALayer *)arg1 ;
-(void)_triggerButtonWithAction:(int)arg1 ;
-(CGRect)_contentsImageFrame;
@end
