/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class _UIViewControllerTransitionContext, NSMutableArray, NSString, UIView;

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	_UIViewControllerTransitionContext* __mainContext;
	NSMutableArray* __alongsideAnimations;
	NSMutableArray* __alongsideAnimationViews;
	NSMutableArray* __alongsideCompletions;
	NSMutableArray* __interactiveChangeHandlers;

}

@property (assign,setter=_setMainContext:,nonatomic) _UIViewControllerTransitionContext * _mainContext;                      //@synthesize _mainContext=__mainContext - In the implementation block
@property (setter=_setAlongsideAnimations:,nonatomic,retain) NSMutableArray * _alongsideAnimations;                          //@synthesize _alongsideAnimations=__alongsideAnimations - In the implementation block
@property (setter=_setAlongsideAnimationViews:,nonatomic,retain) NSMutableArray * _alongsideAnimationViews;                  //@synthesize _alongsideAnimationViews=__alongsideAnimationViews - In the implementation block
@property (setter=_setAlongsideCompletions:,nonatomic,retain) NSMutableArray * _alongsideCompletions;                        //@synthesize _alongsideCompletions=__alongsideCompletions - In the implementation block
@property (setter=_setInteractiveChangeHandlers:,nonatomic,retain) NSMutableArray * _interactiveChangeHandlers;              //@synthesize _interactiveChangeHandlers=__interactiveChangeHandlers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnimated,nonatomic,readonly) char animated; 
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) char initiallyInteractive; 
@property (nonatomic,readonly) char isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) char interactive; 
@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) float percentComplete; 
@property (nonatomic,readonly) float completionVelocity; 
@property (nonatomic,readonly) int completionCurve; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(char)isInteractive;
-(float)percentComplete;
-(int)presentationStyle;
-(CGAffineTransform)affineTransform;
-(char)isRotating;
-(char)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setAlongsideAnimations:(id)arg1 ;
-(char)isInterruptible;
-(NSMutableArray *)_alongsideAnimations;
-(char)_animateAlongsideTransitionInView:(id)arg1 systemCompletion:(char)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(char)isCancelled;
-(char)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(_UIViewControllerTransitionContext *)_mainContext;
-(double)transitionDuration;
-(int)completionCurve;
-(NSMutableArray *)_alongsideAnimationViews;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(char)isAnimated;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(char)initiallyInteractive;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(CGAffineTransform)targetTransform;
-(id)_alongsideAnimations:(char)arg1 ;
-(id)_alongsideCompletions:(char)arg1 ;
-(float)completionVelocity;
-(NSMutableArray *)_alongsideCompletions;
-(id)initWithMainContext:(id)arg1 ;
-(void)_setAlongsideCompletions:(id)arg1 ;
-(void)_setInteractiveChangeHandlers:(id)arg1 ;
-(NSMutableArray *)_interactiveChangeHandlers;
-(void)_setAlongsideAnimationViews:(id)arg1 ;
-(id)_interactiveChangeHandlers:(char)arg1 ;
-(char)isCompleting;
-(void)_setMainContext:(id)arg1 ;
@end

