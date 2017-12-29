/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerContextTransitioningEx.h>

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
@class NSArray, UIView, _UIViewControllerTransitionCoordinator, NSString;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {

	float _previousPercentComplete;
	NSArray* _disabledViews;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
		unsigned transitionIsInterruptible : 1;
	}  _transitionContextFlags;
	id<UIViewControllerAnimatedTransitioning> __animator;
	UIView* _containerView;
	char __allowUserInteraction;
	char _rotating;
	char _animated;
	char _initiallyInteractive;
	char _currentlyInteractive;
	char __isPresentation;
	NSArray* __containerViews;
	float __percentOffset;
	id<UIViewControllerInteractiveTransitioning> __interactor;
	/*^block*/id __willCompleteHandler;
	/*^block*/id __completionHandler;
	/*^block*/id __didCompleteHandler;
	float __completionVelocity;
	int __completionCurve;
	_UIViewControllerTransitionCoordinator* __auxContext;
	int __state;
	/*^block*/id __interactiveUpdateHandler;
	/*^block*/id __postInteractiveCompletionHandler;
	int _presentationStyle;
	double __duration;

}

@property (assign,setter=_setInitiallyInteractive:,getter=_initiallyInteractive,nonatomic) char initiallyInteractive;               //@synthesize initiallyInteractive=_initiallyInteractive - In the implementation block
@property (assign,setter=_setCurrentlyInteractive:,getter=isCurrentlyInteractive,nonatomic) char currentlyInteractive;              //@synthesize currentlyInteractive=_currentlyInteractive - In the implementation block
@property (assign,setter=_setInterruptible:,getter=isInterruptible,nonatomic) char interruptible; 
@property (assign,setter=_setCompletionVelocity:,nonatomic) float _completionVelocity;                                              //@synthesize _completionVelocity=__completionVelocity - In the implementation block
@property (assign,setter=_setCompletionCurve:,nonatomic) int _completionCurve;                                                      //@synthesize _completionCurve=__completionCurve - In the implementation block
@property (assign,setter=_setTransitionIsCompleting:,nonatomic) char _transitionIsCompleting; 
@property (setter=_setAuxContext:,nonatomic,retain) _UIViewControllerTransitionCoordinator * _auxContext;                           //@synthesize _auxContext=__auxContext - In the implementation block
@property (assign,setter=_setState:,nonatomic) int _state;                                                                          //@synthesize _state=__state - In the implementation block
@property (setter=_setInteractiveUpdateHandler:,nonatomic,copy) id _interactiveUpdateHandler;                                       //@synthesize _interactiveUpdateHandler=__interactiveUpdateHandler - In the implementation block
@property (setter=_setPostInteractiveCompletionHandler:,nonatomic,copy) id _postInteractiveCompletionHandler;                       //@synthesize _postInteractiveCompletionHandler=__postInteractiveCompletionHandler - In the implementation block
@property (assign,setter=_setPresentationStyle:,nonatomic) int presentationStyle;                                                   //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,setter=_setIsPresentation:,nonatomic) char _isPresentation;                                                       //@synthesize _isPresentation=__isPresentation - In the implementation block
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews;                                                  //@synthesize _containerViews=__containerViews - In the implementation block
@property (assign,setter=_setPercentOffset:,nonatomic) float _percentOffset;                                                        //@synthesize _percentOffset=__percentOffset - In the implementation block
@property (assign,setter=_setAnimator:,nonatomic,__weak) id<UIViewControllerAnimatedTransitioning> _animator; 
@property (assign,setter=_setInteractor:,nonatomic,__weak) id<UIViewControllerInteractiveTransitioning> _interactor;                //@synthesize _interactor=__interactor - In the implementation block
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) char _allowUserInteraction;              //@synthesize _allowUserInteraction=__allowUserInteraction - In the implementation block
@property (assign,setter=_setRotating:,getter=_isRotating,nonatomic) char rotating;                                                 //@synthesize rotating=_rotating - In the implementation block
@property (getter=_affineTransform,nonatomic,readonly) CGAffineTransform affineTransform; 
@property (getter=isAnimated,nonatomic,readonly) char animated;                                                                     //@synthesize animated=_animated - In the implementation block
@property (assign,setter=_setDuration:,nonatomic) double _duration;                                                                 //@synthesize _duration=__duration - In the implementation block
@property (setter=_setWillCompleteHandler:,nonatomic,copy) id _willCompleteHandler;                                                 //@synthesize _willCompleteHandler=__willCompleteHandler - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                                                     //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (setter=_setDidCompleteHandler:,nonatomic,copy) id _didCompleteHandler;                                                   //@synthesize _didCompleteHandler=__didCompleteHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * containerView; 
@property (getter=isInteractive,nonatomic,readonly) char interactive; 
@property (nonatomic,readonly) char transitionWasCancelled; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
+(id)_associatedTransitionContextForObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(char)isInteractive;
-(int)_completionCurve;
-(char)_allowUserInteraction;
-(char)transitionWasCancelled;
-(void)completeTransition:(char)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)_stopInteractiveTransition;
-(void)updateInteractiveTransition:(float)arg1 ;
-(void)_setCurrentlyInteractive:(char)arg1 ;
-(void)_setInitiallyInteractive:(char)arg1 ;
-(double)_duration;
-(id)_completionHandler;
-(int)presentationStyle;
-(id)_transitionCoordinator;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setDidCompleteHandler:(/*^block*/id)arg1 ;
-(void)_setIsAnimated:(char)arg1 ;
-(void)_setContainerView:(id)arg1 ;
-(void)_setCompletionCurve:(int)arg1 ;
-(void)_setAnimator:(id)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)_animator;
-(void)_setDuration:(double)arg1 ;
-(void)_setRotating:(char)arg1 ;
-(char)isInterruptible;
-(void)_enableInteractionForDisabledViews;
-(int)_state;
-(void)_setInteractor:(id)arg1 ;
-(void)_setPresentationStyle:(int)arg1 ;
-(id)_postInteractiveCompletionHandler;
-(void)_setPostInteractiveCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setTransitionIsInFlight:(char)arg1 ;
-(void)_setInteractiveUpdateHandler:(/*^block*/id)arg1 ;
-(void)_setTransitionIsCompleting:(char)arg1 ;
-(_UIViewControllerTransitionCoordinator *)_auxContext;
-(void)__runAlongsideAnimations;
-(void)_setInterruptible:(char)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)_interactor;
-(char)_isPresentation;
-(void)_setAllowUserInteraction:(char)arg1 ;
-(void)_disableInteractionForViews:(id)arg1 ;
-(float)_completionVelocity;
-(int)_alongsideAnimationsCount;
-(id)_willCompleteHandler;
-(void)_setWillCompleteHandler:(/*^block*/id)arg1 ;
-(char)isAnimated;
-(void)_setState:(int)arg1 ;
-(char)initiallyInteractive;
-(float)_previousPercentComplete;
-(void)_setIsPresentation:(char)arg1 ;
-(char)_isRotating;
-(CGAffineTransform)targetTransform;
-(void)_runAlongsideCompletions;
-(char)_transitionIsInFlight;
-(NSArray *)_containerViews;
-(CGAffineTransform)_affineTransform;
-(char)isCurrentlyInteractive;
-(char)_initiallyInteractive;
-(id)_interactiveUpdateHandler;
-(void)_interactivityDidChange:(char)arg1 ;
-(float)_percentOffset;
-(void)_setContainerViews:(id)arg1 ;
-(void)_setPercentOffset:(float)arg1 ;
-(void)pauseInteractiveTransition;
-(void)_setPreviousPercentComplete:(float)arg1 ;
-(void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(float)arg1 ;
-(void)setTransitionWasCancelled:(char)arg1 ;
-(char)_transitionIsCompleting;
-(id)_didCompleteHandler;
-(void)_setCompletionVelocity:(float)arg1 ;
-(void)_setAuxContext:(id)arg1 ;
@end
