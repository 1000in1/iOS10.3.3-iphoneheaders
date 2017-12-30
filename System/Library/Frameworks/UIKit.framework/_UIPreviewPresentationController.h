/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPreviewPresentationController.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKit/_UIPreviewActionSheetViewDelegate.h>
#import <UIKit/_UIPlatterMenuDynamicsControllerDelegate.h>
#import <UIKit/UIForcePresentationController.h>

@protocol _UIForcePresentationControllerDelegate;
@class UIGestureRecognizer, _UIFeedbackStatesBehavior, UIView, UIScrollView, _UIPreviewActionSheetView, UIPreviewForceInteractionProgress, _UIPreviewPresentationContainerView, _UIPreviewPresentationEffectView, UIWindow, _UIPreviewPresentationAnimator, NSArray, UIPreviewAction, _UIPreviewQuickActionView, NSLayoutConstraint, UIImageView, UITapGestureRecognizer, _UIPlatterMenuDynamicsController, _UIVelocityIntegrator, UIInteractionProgress, NSString;

@interface _UIPreviewPresentationController : UIPreviewPresentationController <UIInteractionProgressObserver, _UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate, UIForcePresentationController> {

	char _sourceViewSnapshotAndScaleTransformSuppressed;
	char _didSendBeginEvent;
	char _leadingQuickActionViewSelected;
	char _trailingQuickActionViewSelected;
	char _isAnimatingActionSheet;
	char _hasAskedForDismissalInternally;
	char _hasAskedForCommitInternally;
	char _preDismissAnimationsInflight;
	char _panningGestureRecognizerInProgress;
	char _breathing;
	UIGestureRecognizer* _panningGestureRecognizer;
	/*^block*/id _presentationPhaseCompletionBlock;
	id<_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
	_UIFeedbackStatesBehavior* _feedbackBehavior;
	UIView* _actionSheetContainerView;
	UIScrollView* _containerScrollView;
	_UIPreviewActionSheetView* _previewActionSheet;
	UIPreviewForceInteractionProgress* _interactionProgressForCommit;
	UIPreviewForceInteractionProgress* _interactionProgressForBreathing;
	_UIPreviewPresentationContainerView* _presentationContainerView;
	_UIPreviewPresentationEffectView* _revealContainerView;
	UIWindow* _initialSourceViewSnapshotWindow;
	UIView* _initialSourceViewSnapshot;
	UIView* _updatedSourceViewSnapshot;
	_UIPreviewPresentationAnimator* _unhighlightPreviewCellSnapshotViewAnimator;
	NSArray* _previewActionItems;
	UIPreviewAction* _leadingPreviewAction;
	UIPreviewAction* _trailingPreviewAction;
	_UIPreviewQuickActionView* _leadingQuickActionView;
	_UIPreviewQuickActionView* _trailingQuickActionView;
	NSLayoutConstraint* _leadingQuickActionViewEdgeConstraint;
	NSLayoutConstraint* _trailingQuickActionViewEdgeConstraint;
	UIImageView* _actionSheetAvailableImageView;
	NSLayoutConstraint* _containerScrollViewXConstraint;
	UITapGestureRecognizer* _tapToDismissGestureRecognizer;
	UIGestureRecognizer* _modalPreviewActionsPanningGestureRecognizer;
	_UIPlatterMenuDynamicsController* _platterMenuController;
	_UIVelocityIntegrator* _revealPanningVelocityIntegrator;
	unsigned _currentPresentationPhase;
	UIInteractionProgress* _interactionProgressForPresentation;

}

