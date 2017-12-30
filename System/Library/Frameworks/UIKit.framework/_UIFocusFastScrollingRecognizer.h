/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusFastScrollingRecognizerDelegate;
#import <UIKit/UIKit-Structs.h>
@class _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence, NSMapTable, NSTimer, UIScrollView;

@interface _UIFocusFastScrollingRecognizer : NSObject {

	_UIFocusEnginePanGestureRecognizer* _panGesture;
	_UIFocusFastScrollingTouchSequence* _currentTouch;
	NSMapTable* _swipeSequences;
	NSTimer* _swipeIntervalTimer;
	UIScrollView* _previewingScrollView;
	char _enabled;
	id<_UIFocusFastScrollingRecognizerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIFocusFastScrollingRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                            //@synthesize enabled=_enabled - In the implementation block
+(id)recognizerWithPanGesture:(id)arg1 ;
-(void)setDelegate:(id<_UIFocusFastScrollingRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(id<_UIFocusFastScrollingRecognizerDelegate>)delegate;
-(void)reset;
-(void)setEnabled:(char)arg1 ;
-(void)directionalPressWithHeading:(unsigned)arg1 didRepeat:(unsigned)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)focusDidUpdateWithContext:(id)arg1 ;
-(void)joystickMovementWithHeading:(unsigned)arg1 didRepeat:(unsigned)arg2 ;
-(id)initWithPanGesture:(id)arg1 ;
-(char)isEnabled;
-(void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(CGPoint)arg2 ;
-(void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(CGPoint)arg2 ;
-(void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(CGPoint)arg2 ;
-(void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(CGPoint)arg2 ;
-(void)_updateActiveSwipeSequencesForScrollViews:(id)arg1 ;
-(id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned)arg1 ;
-(void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(int)arg2 heading:(unsigned)arg3 ;
-(void)_stopSwipeIntervalTimer;
-(char)_attemptToImmediatelyRecognizeEdgeGesture;
-(void)_touchSequenceDidEnd:(id)arg1 ;
-(unsigned)_bestHeadingForAccumulator:(CGVector)arg1 ;
-(void)_swipeOccuredAlongHeading:(unsigned)arg1 ;
-(char)_swipeSequenceCanBeginFastScrolling:(id)arg1 ;
-(char)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(unsigned)arg2 ;
-(void)_startSwipeIntervalTimer;
-(void)_swipeIntervalElapsed:(id)arg1 ;
-(id)_scrollViewsContainingCurrentlyFocusedItem;
@end

