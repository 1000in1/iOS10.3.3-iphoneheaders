/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BookCore-Structs.h>
#import <UIKit/UIViewControllerContextTransitioning.h>

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
@class UIView, NSArray, NSMapTable, NSString;

@interface IMViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioning> {

	float _previousPercentComplete;
	NSArray* _disabledViews;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
	}  _transitionContextFlags;
	char _animated;
	char _isCurrentlyInteractive;
	char _initiallyInteractive;
	char _isAnimated;
	int __completionCurve;
	float __completionVelocity;
	int _presentationStyle;
	int __state;
	NSArray* __containerViews;
	float __percentOffset;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id<UIViewControllerInteractiveTransitioning> _interactor;
	UIView* _bk_containerView;
	/*^block*/id __interactiveUpdateHandler;
	/*^block*/id __postInteractiveCompletionHandler;
	/*^block*/id __willCompleteHandler;
	/*^block*/id __completionHandler;
	id __auxContext;
	NSMapTable* _trackedAnimations;
	double _duration;

}

@property (getter=isAnimated,nonatomic,readonly) char animated;                                                            //@synthesize animated=_animated - In the implementation block
@property (assign,setter=_setCompletionCurve:,nonatomic) int _completionCurve;                                             //@synthesize _completionCurve=__completionCurve - In the implementation block
@property (assign,setter=_setDuration:,nonatomic) double duration;                                                         //@synthesize duration=_duration - In the implementation block
@property (assign,setter=_setCompletionVelocity:,nonatomic) float _completionVelocity;                                     //@synthesize _completionVelocity=__completionVelocity - In the implementation block
@property (nonatomic,readonly) int presentationStyle;                                                                      //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,setter=_setState:,nonatomic) int _state;                                                                 //@synthesize _state=__state - In the implementation block
@property (assign,setter=_setIsCurrentlyInteractive:,nonatomic) char isCurrentlyInteractive;                               //@synthesize isCurrentlyInteractive=_isCurrentlyInteractive - In the implementation block
@property (assign,setter=_setInitiallyInteractive:,nonatomic) char initiallyInteractive;                                   //@synthesize initiallyInteractive=_initiallyInteractive - In the implementation block
@property (assign,setter=_setIsAnimated:,nonatomic) char isAnimated;                                                       //@synthesize isAnimated=_isAnimated - In the implementation block
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews;                                         //@synthesize _containerViews=__containerViews - In the implementation block
@property (assign,setter=_setPercentOffset:,nonatomic) float _percentOffset;                                               //@synthesize _percentOffset=__percentOffset - In the implementation block
@property (assign,setter=_setAnimator:,nonatomic) id<UIViewControllerAnimatedTransitioning> animator;                      //@synthesize animator=_animator - In the implementation block
@property (assign,setter=_setInteractor:,nonatomic) id<UIViewControllerInteractiveTransitioning> interactor;               //@synthesize interactor=_interactor - In the implementation block
@property (assign,nonatomic) UIView * bk_containerView;                                                                    //@synthesize bk_containerView=_bk_containerView - In the implementation block
@property (setter=_setInteractiveUpdateHandler:,nonatomic,copy) id _interactiveUpdateHandler;                              //@synthesize _interactiveUpdateHandler=__interactiveUpdateHandler - In the implementation block
@property (setter=_setPostInteractiveCompletionHandler:,nonatomic,copy) id _postInteractiveCompletionHandler;              //@synthesize _postInteractiveCompletionHandler=__postInteractiveCompletionHandler - In the implementation block
@property (setter=_setWillCompleteHandler:,nonatomic,copy) id _willCompleteHandler;                                        //@synthesize _willCompleteHandler=__willCompleteHandler - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                                            //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (setter=_setAuxContext:,nonatomic,retain) id _auxContext;                                                        //@synthesize _auxContext=__auxContext - In the implementation block
@property (nonatomic,retain) NSMapTable * trackedAnimations;                                                               //@synthesize trackedAnimations=_trackedAnimations - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * containerView; 
@property (getter=isInteractive,nonatomic,readonly) char interactive; 
@property (nonatomic,readonly) char transitionWasCancelled; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
+(id)_associatedTransitionContextForObject:(id)arg1 ;
-(void)setBk_containerView:(UIView *)arg1 ;
-(UIView *)bk_containerView;
-(void)_setIsCurrentlyInteractive:(char)arg1 ;
-(NSMapTable *)trackedAnimations;
-(void)trackAnimation:(id)arg1 withLayer:(id)arg2 ;
-(void)setTrackedAnimations:(NSMapTable *)arg1 ;
-(id)init;
-(void)dealloc;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(char)isInteractive;
-(int)_completionCurve;
-(char)transitionWasCancelled;
-(void)completeTransition:(char)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(float)arg1 ;
-(double)duration;
-(void)_setInitiallyInteractive:(char)arg1 ;
-(id)_completionHandler;
-(int)presentationStyle;
-(id)_transitionCoordinator;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setIsAnimated:(char)arg1 ;
-(void)_setCompletionCurve:(int)arg1 ;
-(void)_setAnimator:(id)arg1 ;
-(void)_setDuration:(double)arg1 ;
-(void)_enableInteractionForDisabledViews;
-(int)_state;
-(void)_setInteractor:(id)arg1 ;
-(id)_postInteractiveCompletionHandler;
-(void)_setPostInteractiveCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setTransitionIsInFlight:(char)arg1 ;
-(void)_setInteractiveUpdateHandler:(/*^block*/id)arg1 ;
-(void)_setTransitionIsCompleting:(char)arg1 ;
-(id)_auxContext;
-(void)__runAlongsideAnimations;
-(void)_disableInteractionForViews:(id)arg1 ;
-(float)_completionVelocity;
-(id)_willCompleteHandler;
-(void)_setWillCompleteHandler:(/*^block*/id)arg1 ;
-(char)isAnimated;
-(char)isAnimated;
-(void)_setState:(int)arg1 ;
-(char)initiallyInteractive;
-(float)_previousPercentComplete;
-(CGAffineTransform)targetTransform;
-(void)_runAlongsideCompletions;
-(char)_transitionIsInFlight;
-(NSArray *)_containerViews;
-(id<UIViewControllerAnimatedTransitioning>)animator;
-(char)isCurrentlyInteractive;
-(id)_interactiveUpdateHandler;
-(void)_interactivityDidChange:(char)arg1 ;
-(float)_percentOffset;
-(void)_setContainerViews:(id)arg1 ;
-(void)_setPercentOffset:(float)arg1 ;
-(void)pauseInteractiveTransition;
-(void)_setPreviousPercentComplete:(float)arg1 ;
-(void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(float)arg1 ;
-(char)_transitionIsCompleting;
-(void)_setCompletionVelocity:(float)arg1 ;
-(void)_setAuxContext:(id)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)interactor;
@end

