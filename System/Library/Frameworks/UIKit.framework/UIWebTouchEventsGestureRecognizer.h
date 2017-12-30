/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@protocol UIWebTouchEventsGestureRecognizerDelegate;
@class NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {

	id _touchTarget;
	SEL _touchAction;
	id<UIWebTouchEventsGestureRecognizerDelegate> _webTouchDelegate;
	char _passedHitTest;
	char _defaultPrevented;
	char _dispatchingTouchEvents;
	char _isPotentialTap;
	float _originalGestureDistance;
	float _originalGestureAngle;
	UIWebTouchEvent* _lastTouchEvent;

}

@property (assign,getter=isDefaultPrevented,nonatomic) char defaultPrevented;                            //@synthesize defaultPrevented=_defaultPrevented - In the implementation block
@property (nonatomic,readonly) const UIWebTouchEvent* lastTouchEvent; 
@property (getter=isDispatchingTouchEvents,nonatomic,readonly) char dispatchingTouchEvents;              //@synthesize dispatchingTouchEvents=_dispatchingTouchEvents - In the implementation block
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) CGPoint locationInWindow; 
@property (nonatomic,readonly) NSMutableArray * touchLocations; 
@property (nonatomic,readonly) NSMutableArray * touchIdentifiers; 
@property (nonatomic,readonly) NSMutableArray * touchPhases; 
@property (nonatomic,readonly) char inJavaScriptGesture; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,readonly) float rotation; 
+(void)initialize;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(int)type;
-(void)reset;
-(float)scale;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(CGPoint)locationInWindow;
-(float)rotation;
-(void)_updateTapStateWithTouches:(id)arg1 ;
-(void)_updateTapStateWithTouches:(id)arg1 type:(int)arg2 ;
-(void)_recordTouches:(id)arg1 type:(int)arg2 ;
-(void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3 ;
-(const UIWebTouchEvent*)lastTouchEvent;
-(NSMutableArray *)touchLocations;
-(NSMutableArray *)touchIdentifiers;
-(NSMutableArray *)touchPhases;
-(char)inJavaScriptGesture;
-(char)isDefaultPrevented;
-(void)setDefaultPrevented:(char)arg1 ;
-(char)isDispatchingTouchEvents;
@end

