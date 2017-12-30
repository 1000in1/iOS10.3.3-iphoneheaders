/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <MapsLockScreen/GuidanceSignView.h>

@class UIView, GuidanceManeuverView, GuidanceSignInstructionsLabel, UIImageView, GuidanceSignBackgroundView, NSArray, UIImage;

@interface NavGuidanceSecondarySignView : GuidanceSignView {

	float _maximumWidth;
	UIView* _containerView;
	CGRect _pendingContainerFrame;
	char _disallowMutation;
	GuidanceManeuverView* _maneuverView;
	GuidanceSignInstructionsLabel* _instructionsLabel;
	UIImageView* _shieldView;
	CGPoint _shieldCenter;
	GuidanceSignBackgroundView* _backgroundView;
	UIImageView* _borderView;
	NSArray* _instructionsTextAlternatives;
	UIView* _separatorView;
	char _delayLayout;

}

@property (assign,nonatomic) float maximumWidth;                                 //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (nonatomic,copy) NSArray * instructionsTextAlternatives;               //@synthesize instructionsTextAlternatives=_instructionsTextAlternatives - In the implementation block
@property (nonatomic,readonly) GuidanceManeuverView * maneuverView;              //@synthesize maneuverView=_maneuverView - In the implementation block
@property (nonatomic,retain) UIImage * shieldImage; 
@property (assign,nonatomic) CGPoint shieldCenter;                               //@synthesize shieldCenter=_shieldCenter - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                           //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) char delayLayout;                                   //@synthesize delayLayout=_delayLayout - In the implementation block
+(char)canDisplayJunction:(id)arg1 ;
-(UIImage *)shieldImage;
-(char)delayLayout;
-(GuidanceManeuverView *)maneuverView;
-(void)setShieldImage:(UIImage *)arg1 ;
-(void)disallowMutation;
-(void)textLinesShouldAnimateFromHeight:(float)arg1 ;
-(void)setInstructionsTextAlternatives:(NSArray *)arg1 ;
-(NSArray *)instructionsTextAlternatives;
-(void)updateStyleValuesFromTheme;
-(void)setInstructionStartingX:(float)arg1 ;
-(CGPoint)shieldCenter;
-(void)finalizePosition;
-(void)setShieldCenter:(CGPoint)arg1 ;
-(void)setContentFrameX:(float)arg1 ;
-(void)_showBounds:(id)arg1 ;
-(void)willAnimateStyleValuesFromTheme;
-(void)setInstructionsText:(id)arg1 ;
-(void)animateTextUpWithDuration:(double)arg1 ;
-(void)animateTextDownWithDuration:(double)arg1 ;
-(void)transformSublayersByPercentComplete:(float)arg1 ;
-(void)setDelayLayout:(char)arg1 ;
-(void)didAnimateStyleValuesFromTheme;
-(void)setHidden:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMaximumWidth:(float)arg1 ;
-(float)maximumWidth;
-(UIView *)separatorView;
-(CGRect)contentFrame;
-(void)setVariant:(int)arg1 ;
-(id)instructionsLabel;
@end

