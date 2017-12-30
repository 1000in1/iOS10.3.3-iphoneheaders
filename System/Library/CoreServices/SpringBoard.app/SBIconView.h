/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBReusableView.h>

@protocol SBIconAccessoryView, SBIconLabelView, SBReusableView, SBIconViewDelegate, SBIconViewObserver;
@class SBIcon, UIView, SBIconImageView, SBIconImageCrossfadeView, SBCloseBoxView, SBFParallaxSettings, SBFolderIconBackgroundView, NSTimer, _UILegibilitySettings, UIGestureRecognizer, _UIFeedbackImpactBehavior, NSString;

@interface SBIconView : UIView <_UISettingsKeyObserver, SBIconObserver, SBReusableView> {

	SBIcon* _icon;
	int _iconLocation;
	UIView* _currentImageView;
	SBIconImageView* _iconImageView;
	SBIconImageCrossfadeView* _crossfadeView;
	UIView*<SBIconAccessoryView> _accessoryView;
	SBCloseBoxView* _closeBox;
	SBFParallaxSettings* _closeBoxParallaxSettings;
	CGPoint _wallpaperRelativeCloseBoxCenter;
	UIView*<SBIconLabelView> _labelView;
	UIView*<SBReusableView> _labelAccessoryView;
	int _currentLabelAccessoryType;
	SBFolderIconBackgroundView* _dropGlow;
	unsigned _drawsLabel : 1;
	unsigned _isEditing : 1;
	unsigned _isPaused : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideLabel : 1;
	unsigned _hideLabelAccessoryView;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _longPressTimer;
	double _longPressGrabDuration;
	CGRect _visibleImageRect;
	char _enabled;
	id<SBIconViewDelegate> _delegate;
	id<SBIconViewObserver> _observer;
	unsigned _contentType;
	_UILegibilitySettings* _legibilitySettings;
	float _iconImageAlpha;
	float _iconAccessoryAlpha;
	float _iconLabelAlpha;
	UIGestureRecognizer* _appIconForceTouchGestureRecognizer;
	_UIFeedbackImpactBehavior* _feedbackBehavior;
	CGPoint _wallpaperRelativeImageCenter;

}

