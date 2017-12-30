/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIButton, NSTimer, NSMutableDictionary, UIColor;

@interface UIStepper : UIControl {

	char _isRtoL;
	UIImageView* _middleView;
	UIButton* _plusButton;
	UIButton* _minusButton;
	NSTimer* _repeatTimer;
	int _repeatCount;
	NSMutableDictionary* _dividerImages;
	char _continuous;
	char _autorepeat;
	char _wraps;
	double _value;
	double _minimumValue;
	double _maximumValue;
	double _stepValue;

}

@property (assign,getter=isContinuous,nonatomic) char continuous;              //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) char autorepeat;                                  //@synthesize autorepeat=_autorepeat - In the implementation block
@property (assign,nonatomic) char wraps;                                       //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) double value;                                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double stepValue;                                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)backgroundImageForState:(unsigned)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)_controlEventsForActionTriggered;
-(void)_emitValueChanged;
-(double)minimumValue;
-(double)maximumValue;
-(char)isContinuous;
-(void)setContinuous:(char)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)_updateImages;
-(char)wraps;
-(void)setWraps:(char)arg1 ;
-(void)_commonStepperInit;
-(void)_updateButtonEnabled;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned)arg2 rightSegmentState:(unsigned)arg3 ;
-(void)setIncrementImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setDecrementImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)_updateDividerImageForButtonState;
-(id)dividerImageForLeftSegmentState:(unsigned)arg1 rightSegmentState:(unsigned)arg2 ;
-(void)_startTimer;
-(void)_updateHighlightingAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateCount:(id)arg1 ;
-(void)_stopTimer;
-(void)_setIncrementImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setDecrementImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned)arg2 rightSegmentState:(unsigned)arg3 ;
-(void)setStepValue:(double)arg1 ;
-(id)incrementImageForState:(unsigned)arg1 ;
-(id)decrementImageForState:(unsigned)arg1 ;
-(double)stepValue;
-(char)autorepeat;
-(void)setAutorepeat:(char)arg1 ;
@end