@property (assign,nonatomic) char didSendBeginEvent;                                                                             //@synthesize didSendBeginEvent=_didSendBeginEvent - In the implementation block
@property (nonatomic,retain) UIView * actionSheetContainerView;                                                                  //@synthesize actionSheetContainerView=_actionSheetContainerView - In the implementation block
@property (nonatomic,retain) UIScrollView * containerScrollView;                                                                 //@synthesize containerScrollView=_containerScrollView - In the implementation block
@property (nonatomic,retain) _UIPreviewActionSheetView * previewActionSheet;                                                     //@synthesize previewActionSheet=_previewActionSheet - In the implementation block
@property (nonatomic,retain) UIPreviewForceInteractionProgress * interactionProgressForCommit;                                   //@synthesize interactionProgressForCommit=_interactionProgressForCommit - In the implementation block
@property (nonatomic,retain) UIPreviewForceInteractionProgress * interactionProgressForBreathing;                                //@synthesize interactionProgressForBreathing=_interactionProgressForBreathing - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationContainerView * presentationContainerView;                                    //@synthesize presentationContainerView=_presentationContainerView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * revealContainerView;                                             //@synthesize revealContainerView=_revealContainerView - In the implementation block
@property (nonatomic,retain) UIWindow * initialSourceViewSnapshotWindow;                                                         //@synthesize initialSourceViewSnapshotWindow=_initialSourceViewSnapshotWindow - In the implementation block
@property (nonatomic,retain) UIView * initialSourceViewSnapshot;                                                                 //@synthesize initialSourceViewSnapshot=_initialSourceViewSnapshot - In the implementation block
@property (nonatomic,retain) UIView * updatedSourceViewSnapshot;                                                                 //@synthesize updatedSourceViewSnapshot=_updatedSourceViewSnapshot - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationAnimator * unhighlightPreviewCellSnapshotViewAnimator;                        //@synthesize unhighlightPreviewCellSnapshotViewAnimator=_unhighlightPreviewCellSnapshotViewAnimator - In the implementation block
@property (nonatomic,copy) NSArray * previewActionItems;                                                                         //@synthesize previewActionItems=_previewActionItems - In the implementation block
@property (nonatomic,copy) UIPreviewAction * leadingPreviewAction;                                                               //@synthesize leadingPreviewAction=_leadingPreviewAction - In the implementation block
@property (nonatomic,copy) UIPreviewAction * trailingPreviewAction;                                                              //@synthesize trailingPreviewAction=_trailingPreviewAction - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * leadingQuickActionView;                                                 //@synthesize leadingQuickActionView=_leadingQuickActionView - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * trailingQuickActionView;                                                //@synthesize trailingQuickActionView=_trailingQuickActionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingQuickActionViewEdgeConstraint;                                          //@synthesize leadingQuickActionViewEdgeConstraint=_leadingQuickActionViewEdgeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingQuickActionViewEdgeConstraint;                                         //@synthesize trailingQuickActionViewEdgeConstraint=_trailingQuickActionViewEdgeConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * actionSheetAvailableImageView;                                                        //@synthesize actionSheetAvailableImageView=_actionSheetAvailableImageView - In the implementation block
@property (assign,nonatomic) char leadingQuickActionViewSelected;                                                                //@synthesize leadingQuickActionViewSelected=_leadingQuickActionViewSelected - In the implementation block
@property (assign,nonatomic) char trailingQuickActionViewSelected;                                                               //@synthesize trailingQuickActionViewSelected=_trailingQuickActionViewSelected - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerScrollViewXConstraint;                                                //@synthesize containerScrollViewXConstraint=_containerScrollViewXConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapToDismissGestureRecognizer;                                             //@synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * modalPreviewActionsPanningGestureRecognizer;                                  //@synthesize modalPreviewActionsPanningGestureRecognizer=_modalPreviewActionsPanningGestureRecognizer - In the implementation block
@property (assign,nonatomic) char isAnimatingActionSheet;                                                                        //@synthesize isAnimatingActionSheet=_isAnimatingActionSheet - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuDynamicsController * platterMenuController;                                           //@synthesize platterMenuController=_platterMenuController - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * revealPanningVelocityIntegrator;                                            //@synthesize revealPanningVelocityIntegrator=_revealPanningVelocityIntegrator - In the implementation block
@property (assign,nonatomic) char hasAskedForDismissalInternally;                                                                //@synthesize hasAskedForDismissalInternally=_hasAskedForDismissalInternally - In the implementation block
@property (assign,nonatomic) char hasAskedForCommitInternally;                                                                   //@synthesize hasAskedForCommitInternally=_hasAskedForCommitInternally - In the implementation block
@property (assign,nonatomic) char preDismissAnimationsInflight;                                                                  //@synthesize preDismissAnimationsInflight=_preDismissAnimationsInflight - In the implementation block
@property (assign,nonatomic) char panningGestureRecognizerInProgress;                                                            //@synthesize panningGestureRecognizerInProgress=_panningGestureRecognizerInProgress - In the implementation block
@property (getter=isBreathing,nonatomic,readonly) char breathing;                                                                //@synthesize breathing=_breathing - In the implementation block
@property (assign,nonatomic) unsigned currentPresentationPhase;                                                                  //@synthesize currentPresentationPhase=_currentPresentationPhase - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation;                                         //@synthesize interactionProgressForPresentation=_interactionProgressForPresentation - In the implementation block
@property (assign,nonatomic) float presentationViewCornerRadius; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id presentationPhaseCompletionBlock;                                                                  //@synthesize presentationPhaseCompletionBlock=_presentationPhaseCompletionBlock - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer;                                                     //@synthesize panningGestureRecognizer=_panningGestureRecognizer - In the implementation block
@property (assign,nonatomic) char _sourceViewSnapshotAndScaleTransformSuppressed;                                                //@synthesize sourceViewSnapshotAndScaleTransformSuppressed=_sourceViewSnapshotAndScaleTransformSuppressed - In the implementation block
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (nonatomic,retain) _UIFeedbackStatesBehavior * feedbackBehavior;                                                       //@synthesize feedbackBehavior=_feedbackBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;              //@synthesize forcePresentationControllerDelegate=_forcePresentationControllerDelegate - In the implementation block
+(id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(char)arg2 ;
+(char)_shouldApplyVisualEffectsToPresentingView;
-(void)dealloc;
-(char)previewActionSheetCanSelectItem:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(char)arg2 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(char)_canDismissPresentation;
-(char)_canCommitPresentation;
-(void)_willCommitPresentation;
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
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)_animatorForContainmentTransition;
-(char)_shouldSavePresentedViewControllerForStateRestoration;
-(NSArray *)previewActionItems;
-(UIPreviewAction *)leadingPreviewAction;
-(UIPreviewAction *)trailingPreviewAction;
-(id)platterView;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(void)_prepareInitialSourceViewSnapshot;
-(UIPreviewForceInteractionProgress *)interactionProgressForCommit;
-(void)setInteractionProgressForCommit:(UIPreviewForceInteractionProgress *)arg1 ;
-(void)setCurrentPresentationPhase:(unsigned)arg1 ;
-(void)setRevealPanningVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(_UIPreviewPresentationContainerView *)presentationContainerView;
-(CGRect)_preferredSourceViewRect;
-(void)_updateRevealContainerViewForSourceRect:(CGRect)arg1 ;
-(_UIPreviewPresentationEffectView *)revealContainerView;
-(void)setContainerScrollView:(UIScrollView *)arg1 ;
-(void)setPresentationContainerView:(_UIPreviewPresentationContainerView *)arg1 ;
-(void)setActionSheetContainerView:(UIView *)arg1 ;
-(void)setContainerScrollViewXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerScrollViewXConstraint;
-(void)_unhighlightPreviewCellSnapshotViewsIfNeeded;
-(void)_stopUnhighlightPreviewCellSnapshotViewAnimationIfNeeded;
-(void)_hideQuickActions;
-(void)_endBreathing;
-(void)_triggerQuickActionHandlerIfNeeded;
-(void)_layoutForDismissTransition;
-(char)hasAskedForCommitInternally;
-(void)_invokeCommitHandlerFromInteractionProgress;
-(UIPreviewForceInteractionProgress *)interactionProgressForBreathing;
-(void)_updateBreathingTransformWithProgress:(float)arg1 animated:(char)arg2 ;
-(void)_layoutForPreviewInteractionProgress:(float)arg1 ;
-(char)isBreathing;
-(_UIPlatterMenuDynamicsController *)platterMenuController;
-(UIImageView *)actionSheetAvailableImageView;
-(char)_hasPreviewActions;
-(_UIPreviewActionSheetView *)previewActionSheet;
-(id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1 ;
-(void)setPreviewActionSheet:(_UIPreviewActionSheetView *)arg1 ;
-(CGPoint)_dismissedActionSheetCenterForActionSheet:(id)arg1 ;
-(UIView *)initialSourceViewSnapshot;
-(void)_preparePresentationContainerViewForPreviewTransition;
-(void)_preparePresentationContainerViewForPreviewInteraction;
-(void)_configureActionSheetChromeViews;
-(void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
-(void)_setupInteractionProgressForBreathing;
-(void)_configureDynamicsController;
-(void)_configureInitialActionSheetViewIfNeeded;
-(_UIPreviewQuickActionView *)leadingQuickActionView;
-(_UIPreviewQuickActionView *)trailingQuickActionView;
-(unsigned)currentPresentationPhase;
-(_UIVelocityIntegrator *)revealPanningVelocityIntegrator;
-(char)hasAskedForDismissalInternally;
-(char)_platterIsInInitialPositionMostly;
-(char)preDismissAnimationsInflight;
-(char)leadingQuickActionViewSelected;
-(char)trailingQuickActionViewSelected;
-(void)setInitialSourceViewSnapshot:(UIView *)arg1 ;
-(void)setInitialSourceViewSnapshotWindow:(UIWindow *)arg1 ;
-(void)setRevealContainerView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)_layoutForRevealUnhighlightTransition:(float)arg1 ;
-(void)setUnhighlightPreviewCellSnapshotViewAnimator:(_UIPreviewPresentationAnimator *)arg1 ;
-(_UIPreviewPresentationAnimator *)unhighlightPreviewCellSnapshotViewAnimator;
-(CGPoint)centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1 ;
-(float)platterContainerCenterX;
-(float)platterContainerCenterY;
-(CGPoint)centerForMenuPresentedForActionSheet:(id)arg1 ;
-(CGPoint)centerForMenuDismissedForActionSheet:(id)arg1 ;
-(void)_dismissPresentation;
-(NSLayoutConstraint *)leadingQuickActionViewEdgeConstraint;
-(float)_leadingQuickActionOffsetForCenterPosition:(CGPoint)arg1 swipeView:(id)arg2 ;
-(NSLayoutConstraint *)trailingQuickActionViewEdgeConstraint;
-(float)_trailingQuickActionOffsetForCenterPosition:(CGPoint)arg1 swipeView:(id)arg2 ;
-(id)leadingSwipeActionView;
-(CGPoint)centerForPlatterWithMenuViewDismissed;
-(id)trailingSwipeActionView;
-(CGRect)platterContainerBounds;
-(float)minimumSpacingBetweenPlatterAndMenu;
-(CGRect)platterBounds;
-(char)_hasPreviewQuickActions;
-(void)setPlatterMenuController:(_UIPlatterMenuDynamicsController *)arg1 ;
-(char)panningGestureRecognizerInProgress;
-(void)setHasAskedForCommitInternally:(char)arg1 ;
-(void)_dismissPresentationWithCompletion:(/*^block*/id)arg1 ;
-(float)_quickActionSelectionOffset;
-(void)_dismissForHandledActionWithCompletion:(/*^block*/id)arg1 ;
-(void)setPreviewActionItems:(NSArray *)arg1 ;
-(void)_presentSubActionSheetForPreviewActionGroup:(id)arg1 ;
-(UIView *)actionSheetContainerView;
-(void)setPreDismissAnimationsInflight:(char)arg1 ;
-(void)setHasAskedForDismissalInternally:(char)arg1 ;
-(char)_platterIsSelectingPreviewActions;
-(char)_hasSelectedQuickAction;
-(void)_dismissForSelectionQuickActionAnimated;
-(void)_restorePlatterToInitialStatePositionAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(char)_platterIsInInitialPosition;
-(UIScrollView *)containerScrollView;
-(void)setLeadingQuickActionViewEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)initialCenterForLeadingSwipeActionView;
-(void)setLeadingQuickActionView:(_UIPreviewQuickActionView *)arg1 ;
-(void)setTrailingQuickActionViewEdgeConstraint:(NSLayoutConstraint *)arg1 ;
-(CGPoint)initialCenterForTrailingSwipeActionView;
-(void)setTrailingQuickActionView:(_UIPreviewQuickActionView *)arg1 ;
-(void)setActionSheetAvailableImageView:(UIImageView *)arg1 ;
-(CGPoint)centerForMenuDismissed;
-(void)_panningGestureRecognizerDidFire:(id)arg1 ;
-(void)setPanningGestureRecognizerInProgress:(char)arg1 ;
-(void)setDidSendBeginEvent:(char)arg1 ;
-(char)didSendBeginEvent;
-(void)updateSwipeActionsIfApplicable;
-(void)setupAdditionalModalGestureRecognizers;
-(float)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(int)arg1 ;
-(void)setLeadingQuickActionViewSelected:(char)arg1 ;
-(void)setTrailingQuickActionViewSelected:(char)arg1 ;
-(void)setInteractionProgressForBreathing:(UIPreviewForceInteractionProgress *)arg1 ;
-(void)_beginBreathing;
-(UIGestureRecognizer *)modalPreviewActionsPanningGestureRecognizer;
-(void)setModalPreviewActionsPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapToDismissGestureRecognizer;
-(void)_tapToDismissPreviewWithActionsDidFire:(id)arg1 ;
-(void)setTapToDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CGPoint)centerForPlatterWithMenuViewPresented;
-(CGPoint)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1 ;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3 ;
-(float)presentationViewCornerRadius;
-(void)setPresentationViewCornerRadius:(float)arg1 ;
-(void)_layoutForRevealTransition;
-(void)_revealTransitionDidComplete:(char)arg1 ;
-(void)_layoutForPreviewTransition;
-(void)_previewTransitionDidComplete:(char)arg1 ;
-(void)_dismissTransitionDidComplete:(char)arg1 ;
-(CGPoint)_presentedActionSheetCenterForActionSheet:(id)arg1 ;
-(void)_restorePlatterToInitialStatePositionAnimated;
-(UIWindow *)initialSourceViewSnapshotWindow;
-(UIView *)updatedSourceViewSnapshot;
-(void)setUpdatedSourceViewSnapshot:(UIView *)arg1 ;
-(void)setLeadingPreviewAction:(UIPreviewAction *)arg1 ;
-(void)setTrailingPreviewAction:(UIPreviewAction *)arg1 ;
-(char)isAnimatingActionSheet;
-(void)setIsAnimatingActionSheet:(char)arg1 ;
@end

