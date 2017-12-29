/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPreviewPresentationController.h>
#import <UIKit/_UIPreviewActionSheetViewDelegate.h>
#import <UIKit/_UIPlatterMenuDynamicsControllerDelegate.h>

@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;
@class _UIPreviewPresentationPlatterView, UIView, UIScrollView, _UIPreviewActionSheetView, _UIPreviewPresentationContainerView, NSArray, UIPreviewAction, _UIPreviewQuickActionView, NSLayoutConstraint, UIImageView, UITapGestureRecognizer, UIGestureRecognizer, _UIPlatterMenuDynamicsController, _UIVelocityIntegrator, NSString;

@interface _UIPreviewPresentationController2 : UIPreviewPresentationController <_UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate> {

	char _shouldLayoutForPreview;
	char _leadingQuickActionViewSelected;
	char _trailingQuickActionViewSelected;
	char _isAnimatingActionSheet;
	char _hasAskedForDismissalInternally;
	char _hasAskedForCommitInternally;
	char _preDismissAnimationsInflight;
	char _panningGestureRecognizerInProgress;
	char _didSendBeginEvent;
	_UIPreviewPresentationPlatterView* _revealPlatterView;
	_UIPreviewPresentationPlatterView* _contentPlatterView;
	UIView* _actionSheetContainerView;
	UIScrollView* _containerScrollView;
	_UIPreviewActionSheetView* _previewActionSheet;
	_UIPreviewPresentationContainerView* _presentationContainerView;
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
	UIGestureRecognizer* _panningGestureRecognizer;
	unsigned _currentPresentationPhase;
	id<UIViewControllerPreviewing_Internal> _currentPreviewingContext;
	id<_UIPreviewInteractionHighlighting> _currentHighlighter;

}

