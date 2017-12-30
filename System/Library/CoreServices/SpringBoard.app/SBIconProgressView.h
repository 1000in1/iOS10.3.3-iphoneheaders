/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBIconProgressViewDelegate;
@class _SBIconProgressStateTransition, _SBIconProgressPausedTransition, _SBIconProgressFractionTransition, CADisplayLink, UIImage;

@interface SBIconProgressView : UIView {

	_SBIconProgressStateTransition* _activeStateTransition;
	_SBIconProgressPausedTransition* _activePausedTransition;
	_SBIconProgressFractionTransition* _activeFractionTransition;
	int _modelState;
	char _modelPaused;
	float _modelFraction;
	CADisplayLink* _displayLink;
	double _lastUpdate;
	UIImage* _maskImage;
	char _canAnimate;
	char _displayingPaused;
	id<SBIconProgressViewDelegate> _delegate;
	UIImage* _overlayImage;
	float _backgroundAlpha;
	float _foregroundAlpha;
	float _circleRadiusFraction;
	float _pauseRadiusFraction;
	int _displayedState;
	float _displayedFraction;

}

@property (assign,nonatomic) float backgroundAlpha;                                                     //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) float foregroundAlpha;                                                     //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) float circleRadiusFraction;                                                //@synthesize circleRadiusFraction=_circleRadiusFraction - In the implementation block
@property (assign,nonatomic) float pauseRadiusFraction;                                                 //@synthesize pauseRadiusFraction=_pauseRadiusFraction - In the implementation block
@property (nonatomic,readonly) CGRect circleBoundingRect; 
@property (assign,nonatomic) int displayedState;                                                        //@synthesize displayedState=_displayedState - In the implementation block
@property (assign,nonatomic) char displayingPaused;                                                     //@synthesize displayingPaused=_displayingPaused - In the implementation block
@property (assign,nonatomic) float displayedFraction;                                                   //@synthesize displayedFraction=_displayedFraction - In the implementation block
@property (nonatomic,retain) _SBIconProgressStateTransition * activeStateTransition;                    //@synthesize activeStateTransition=_activeStateTransition - In the implementation block
@property (nonatomic,retain) _SBIconProgressPausedTransition * activePausedTransition;                  //@synthesize activePausedTransition=_activePausedTransition - In the implementation block
@property (nonatomic,retain) _SBIconProgressFractionTransition * activeFractionTransition;              //@synthesize activeFractionTransition=_activeFractionTransition - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconProgressViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                                    //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) char canAnimate;                                                           //@synthesize canAnimate=_canAnimate - In the implementation block
+(id)_pieImagesMemoryPool;
+(id)_pieImageAtFraction:(float)arg1 ;
-(void)setActivePausedTransition:(_SBIconProgressPausedTransition *)arg1 ;
-(void)setActiveStateTransition:(_SBIconProgressStateTransition *)arg1 ;
-(void)setActiveFractionTransition:(_SBIconProgressFractionTransition *)arg1 ;
-(_SBIconProgressStateTransition *)activeStateTransition;
-(_SBIconProgressPausedTransition *)activePausedTransition;
-(_SBIconProgressFractionTransition *)activeFractionTransition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<SBIconProgressViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SBIconProgressViewDelegate>)delegate;
-(id)_maskImage;
-(float)foregroundAlpha;
-(void)setForegroundAlpha:(float)arg1 ;
-(void)setBackgroundAlpha:(float)arg1 ;
-(float)backgroundAlpha;
-(UIImage *)overlayImage;
-(void)_onDisplayLink:(id)arg1 ;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)_updateTransitionsAnimated:(char)arg1 ;
-(void)_clearDisplayLink;
-(void)_updatePausedTransitionAnimated:(char)arg1 ;
-(void)_updateStateTransitionAnimated:(char)arg1 ;
-(void)_updateFractionTransitionAnimated:(char)arg1 ;
-(char)_hasActiveTransitions;
-(void)_ensureDisplayLink;
-(void)_drawPieWithCenter:(CGPoint)arg1 ;
-(void)_drawOutgoingCircleWithCenter:(CGPoint)arg1 ;
-(void)_drawIncomingCircleWithCenter:(CGPoint)arg1 ;
-(void)_drawPauseUIWithCenter:(CGPoint)arg1 ;
-(void)setState:(int)arg1 paused:(char)arg2 fractionLoaded:(float)arg3 animated:(char)arg4 ;
-(void)setCanAnimate:(char)arg1 ;
-(CGRect)circleBoundingRect;
-(char)canAnimate;
-(float)circleRadiusFraction;
-(void)setCircleRadiusFraction:(float)arg1 ;
-(float)pauseRadiusFraction;
-(void)setPauseRadiusFraction:(float)arg1 ;
-(int)displayedState;
-(void)setDisplayedState:(int)arg1 ;
-(char)displayingPaused;
-(void)setDisplayingPaused:(char)arg1 ;
-(float)displayedFraction;
-(void)setDisplayedFraction:(float)arg1 ;
@end

