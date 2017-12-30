/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIVisualEffectView.h>

@protocol DebugWindowSizeButtonDelegate;
@class UISegmentedControl, UISlider;

@interface DebugWindowSizeControlPanel : UIVisualEffectView {

	UISegmentedControl* _windowSizeDebugAutoAnimationControl;
	UISegmentedControl* _windowSizeDebugAutoAnimationStepSizeControl;
	UISegmentedControl* _windowSizeDebugSizeClassControl;
	UISlider* _windowSizeDebugWindowWidthSlider;
	UISegmentedControl* _windowSizeDebugDiscreteWidthControl;
	float _debugWindowSizeAnimationStepSize;
	id<DebugWindowSizeButtonDelegate> _delegate;

}

@property (retain) UISegmentedControl * windowSizeDebugAutoAnimationControl;                      //@synthesize windowSizeDebugAutoAnimationControl=_windowSizeDebugAutoAnimationControl - In the implementation block
@property (retain) UISegmentedControl * windowSizeDebugAutoAnimationStepSizeControl;              //@synthesize windowSizeDebugAutoAnimationStepSizeControl=_windowSizeDebugAutoAnimationStepSizeControl - In the implementation block
@property (retain) UISegmentedControl * windowSizeDebugSizeClassControl;                          //@synthesize windowSizeDebugSizeClassControl=_windowSizeDebugSizeClassControl - In the implementation block
@property (retain) UISlider * windowSizeDebugWindowWidthSlider;                                   //@synthesize windowSizeDebugWindowWidthSlider=_windowSizeDebugWindowWidthSlider - In the implementation block
@property (retain) UISegmentedControl * windowSizeDebugDiscreteWidthControl;                      //@synthesize windowSizeDebugDiscreteWidthControl=_windowSizeDebugDiscreteWidthControl - In the implementation block
@property (assign) float debugWindowSizeAnimationStepSize;                                        //@synthesize debugWindowSizeAnimationStepSize=_debugWindowSizeAnimationStepSize - In the implementation block
@property (assign) id<DebugWindowSizeButtonDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
-(float)debugWindowSizeAnimationStepSize;
-(UISlider *)windowSizeDebugWindowWidthSlider;
-(UISegmentedControl *)windowSizeDebugDiscreteWidthControl;
-(UISegmentedControl *)windowSizeDebugAutoAnimationControl;
-(void)_windowSizeDiscreteWidthControllSelectedSegmentChanged:(id)arg1 ;
-(void)_windowSizeDebugAutoAnimationSelectedSegmentChanged:(id)arg1 ;
-(void)_windowSizeDebugAutoAnimationStepSizeSelectedSegmentChanged:(id)arg1 ;
-(void)_windowSizeSizeClassSwitcherSelectedSegmentChanged:(id)arg1 ;
-(void)_windowSizeWidthSliderTouchUp:(id)arg1 ;
-(void)_windowSizeWidthSliderChanged:(id)arg1 ;
-(void)setWindowSizeDebugAutoAnimationControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)windowSizeDebugAutoAnimationStepSizeControl;
-(void)setWindowSizeDebugAutoAnimationStepSizeControl:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)windowSizeDebugSizeClassControl;
-(void)setWindowSizeDebugSizeClassControl:(UISegmentedControl *)arg1 ;
-(void)setWindowSizeDebugWindowWidthSlider:(UISlider *)arg1 ;
-(void)setWindowSizeDebugDiscreteWidthControl:(UISegmentedControl *)arg1 ;
-(void)setDebugWindowSizeAnimationStepSize:(float)arg1 ;
-(void)setDelegate:(id<DebugWindowSizeButtonDelegate>)arg1 ;
-(id<DebugWindowSizeButtonDelegate>)delegate;
-(void)updateConstraints;
-(id)initWithEffect:(id)arg1 ;
@end