@property (nonatomic,retain) _UIPreviewPresentationPlatterView * revealPlatterView;                                //@synthesize revealPlatterView=_revealPlatterView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationPlatterView * contentPlatterView;                               //@synthesize contentPlatterView=_contentPlatterView - In the implementation block
@property (assign,nonatomic) char shouldLayoutForPreview;                                                          //@synthesize shouldLayoutForPreview=_shouldLayoutForPreview - In the implementation block
@property (nonatomic,retain) UIView * actionSheetContainerView;                                                    //@synthesize actionSheetContainerView=_actionSheetContainerView - In the implementation block
@property (nonatomic,retain) UIScrollView * containerScrollView;                                                   //@synthesize containerScrollView=_containerScrollView - In the implementation block
@property (nonatomic,retain) _UIPreviewActionSheetView * previewActionSheet;                                       //@synthesize previewActionSheet=_previewActionSheet - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationContainerView * presentationContainerView;                      //@synthesize presentationContainerView=_presentationContainerView - In the implementation block
@property (nonatomic,copy) NSArray * previewActionItems;                                                           //@synthesize previewActionItems=_previewActionItems - In the implementation block
@property (nonatomic,copy) UIPreviewAction * leadingPreviewAction;                                                 //@synthesize leadingPreviewAction=_leadingPreviewAction - In the implementation block
@property (nonatomic,copy) UIPreviewAction * trailingPreviewAction;                                                //@synthesize trailingPreviewAction=_trailingPreviewAction - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * leadingQuickActionView;                                   //@synthesize leadingQuickActionView=_leadingQuickActionView - In the implementation block
@property (nonatomic,retain) _UIPreviewQuickActionView * trailingQuickActionView;                                  //@synthesize trailingQuickActionView=_trailingQuickActionView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingQuickActionViewEdgeConstraint;                            //@synthesize leadingQuickActionViewEdgeConstraint=_leadingQuickActionViewEdgeConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingQuickActionViewEdgeConstraint;                           //@synthesize trailingQuickActionViewEdgeConstraint=_trailingQuickActionViewEdgeConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * actionSheetAvailableImageView;                                          //@synthesize actionSheetAvailableImageView=_actionSheetAvailableImageView - In the implementation block
@property (assign,nonatomic) char leadingQuickActionViewSelected;                                                  //@synthesize leadingQuickActionViewSelected=_leadingQuickActionViewSelected - In the implementation block
@property (assign,nonatomic) char trailingQuickActionViewSelected;                                                 //@synthesize trailingQuickActionViewSelected=_trailingQuickActionViewSelected - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerScrollViewXConstraint;                                  //@synthesize containerScrollViewXConstraint=_containerScrollViewXConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapToDismissGestureRecognizer;                               //@synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * modalPreviewActionsPanningGestureRecognizer;                    //@synthesize modalPreviewActionsPanningGestureRecognizer=_modalPreviewActionsPanningGestureRecognizer - In the implementation block
@property (assign,nonatomic) char isAnimatingActionSheet;                                                          //@synthesize isAnimatingActionSheet=_isAnimatingActionSheet - In the implementation block
@property (nonatomic,retain) _UIPlatterMenuDynamicsController * platterMenuController;                             //@synthesize platterMenuController=_platterMenuController - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * revealPanningVelocityIntegrator;                              //@synthesize revealPanningVelocityIntegrator=_revealPanningVelocityIntegrator - In the implementation block
@property (assign,nonatomic) char hasAskedForDismissalInternally;                                                  //@synthesize hasAskedForDismissalInternally=_hasAskedForDismissalInternally - In the implementation block
@property (assign,nonatomic) char hasAskedForCommitInternally;                                                     //@synthesize hasAskedForCommitInternally=_hasAskedForCommitInternally - In the implementation block
@property (assign,nonatomic) char preDismissAnimationsInflight;                                                    //@synthesize preDismissAnimationsInflight=_preDismissAnimationsInflight - In the implementation block
@property (assign,nonatomic) char panningGestureRecognizerInProgress;                                              //@synthesize panningGestureRecognizerInProgress=_panningGestureRecognizerInProgress - In the implementation block
@property (assign,nonatomic) char didSendBeginEvent;                                                               //@synthesize didSendBeginEvent=_didSendBeginEvent - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer;                                       //@synthesize panningGestureRecognizer=_panningGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned currentPresentationPhase;                                                    //@synthesize currentPresentationPhase=_currentPresentationPhase - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing_Internal> currentPreviewingContext;              //@synthesize currentPreviewingContext=_currentPreviewingContext - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionHighlighting> currentHighlighter;                             //@synthesize currentHighlighter=_currentHighlighter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)previewActionSheetCanSelectItem:(id)arg1 ;
-(void)containerViewDidLayoutSubviews;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(char)_canDismissPresentation;
-(char)_canCommitPresentation;
-(void)_willCommitPresentation;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)setPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)_animatorForContainmentTransition;
-(NSArray *)previewActionItems;
-(UIPreviewAction *)leadingPreviewAction;
-(UIPreviewAction *)trailingPreviewAction;
-(id)platterView;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1 ;
-(void)_layoutForInteractiveHighlight;
-(void)_interactiveHighlightTransitionDidEnd:(char)arg1 ;
-(void)_layoutForPreview;
-(void)_previewTransitionDidEnd:(char)arg1 ;
-(void)_layoutForCancel;
-(void)_cancelTransitionDidEnd:(char)arg1 ;
-(id<UIViewControllerPreviewing_Internal>)currentPreviewingContext;
-(void)setCurrentHighlighter:(id<_UIPreviewInteractionHighlighting>)arg1 ;
-(id<_UIPreviewInteractionHighlighting>)currentHighlighter;
-(void)setCurrentPreviewingContext:(id<UIViewControllerPreviewing_Internal>)arg1 ;
-(void)setCurrentPresentationPhase:(unsigned)arg1 ;
-(void)setRevealPanningVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(_UIPreviewPresentationContainerView *)presentationContainerView;
-(void)setContainerScrollView:(UIScrollView *)arg1 ;
-(void)setPresentationContainerView:(_UIPreviewPresentationContainerView *)arg1 ;
-(void)setActionSheetContainerView:(UIView *)arg1 ;
-(void)setContainerScrollViewXConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerScrollViewXConstraint;
-(void)_hideQuickActions;
-(void)_triggerQuickActionHandlerIfNeeded;
-(char)hasAskedForCommitInternally;
-(void)_invokeCommitHandlerFromInteractionProgress;
-(_UIPlatterMenuDynamicsController *)platterMenuController;
-(UIImageView *)actionSheetAvailableImageView;
-(char)_hasPreviewActions;
-(_UIPreviewActionSheetView *)previewActionSheet;
-(id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1 ;
-(void)setPreviewActionSheet:(_UIPreviewActionSheetView *)arg1 ;
-(CGPoint)_dismissedActionSheetCenterForActionSheet:(id)arg1 ;
-(void)_preparePresentationContainerViewForPreviewInteraction;
-(void)_configureActionSheetChromeViews;
-(void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
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
-(UIGestureRecognizer *)modalPreviewActionsPanningGestureRecognizer;
-(void)setModalPreviewActionsPanningGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapToDismissGestureRecognizer;
-(void)_tapToDismissPreviewWithActionsDidFire:(id)arg1 ;
-(void)setTapToDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CGPoint)centerForPlatterWithMenuViewPresented;
-(CGPoint)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1 ;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3 ;
-(CGPoint)_presentedActionSheetCenterForActionSheet:(id)arg1 ;
-(void)_restorePlatterToInitialStatePositionAnimated;
-(void)setLeadingPreviewAction:(UIPreviewAction *)arg1 ;
-(void)setTrailingPreviewAction:(UIPreviewAction *)arg1 ;
-(char)isAnimatingActionSheet;
-(void)setIsAnimatingActionSheet:(char)arg1 ;
-(void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg1 ;
-(void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg1 ;
-(void)setShouldLayoutForPreview:(char)arg1 ;
-(_UIPreviewPresentationPlatterView *)contentPlatterView;
-(_UIPreviewPresentationPlatterView *)revealPlatterView;
-(void)setRevealPlatterView:(_UIPreviewPresentationPlatterView *)arg1 ;
-(void)setContentPlatterView:(_UIPreviewPresentationPlatterView *)arg1 ;
-(void)_layoutContentViews;
-(char)shouldLayoutForPreview;
-(CGSize)_preferredContentPlatterSizeForViewController:(id)arg1 ;
-(CGSize)_standardContentPlatterSize;
@end
