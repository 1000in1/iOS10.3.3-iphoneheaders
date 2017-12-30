/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusScrollAnimator.h>

@class UIScreen, _UIFocusEngineScrollViewOffsets, NSMapTable, CADisplayLink, NSString;

@interface _UIFocusDisplayLinkScrollAnimator : NSObject <_UIFocusScrollAnimator> {

	UIScreen* _screen;
	_UIFocusEngineScrollViewOffsets* _singleScrollViewEntry;
	NSMapTable* _scrollViews;
	CADisplayLink* _displayLink;
	float _defaultConvergenceRate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float defaultConvergenceRate; 
@property (nonatomic,readonly) char requiresExtendingScrollViewVisibleBounds; 
-(void)dealloc;
-(id)initWithScreen:(id)arg1 ;
-(void)setDefaultConvergenceRate:(float)arg1 ;
-(char)isAnimatingScrollView:(id)arg1 ;
-(void)cancelScrollingForScrollView:(id)arg1 ;
-(CGPoint)targetContentOffsetForScrollView:(id)arg1 ;
-(char)requiresExtendingScrollViewVisibleBounds;
-(void)cancelPeekAdjustmentForScrollView:(id)arg1 performRollback:(char)arg2 ;
-(void)setPeekOffsetAdjustment:(CGPoint)arg1 forScrollView:(id)arg2 ;
-(CGPoint)velocityToScrollFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 ;
-(void)setTargetContentOffset:(CGPoint)arg1 forScrollView:(id)arg2 convergenceRate:(float)arg3 completion:(/*^block*/id)arg4 ;
-(CGPoint)currentVelocityForScrollView:(id)arg1 ;
-(id)_entryForScrollView:(id)arg1 createIfNeeded:(char)arg2 ;
-(void)_updateDisplayLinkConfiguration;
-(void)_heartbeat:(id)arg1 ;
-(char)_shouldPushAndPopRunLoopModes;
-(void)_processEntry:(id)arg1 timeDelta:(int)arg2 completed:(id)arg3 ;
-(CGPoint)_applyAccelerationLimitToAcceleration:(CGPoint)arg1 currentOffset:(CGPoint)arg2 targetOffset:(CGPoint)arg3 ;
-(float)defaultConvergenceRate;
@end

