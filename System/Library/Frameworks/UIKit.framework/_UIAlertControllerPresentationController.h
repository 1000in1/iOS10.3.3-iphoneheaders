/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKit/UIForcePresentationController.h>

@protocol _UIForcePresentationControllerDelegate;
@class UIGestureRecognizer, UIView, _UIFeedbackStatesBehavior, _UIKeyboardLayoutAlignmentView, NSString;

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate, UIForcePresentationController> {

	UIView* _dimmingView;
	_UIKeyboardLayoutAlignmentView* keyboardLayoutAlignmentView;
	UIView* keyboardLayoutAlignmentAvailableSpaceView;
	char constraintsPrepared;
	char _sourceViewSnapshotAndScaleTransformSuppressed;
	char _chromeHidden;
	char __isCurrentContext;
	char __shouldRespectNearestCurrentContextPresenter;
	UIGestureRecognizer* _panningGestureRecognizer;
	/*^block*/id _presentationPhaseCompletionBlock;
	id<_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
	UIView* _revealContainerView;
	_UIFeedbackStatesBehavior* _feedbackBehavior;

}

@property (readonly) UIView * _dimmingView;                                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (setter=_setIsCurrentContext:) char _isCurrentContext;                                                                    //@synthesize _isCurrentContext=__isCurrentContext - In the implementation block
@property (setter=_setShouldRespectNearestCurrentContextPresenter:) char _shouldRespectNearestCurrentContextPresenter;              //@synthesize _shouldRespectNearestCurrentContextPresenter=__shouldRespectNearestCurrentContextPresenter - In the implementation block
@property (assign,setter=_setChromeHidden:,getter=_isChromeHidden,nonatomic) char _chromeHidden;                                    //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id presentationPhaseCompletionBlock;                                                                     //@synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer;                                                        //@synthesize panningGestureRecognizer=_panningGestureRecognizer - In the implementation block
@property (assign,nonatomic) char _sourceViewSnapshotAndScaleTransformSuppressed;                                                   //@synthesize sourceViewSnapshotAndScaleTransformSuppressed=_sourceViewSnapshotAndScaleTransformSuppressed - In the implementation block
@property (nonatomic,readonly) UIView * _revealContainerView;                                                                       //@synthesize revealContainerView=_revealContainerView - In the implementation block
@property (nonatomic,retain) _UIFeedbackStatesBehavior * feedbackBehavior;                                                          //@synthesize feedbackBehavior=_feedbackBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;                 //@synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(char)shouldRemovePresentersView;
-(char)_canDismissPresentation;
-(char)_canCommitPresentation;
-(id)presentationPhaseCompletionBlock;
-(void)setPresentationPhaseCompletionBlock:(id)arg1 ;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)setPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(char)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(char)arg1 ;
-(UIView *)_revealContainerView;
-(_UIFeedbackStatesBehavior *)feedbackBehavior;
-(void)setFeedbackBehavior:(_UIFeedbackStatesBehavior *)arg1 ;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setForcePresentationControllerDelegate:(id<_UIForcePresentationControllerDelegate>)arg1 ;
-(char)shouldPresentInFullscreen;
-(char)_shouldRespectDefinesPresentationContext;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)_willRunTransitionForCurrentStateDeferred:(char)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(char)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(char)_shouldOccludeDuringPresentation;
-(void)presentationTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(int)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2 ;
-(char)_preserveResponderAcrossWindows;
-(UIView *)_dimmingView;
-(id)_presentedAlertController;
-(void)_prepareDimmingViewIfNecessary;
-(void)_prepareConstraintsIfNecessary;
-(char)_isCurrentContext;
-(char)_shouldRespectNearestCurrentContextPresenter;
-(void)_presentedAlertControllerDidAdapt;
-(void)_setChromeHidden:(char)arg1 ;
-(char)_isChromeHidden;
-(void)_setIsCurrentContext:(char)arg1 ;
-(void)_setShouldRespectNearestCurrentContextPresenter:(char)arg1 ;
@end

