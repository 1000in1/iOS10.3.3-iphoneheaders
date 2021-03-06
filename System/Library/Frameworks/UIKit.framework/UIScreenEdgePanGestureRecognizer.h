/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>
#import <UIKit/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer, NSString;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	_UIScreenEdgePanRecognizer* _recognizer;

}

@property (assign,nonatomic) unsigned edges; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldDefaultToTouches;
+(char)_shouldSupportStylusTouches;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEdges:(unsigned)arg1 ;
-(void)_setHysteresis:(float)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(float)_edgeRegionSize;
-(char)isRequiringLongPress;
-(char)_shouldTryToBeginWithEvent:(id)arg1 ;
-(unsigned)edges;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(char)_shouldUseGrapeFlags;
-(CGPoint)_locationForTouch:(id)arg1 ;
-(int)_touchInterfaceOrientation;
-(void)_setEdgeRegionSize:(float)arg1 ;
@end

