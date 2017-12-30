/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/UITapRecognizerDelegate.h>

@class NSArray, NSMutableSet, UIHeldAction, UIDelayedAction, UITapRecognizer, NSObservation, NSString;

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {

	NSArray* _touches;
	NSMutableSet* _activeTouches;
	unsigned _numberOfTouchesRequired;
	double _minimumPressDuration;
	float _allowableMovement;
	CGPoint _startPointScreen;
	CGPoint _lastCentroidScreen;
	UIHeldAction* _enoughTimeElapsed;
	UIDelayedAction* _tooMuchTimeElapsed;
	UITapRecognizer* _imp;
	NSObservation* _touchForceObservation;
	int _impulseObservations;
	float _currentImpulse;
	float _lastForce;
	double _lastForceTimestamp;
	unsigned _gotTouchEnd : 1;
	unsigned _gotTooMany : 1;
	unsigned _gotEnoughTaps : 1;
	unsigned _cancelPastAllowableMovement : 1;
	unsigned _allowsDynamicTouchesList : 1;
	char _requiresQuietImpulse;
	char _requiresQuietImpulseForCurrentTouchSequence;
	int _buttonType;

}

@property (assign,nonatomic) double delay;                                                                                                           //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (nonatomic,retain) NSArray * touches;                                                                                                      //@synthesize touches=_touches - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (assign,nonatomic) char cancelPastAllowableMovement; 
@property (assign,setter=_setButtonType:,nonatomic) int _buttonType;                                                                                 //@synthesize buttonType=_buttonType - In the implementation block
@property (assign,setter=_setRequiresQuietImpulse:,nonatomic) char _requiresQuietImpulse;                                                            //@synthesize requiresQuietImpulse=_requiresQuietImpulse - In the implementation block
@property (assign,setter=_setRequiresQuietImpulseForCurrentTouchSequence:,nonatomic) char _requiresQuietImpulseForCurrentTouchSequence;              //@synthesize requiresQuietImpulseForCurrentTouchSequence=_requiresQuietImpulseForCurrentTouchSequence - In the implementation block
@property (nonatomic,readonly) CGPoint _centroidScreen; 
@property (assign,nonatomic) unsigned numberOfTapsRequired; 
@property (assign,nonatomic) unsigned numberOfTouchesRequired;                                                                                       //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double minimumPressDuration; 
@property (assign,nonatomic) float allowableMovement;                                                                                                //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)locationInView:(id)arg1 ;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(int)_buttonType;
-(void)setView:(id)arg1 ;
-(void)setAllowableMovement:(float)arg1 ;
-(void)_setButtonType:(int)arg1 ;
-(char)_shouldReceivePress:(id)arg1 ;
-(float)_touchSloppinessFactor;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)numberOfTouches;
-(void)enoughTimeElapsed:(id)arg1 ;
-(NSArray *)touches;
-(CGPoint)_centroidInView:(id)arg1 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(CGPoint)startPoint;
-(unsigned)numberOfTouchesRequired;
-(unsigned)numberOfTapsRequired;
-(CGPoint)locationOfTouch:(unsigned)arg1 inView:(id)arg2 ;
-(void)setTouches:(NSArray *)arg1 ;
-(double)minimumPressDuration;
-(void)setNumberOfTapsRequired:(unsigned)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned)arg1 ;
-(void)_setRequiresQuietImpulse:(char)arg1 ;
-(CGPoint)centroid;
-(CGPoint)_translationInView:(id)arg1 ;
-(void)_setAllowableSeparation:(float)arg1 ;
-(void)_resetGestureRecognizer;
-(char)canPreventGestureRecognizer:(id)arg1 ;
-(void)clearTimer;
-(void)_setRequiresQuietImpulseForCurrentTouchSequence:(char)arg1 ;
-(float)_allowableSeparation;
-(void)_resetImpulseQuietness;
-(void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1 ;
-(char)_requiresQuietImpulse;
-(char)_requiresQuietImpulseForCurrentTouchSequence;
-(char)_impulseQuietEnough;
-(void)tooMuchElapsed:(id)arg1 ;
-(CGPoint)_centroidScreen;
-(char)_allowsDynamicTouchesList;
-(void)_changeTouchesListTo:(id)arg1 ;
-(char)activeTouchesExceedAllowableSeparation;
-(void)startTimer;
-(char)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1 ;
-(void)_interactionsEndedWithValidTouches:(char)arg1 ;
-(int)_finalStateForRecognition;
-(CGPoint)_startPointInView:(id)arg1 ;
-(char)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2 ;
-(void)_startTapFinishedTimer;
-(char)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(char)cancelPastAllowableMovement;
-(void)setCancelPastAllowableMovement:(char)arg1 ;
-(void)_setAllowsDynamicTouchesList:(char)arg1 ;
-(float)allowableMovement;
@end

