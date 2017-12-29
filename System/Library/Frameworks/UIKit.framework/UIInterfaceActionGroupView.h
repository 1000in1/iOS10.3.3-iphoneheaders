/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKit/_UIInterfaceActionPresenting.h>
#import <UIKit/UIInterfaceActionGroupDisplayPropertyObserver.h>
#import <UIKit/UIInterfaceActionGroupDisplaying.h>

@protocol UIInterfaceActionVisualStyleProviding, UIInterfaceActionHandlerInvocationDelegate, UISeparatorDisplaying;
@class UIInterfaceActionVisualStyle, UIInterfaceActionSelectionTrackingController, UIInterfaceActionGroup, NSArray, _UIContentConstraintsLayoutGuide, UIView, NSMutableArray, _UIInterfaceActionRepresentationsSequenceView, NSLayoutConstraint, NSPointerArray, UILongPressGestureRecognizer, UIInterfaceActionRepresentationView, UIInterfaceActionSeparatorAttributes, UIFont, NSString;

@interface UIInterfaceActionGroupView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, _UIInterfaceActionPresenting, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying> {

	char _needsUpdateTopLevelViewsArrangement;
	char _needsUpdateActionSequenceViewArrangement;
	char _needsInitialViewLoading;
	char _isSettingVisualStyle;
	UIInterfaceActionVisualStyle* _activeTestingVisualStyle;
	char _showsSeparatorAboveActions;
	char _drawsBackground;
	id<UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
	UIInterfaceActionSelectionTrackingController* _actionSelectionController;
	UIInterfaceActionGroup* _actionGroup;
	id<UIInterfaceActionHandlerInvocationDelegate> _actionHandlerInvocationDelegate;
	int _presentationStyle;
	NSArray* _allowedActionLayoutAxisByPriority;
	int _actionLayoutAxis;
	UIInterfaceActionVisualStyle* _visualStyle;
	UIInterfaceActionVisualStyle* _appliedVisualStyle;
	_UIContentConstraintsLayoutGuide* _contentGuide;
	UIView* _backgroundView;
	UIView* _topLevelItemsView;
	NSArray* _topLevelViewArrangementConstraints;
	NSMutableArray* _arrangedScrollableHeaderViews;
	UIView*<UISeparatorDisplaying> _actionSequenceTopSeparatorView;
	_UIInterfaceActionRepresentationsSequenceView* _actionSequenceView;
	NSLayoutConstraint* _actionSequenceViewWidthAnchoredToConstantConstraint;
	NSLayoutConstraint* _actionSequenceViewWidthAnchoredToContentGuideConstraint;
	NSPointerArray* _weakSimultaneouslyPresentedGroupViews;
	UILongPressGestureRecognizer* _actionSelectionGestureRecognizer;
	float _requiredActionRepresentationWidth;
	UIInterfaceActionRepresentationView* _preferredActionRepresentation;
	UIInterfaceActionSeparatorAttributes* _visualStyleOverrideSeparatorAttributes;
	UIFont* _visualStyleOverrideTitleLabelFont;
	float _selectionHighlightContinuousCornerRadius;

}