@property (nonatomic,readonly) unsigned contentType;                                                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) SBIcon * icon; 
@property (assign,nonatomic,__weak) id<SBIconViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconViewObserver> observer;                                //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) int location;                                                          //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                            //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) float iconImageAlpha;                                                  //@synthesize iconImageAlpha=_iconImageAlpha - In the implementation block
@property (assign,nonatomic) float iconAccessoryAlpha;                                              //@synthesize iconAccessoryAlpha=_iconAccessoryAlpha - In the implementation block
@property (assign,nonatomic) float iconLabelAlpha;                                                  //@synthesize iconLabelAlpha=_iconLabelAlpha - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * appIconForceTouchGestureRecognizer;              //@synthesize appIconForceTouchGestureRecognizer=_appIconForceTouchGestureRecognizer - In the implementation block
@property (assign,nonatomic) char isEditing; 
@property (nonatomic,readonly) char shouldShowLabelAccessoryView; 
@property (nonatomic,readonly) int currentLabelAccessoryType;                                       //@synthesize currentLabelAccessoryType=_currentLabelAccessoryType - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) _UIFeedbackImpactBehavior * feedbackBehavior;                        //@synthesize feedbackBehavior=_feedbackBehavior - In the implementation block
@property (nonatomic,readonly) UIView*<SBIconLabelView> labelView; 
@property (assign,nonatomic) CGPoint wallpaperRelativeImageCenter;                                  //@synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultIconSize;
+(CGSize)defaultVisibleIconImageSize;
+(CGSize)defaultIconImageSize;
+(CGPoint)defaultIconImageCenter;
+(CGSize)maxLabelSize;
+(CGRect)defaultIconImageFrame;
+(CGRect)_rectForLayoutMetric:(int)arg1 ;
+(float)_labelHeight;
+(int)_defaultIconFormat;
+(float)labelAccessoryViewRightMargin;
+(char)canShowLabelAccessoryView;
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimation;
-(void)removeAllIconAnimations;
-(void)setWallpaperRelativeImageCenter:(CGPoint)arg1 ;
-(CGPoint)iconImageCenter;
-(void)setIsEditing:(char)arg1 animated:(char)arg2 ;
-(void)setIconLabelAlpha:(float)arg1 ;
-(void)setCrossfadeFraction:(float)arg1 ;
-(void)setIconBlurFraction:(float)arg1 ;
-(void)setAppSnapshotBlurFraction:(float)arg1 ;
-(void)setAppSnapshotCornerRadiusFraction:(float)arg1 ;
-(void)setMorphFraction:(float)arg1 totalScale:(float)arg2 ;
-(char)isTouchDownInIcon;
-(void)setIsGrabbed:(char)arg1 ;
-(void)setIsOverlapping:(char)arg1 ;
-(void)prepareDropGlow;
-(void)showDropGlow:(char)arg1 ;
-(void)removeDropGlow;
-(id)dropGlow;
-(UIGestureRecognizer *)appIconForceTouchGestureRecognizer;
-(void)setAppIconForceTouchGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(char)isGrabbed;
-(id)initWithContentType:(unsigned)arg1 ;
-(CGPoint)wallpaperRelativeImageCenter;
-(void)setIconImageAndAccessoryAlpha:(float)arg1 ;
-(void)setLabelAccessoryViewHidden:(char)arg1 ;
-(CGSize)iconImageVisibleSize;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)iconLaunchEnabledDidChange:(id)arg1 ;
-(void)setAllIconElementsButLabelToHidden:(char)arg1 ;
-(id)iconImageSnapshot;
-(float)iconImageAlpha;
-(void)setRefusesRecipientStatus:(char)arg1 ;
-(char)isInDock;
-(void)configureLabelAccessoryViewsForAnimation:(char)arg1 ;
-(void)setSuppressesBlurryBackgroundChanges:(char)arg1 ;
-(void)setLabelHidden:(char)arg1 ;
-(void)cancelLongPressTimer;
-(void)_updateJitter;
-(void)_updateIconImageViewAnimated:(char)arg1 ;
-(void)_updateLabelAccessoryView;
-(void)_updateProgressAnimated:(char)arg1 ;
-(void)_updateAccessoryViewWithAnimation:(char)arg1 ;
-(void)_setIcon:(id)arg1 animated:(char)arg2 ;
-(void)setIconImageAlpha:(float)arg1 ;
-(void)setIconAccessoryAlpha:(float)arg1 ;
-(void)_applyIconImageAlpha:(float)arg1 ;
-(void)_applyIconAccessoryAlpha:(float)arg1 ;
-(void)_applyIconLabelAlpha:(float)arg1 ;
-(CGRect)_frameForImageView;
-(CGRect)_frameForLabel;
-(CGRect)_frameForLabelAccessoryViewWithLabelFrame:(CGRect)arg1 ;
-(CGRect)_frameForAccessoryView;
-(CGPoint)_centerForCloseBox;
-(float)_labelVerticalOffset;
-(CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(CGRect)arg1 ;
-(void)_updateAdaptiveColors;
-(id)_labelImageParameters;
-(id)_legibilitySettingsWithParameters:(id)arg1 ;
-(id)_legibilitySettingsWithStyle:(int)arg1 primaryColor:(id)arg2 ;
-(void)_configureLabelAccessoryViewForType:(int)arg1 ;
-(void)_createAccessoryViewIfNecessary;
-(void)_updateBrightness;
-(void)prepareToCrossfadeImageWithView:(id)arg1 crossfadeType:(unsigned)arg2 maskCorners:(char)arg3 trueCrossfade:(char)arg4 anchorPoint:(CGPoint)arg5 ;
-(void)cleanupAfterCrossfade;
-(void)_handleSecondHalfLongPressTimer:(id)arg1 ;
-(void)_delegateTouchEnded:(char)arg1 ;
-(double)grabDurationForEvent:(id)arg1 ;
-(void)_handleFirstHalfLongPressTimer:(id)arg1 ;
-(char)_delegateTapAllowed;
-(char)allowsTapWhileEditing;
-(void)_applyEditingStateAnimated:(char)arg1 ;
-(char)_isShowingCloseBox;
-(void)_closeBoxTapped;
-(void)setShouldRasterizeImageView:(char)arg1 ;
-(void)swapInIcon:(id)arg1 ;
-(CGRect)_frameForVisibleImage;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(char)shouldShowLabelAccessoryView;
-(void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned)arg1 ;
-(void)_recursivelyUpdateBackdropMaskFrames;
-(void)prepareToCrossfadeImageWithView:(id)arg1 crossfadeType:(unsigned)arg2 maskCorners:(char)arg3 trueCrossfade:(char)arg4 ;
-(void)setTouchDownInIcon:(char)arg1 ;
-(UIEdgeInsets)snapshotEdgeInsets;
-(int)currentLabelAccessoryType;
-(float)iconAccessoryAlpha;
-(float)iconLabelAlpha;
-(void)setIsEditing:(char)arg1 ;
-(void)setAllowJitter:(char)arg1 ;
-(void)_updateCloseBoxAnimated:(char)arg1 ;
-(char)canReceiveGrabbedIcon:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SBIconViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(id<SBIconViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)tintColor;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(void)_updateLabel;
-(char)isEditing;
-(void)prepareForReuse;
-(_UIFeedbackImpactBehavior *)feedbackBehavior;
-(char)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setIcon:(SBIcon *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)_labelImage;
-(void)setPaused:(char)arg1 ;
-(int)location;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLocation:(int)arg1 ;
-(SBIcon *)icon;
-(void)setObserver:(id<SBIconViewObserver>)arg1 ;
-(id<SBIconViewObserver>)observer;
-(id)_automationID;
-(void)setIconPosition:(CGPoint)arg1 ;
-(UIView*<SBIconLabelView>)labelView;
-(unsigned)contentType;
-(id)_iconImageView;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(CGRect)iconImageFrame;
@end

