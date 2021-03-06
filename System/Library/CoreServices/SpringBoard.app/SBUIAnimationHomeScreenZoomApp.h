/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomApp.h>
#import <SpringBoard/SBViewControllerReversibleAnimatedTransitioning.h>
#import <SpringBoard/SBTreeNodeViewControllerTransitionObserver.h>

@protocol SBViewControllerContextTransitioning, BSInvalidatable;
@class SBLeafIcon, SBAppView, SBIconImageView, SBWindowSelfHostWrapper, SBOrientationTransformWrapperView, NSString;

@interface SBUIAnimationHomeScreenZoomApp : SBUIAnimationZoomApp <SBViewControllerReversibleAnimatedTransitioning, SBTreeNodeViewControllerTransitionObserver> {

	id<SBViewControllerContextTransitioning> _transitionContext;
	SBLeafIcon* _transitioningIcon;
	SBAppView* _transitioningAppView;
	SBIconImageView* _hiddenTargetIconImageView;
	SBWindowSelfHostWrapper* _sceneLayoutWindowHostWrapper;
	SBOrientationTransformWrapperView* _wallpaperEffectViewWrapper;
	id<BSInvalidatable> _disableHomeScreenWindowHostingAssertion;
	/*^block*/id _homeScreenTransitionCompletion;
	char _homeScreenTransitionFinishedCancelled;
	char _finishedZooming;
	char _attemptingCrossfade;
	char _finishedCrossfadingToHostView;
	char _finishedActivating;
	char _activationFailed;

}

@property (nonatomic,retain) SBLeafIcon * transitioningIcon;              //@synthesize transitioningIcon=_transitioningIcon - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(id)transitionAnimationFactory:(id)arg1 ;
-(char)supportsRestarting;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)_transitionAnimator;
-(void)treeNodeViewController:(id)arg1 willPerformOperation:(int)arg2 fromViewController:(id)arg3 fromTreeNode:(id)arg4 toViewController:(id)arg5 toTreeNode:(id)arg6 withTransitionCoordinator:(id)arg7 ;
-(void)_applicationDependencyStateChanged;
-(void)_maybeStartCrossfade;
-(void)_maybeReportAnimationFinished;
-(char)transitionSupportsCancelling;
-(char)_pastPointOfNoReturn;
-(void)_configureFolderIconsForAnimation:(char)arg1 ;
-(SBLeafIcon *)transitioningIcon;
-(void)_configureAppView:(id)arg1 forZoomDirection:(unsigned)arg2 ;
-(char)_showsLiveContentASAP;
-(void)setTransitioningIcon:(SBLeafIcon *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
@end