@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                                                                                                                                                   //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * appliedVisualStyle;                                                                                                                                            //@synthesize appliedVisualStyle=_appliedVisualStyle - In the implementation block
@property (nonatomic,readonly) _UIContentConstraintsLayoutGuide * contentGuide;                                                                                                                                            //@synthesize contentGuide=_contentGuide - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                                                                                                                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * topLevelItemsView;                                                                                                                                                                 //@synthesize topLevelItemsView=_topLevelItemsView - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelViewArrangementConstraints;                                                                                                                                               //@synthesize topLevelViewArrangementConstraints=_topLevelViewArrangementConstraints - In the implementation block
@property (nonatomic,readonly) NSMutableArray * arrangedScrollableHeaderViews;                                                                                                                                             //@synthesize arrangedScrollableHeaderViews=_arrangedScrollableHeaderViews - In the implementation block
@property (nonatomic,readonly) UIView*<UISeparatorDisplaying> actionSequenceTopSeparatorView;                                                                                                                              //@synthesize actionSequenceTopSeparatorView=_actionSequenceTopSeparatorView - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionRepresentationsSequenceView * actionSequenceView;                                                                                                                         //@synthesize actionSequenceView=_actionSequenceView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * actionSequenceViewWidthAnchoredToConstantConstraint;                                                                                                                   //@synthesize actionSequenceViewWidthAnchoredToConstantConstraint=_actionSequenceViewWidthAnchoredToConstantConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * actionSequenceViewWidthAnchoredToContentGuideConstraint;                                                                                                               //@synthesize actionSequenceViewWidthAnchoredToContentGuideConstraint=_actionSequenceViewWidthAnchoredToContentGuideConstraint - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionSelectionTrackingController * actionSelectionController;                                                                                                                   //@synthesize actionSelectionController=_actionSelectionController - In the implementation block
@property (nonatomic,readonly) NSPointerArray * weakSimultaneouslyPresentedGroupViews;                                                                                                                                     //@synthesize weakSimultaneouslyPresentedGroupViews=_weakSimultaneouslyPresentedGroupViews - In the implementation block
@property (assign,nonatomic) char showsSeparatorAboveActions;                                                                                                                                                              //@synthesize showsSeparatorAboveActions=_showsSeparatorAboveActions - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * actionSelectionGestureRecognizer;                                                                                                                              //@synthesize actionSelectionGestureRecognizer=_actionSelectionGestureRecognizer - In the implementation block
@property (assign,nonatomic) float requiredActionRepresentationWidth;                                                                                                                                                      //@synthesize requiredActionRepresentationWidth=_requiredActionRepresentationWidth - In the implementation block
@property (nonatomic,retain) UIInterfaceActionRepresentationView * preferredActionRepresentation;                                                                                                                          //@synthesize preferredActionRepresentation=_preferredActionRepresentation - In the implementation block
@property (setter=_setVisualStyleOverrideSeparatorAttributes:,getter=_visualStyleOverrideSeparatorAttributes,nonatomic,retain) UIInterfaceActionSeparatorAttributes * visualStyleOverrideSeparatorAttributes;              //@synthesize visualStyleOverrideSeparatorAttributes=_visualStyleOverrideSeparatorAttributes - In the implementation block
@property (setter=_setVisualStyleOverrideTitleLabelFont:,getter=_visualStyleOverrideTitleLabelFont,nonatomic,retain) UIFont * visualStyleOverrideTitleLabelFont;                                                           //@synthesize visualStyleOverrideTitleLabelFont=_visualStyleOverrideTitleLabelFont - In the implementation block
@property (assign,setter=_setDrawsBackground:,getter=_drawsBackground,nonatomic) char drawsBackground;                                                                                                                     //@synthesize drawsBackground=_drawsBackground - In the implementation block
@property (assign,setter=_setSelectionHighlightContinuousCornerRadius:,getter=_selectionHighlightContinuousCornerRadius,nonatomic) float selectionHighlightContinuousCornerRadius;                                         //@synthesize selectionHighlightContinuousCornerRadius=_selectionHighlightContinuousCornerRadius - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionGroup * actionGroup;                                                                                                                                                       //@synthesize actionGroup=_actionGroup - In the implementation block
@property (assign,nonatomic,__weak) id<UIInterfaceActionHandlerInvocationDelegate> actionHandlerInvocationDelegate;                                                                                                        //@synthesize actionHandlerInvocationDelegate=_actionHandlerInvocationDelegate - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                                                                                                                                                        //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) NSArray * allowedActionLayoutAxisByPriority;                                                                                                                                                  //@synthesize allowedActionLayoutAxisByPriority=_allowedActionLayoutAxisByPriority - In the implementation block
@property (nonatomic,readonly) int actionLayoutAxis;                                                                                                                                                                       //@synthesize actionLayoutAxis=_actionLayoutAxis - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedHeaderViews; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider;                                                                                                                         //@synthesize visualStyleProvider=_visualStyleProvider - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(char)_drawsBackground;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setDrawsBackground:(char)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithActionGroup:(id)arg1 actionHandlerInvocationDelegate:(id)arg2 ;
-(void)setPresentationStyle:(int)arg1 ;
-(int)presentationStyle;
-(id)preferredFocusedView;
-(void)_setLayoutDebuggingIdentifier:(id)arg1 ;
-(void)updateConstraints;
-(UIView *)backgroundView;
-(void)_applyVisualStyle;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)configureForPresentAlongsideTransitionCoordinator:(id)arg1 ;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)configureForDismissAlongsideTransitionCoordinator:(id)arg1 ;
-(id)_alertController;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(int)arg2 ;
-(char)_shouldShowSeparatorAboveActionsSequenceView;
-(id)_interfaceActionOfFocusedRepresentationView;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadVisualStyle;
-(void)setVisualStyleProvider:(id<UIInterfaceActionVisualStyleProviding>)arg1 ;
-(UIInterfaceActionGroup *)actionGroup;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
-(id)_initWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(void)interfaceActionGroup:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)interfaceActionGroup:(id)arg1 reloadDisplayedContentActionGroupProperties:(id)arg2 ;
-(void)insertArrangedHeaderView:(id)arg1 atIndex:(unsigned)arg2 scrollable:(char)arg3 ;
-(id)_newActionGroupBackgroundView;
-(void)setAllowedActionLayoutAxisByPriority:(NSArray *)arg1 ;
-(void)setRequiredActionRepresentationWidth:(float)arg1 ;
-(void)setActionGroup:(UIInterfaceActionGroup *)arg1 ;
-(void)scrollToCenterForInterfaceAction:(id)arg1 ;
-(int)actionLayoutAxis;
-(void)setSimultaneouslyPresentedGroupViews:(id)arg1 ;
-(char)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1 ;
-(UIInterfaceActionRepresentationView *)preferredActionRepresentation;
-(void)setActionLayoutAxis:(int)arg1 ;
-(void)_setUsAsThePresentingViewControllerForAllActions;
-(void)_loadTopLevelItemsView;
-(void)_loadActionSequenceView;
-(void)_commonInitWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(void)_removeUsAsThePresentingViewControllerForAllActions;
-(void)_setNeedsUpdateTopLevelViewsArrangement;
-(void)_setNeedsUpdateActionSequenceViewArrangement;
-(void)_updateActionSequenceViewActionLayoutAxis;
-(void)_arrangeTopLevelViews;
-(NSArray *)arrangedHeaderViews;
-(void)_scrollActionRepresentationViewToVisibleForAction:(id)arg1 animated:(char)arg2 ;
-(void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(char)arg1 ;
-(void)_updateRequiredActionRepresentationSizeConstraints;
-(void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1 ;
-(void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1 ;
-(id)_currentlyFocusedActionView;
-(id)_actionRepresentationViewForAction:(id)arg1 ;
-(void)_applyVisualStyleToActionsViewScrollView;
-(id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)arg1 traitCollection:(id)arg2 ;
-(void)_setAndApplyVisualStyle:(id)arg1 ;
-(id)_loadVisualStyleForTraitCollection:(id)arg1 ;
-(void)_reloadStackViewContentsIfNeeded;
-(void)_determineActualLayoutAxis;
-(CGRect)_contentEdgeFrame;
-(void)_associateWeakSimultaneouslyPresentedGroupViews:(id)arg1 bidirectional:(char)arg2 ;
-(id)_allActionViews;
-(void)_loadViewsIfNeeded;
-(void)_reloadTopSeparatorView;
-(void)_arrangeActionViewsInActionSequenceView;
-(void)_updateRoundedCornerPositionForSubviews;
-(char)_actionLayoutAxisUnknownDisallowedIsVertical;
-(id)_constraintsToPinView:(id)arg1 layoutGuide:(id)arg2 identifier:(id)arg3 ;
-(void)_updateActionSequenceViewDebugLayoutIdentifier;
-(id)_viewContainingTopLevelItems;
-(id)_orderedTopLevelViews;
-(id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)arg1 ;
-(NSMutableArray *)arrangedScrollableHeaderViews;
-(id)_defaultOrderingForActionRepresentationViews:(id)arg1 ;
-(void)_actionSequenceViewContentSizeDidChange;
-(void)_updateActionSequenceScrollability;
-(NSArray *)allowedActionLayoutAxisByPriority;
-(id)_newSeparatorViewForSeparatingTitleAndButtons;
-(id)_interfaceActionGroupViewState;
-(id)_visualStyleOverrideSeparatorAttributes;
-(id)_visualStyleOverrideTitleLabelFont;
-(float)_selectionHighlightContinuousCornerRadius;
-(void)_applyVisualStyleToBackgroundViewDisplay;
-(void)_addBackgroudViewToViewHierarchy:(id)arg1 ;
-(void)_applyVisualStyleCornerRadius;
-(char)_isCornerRadiusDisplayEnabled;
-(int)_actionLayoutAxisUnknowDisallowed;
-(CGRect)_actionSequenceVisibleRectForMakingCenteredAction:(id)arg1 ;
-(void)removeArrangedHeaderView:(id)arg1 ;
-(void)setActiveTestingVisualStyle:(id)arg1 ;
-(UIInterfaceActionSelectionTrackingController *)actionSelectionController;
-(char)_hasLoadedStackViewContents;
-(id)_viewDisplayingRoundedBackground;
-(void)_setSelectionHighlightContinuousCornerRadius:(float)arg1 ;
-(void)_setVisualStyleOverrideSeparatorAttributes:(id)arg1 ;
-(void)_setVisualStyleOverrideTitleLabelFont:(id)arg1 ;
-(id<UIInterfaceActionHandlerInvocationDelegate>)actionHandlerInvocationDelegate;
-(void)setActionHandlerInvocationDelegate:(id<UIInterfaceActionHandlerInvocationDelegate>)arg1 ;
-(UIInterfaceActionVisualStyle *)appliedVisualStyle;
-(void)setAppliedVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(_UIContentConstraintsLayoutGuide *)contentGuide;
-(UIView *)topLevelItemsView;
-(NSArray *)topLevelViewArrangementConstraints;
-(UIView*<UISeparatorDisplaying>)actionSequenceTopSeparatorView;
-(_UIInterfaceActionRepresentationsSequenceView *)actionSequenceView;
-(NSLayoutConstraint *)actionSequenceViewWidthAnchoredToConstantConstraint;
-(NSLayoutConstraint *)actionSequenceViewWidthAnchoredToContentGuideConstraint;
-(NSPointerArray *)weakSimultaneouslyPresentedGroupViews;
-(char)showsSeparatorAboveActions;
-(void)setShowsSeparatorAboveActions:(char)arg1 ;
-(UILongPressGestureRecognizer *)actionSelectionGestureRecognizer;
-(void)setActionSelectionGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(float)requiredActionRepresentationWidth;
-(void)setPreferredActionRepresentation:(UIInterfaceActionRepresentationView *)arg1 ;
@end
