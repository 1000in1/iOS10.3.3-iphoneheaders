/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIEvent.h>

@class NSMutableSet, NSMapTable, _UITouchPredictionManager;

@interface UITouchesEvent : UIEvent {

	NSMutableSet* _touches;
	CFDictionaryRef _keyedTouches;
	CFDictionaryRef _keyedTouchesByWindow;
	CFDictionaryRef _gestureRecognizersByWindow;
	NSMapTable* _latentSystemGestureWindows;
	CFDictionaryRef _coalescedTouches;
	CFDictionaryRef _finalTouches;
	CFDictionaryRef _observedTouches;
	CFDictionaryRef _predictedTouches;
	_UITouchPredictionManager* _predictionManager;
	long _singleAllowableExternalTouchPathIndex;

}

@property (nonatomic,readonly) double _initialTouchTimestamp; 
@property (nonatomic,readonly) unsigned _windowServerHitTestContextId; 
@property (assign,nonatomic) long singleAllowableExternalTouchPathIndex;              //@synthesize singleAllowableExternalTouchPathIndex=_singleAllowableExternalTouchPathIndex - In the implementation block
-(id)touchesForView:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)_init;
-(int)type;
-(void)_clearViewForTouch:(id)arg1 ;
-(void)_removeTouch:(id)arg1 ;
-(id)allTouches;
-(id)_windows;
-(id)_cloneEvent;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(CGPoint)_digitizerLocation;
-(id)_viewsForWindow:(id)arg1 ;
-(id)_touchesForView:(id)arg1 withPhase:(int)arg2 ;
-(void)_invalidateGestureRecognizerForWindowCache;
-(id)_firstTouchForView:(id)arg1 ;
-(id)touchesForWindow:(id)arg1 ;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(id)_touchesForKey:(id)arg1 ;
-(id)_touchesForWindow:(id)arg1 ;
-(void)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 ;
-(void)_clearObservedTouchesForTouch:(id)arg1 ;
-(id)_rawCoalescedTouchesForTouch:(id)arg1 ;
-(void)_observeTouch:(id)arg1 ;
-(void)_removeTouchesForKey:(id)arg1 ;
-(void)_removeTouchesForWindow:(id)arg1 ;
-(CFDictionaryRef)_coalescedTouchesForHidEvent:(IOHIDEventRef)arg1 ;
-(id)_allTouches;
-(char)_anyInterestedGestureRecognizersForTouchInView:(id)arg1 ;
-(void)_addTouch:(id)arg1 forDelayedDelivery:(char)arg2 ;
-(void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(void)_clearTouches;
-(id)_touchesForGesture:(id)arg1 withPhase:(int)arg2 ;
-(void)_touchesForGesture:(id)arg1 withPhase:(int)arg2 intoSet:(id)arg3 ;
-(void)_moveTouchesFromView:(id)arg1 toView:(id)arg2 ;
-(double)_initialTouchTimestamp;
-(unsigned)_windowServerHitTestContextId;
-(void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2 ;
-(void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1 ;
-(id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1 ;
-(void)_addCoalescedTouch:(id)arg1 forIndex:(long)arg2 hidEvent:(IOHIDEventRef)arg3 ;
-(void)_moveCoalescedTouchesFromHidEvent:(IOHIDEventRef)arg1 toHidEvent:(IOHIDEventRef)arg2 ;
-(id)_lastPendingCoalescedTouchForIndex:(long)arg1 hidEvent:(IOHIDEventRef)arg2 ;
-(long)singleAllowableExternalTouchPathIndex;
-(void)setSingleAllowableExternalTouchPathIndex:(long)arg1 ;
@end

