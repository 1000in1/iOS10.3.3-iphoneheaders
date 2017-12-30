/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UILayoutContainerViewDelegate.h>
#import <UIKit/UISplitViewControllerImpl.h>

@class NSArray, NSString, UISplitViewController, UIBarButtonItem, UIPopoverController, UIView, UIResponder, UISnapshotView, UIGestureRecognizer, UITapGestureRecognizer, UITraitCollection, UIViewController, UIFocusContainerGuide;

@interface UISplitViewControllerClassicImpl : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UISplitViewControllerImpl> {

	UISplitViewController* _svc;
	id _delegate;
	UIBarButtonItem* _barButtonItem;
	UIBarButtonItem* _displayModeButtonItem;
	NSString* _buttonTitle;
	UIPopoverController* _hiddenPopoverController;
	UIView* _rotationSnapshotView;
	UIResponder* _postTransitionResponder;
	UISnapshotView* _collapsingMasterSnapshotView;
	UISnapshotView* _collapsingDetailSnapshotView;
	float _masterColumnWidth;
	float _gutterWidth;
	int _rotatingFromOrientation;
	int _lastPresentedOrientation;
	CGRect _rotatingFromMasterViewFrame;
	CGRect _rotatingToMasterViewFrame;
	NSArray* _cornerImageViews;
	UIView* _underBarSeparatorView;
	char _presentsWithGesture;
	UIGestureRecognizer* _popoverPresentationGestureRecognizer;
	UITapGestureRecognizer* _menuGestureRecognizer;
	int _preferredDisplayMode;
	int _effectiveTargetDisplayMode;
	int _pendingDisplayModeChangeCount;
	int _rotatingMasterChange;
	char _useChangingBoundsLayout;
	int _transitioningMasterChange;
	UITraitCollection* _transitioningToTraitCollection;
	int _transitioningToInternalMode;
	int _lastNotifiedDisplayMode;
	CGRect _viewBoundsBeforeCollapse;
	int _suspendedState;
	struct {
		unsigned invalidDelegateHiddenMasterAspectRatios : 2;
		unsigned delegateHiddenMasterAspectRatios : 2;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
		unsigned delegateWantsWillPresentCallback : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned delegateWantsShowViewController : 1;
		unsigned delegateWantsShowDetailViewController : 1;
		unsigned delegateWantsCollapseSecondaryViewController : 1;
		unsigned delegateWantsSeparateSecondaryViewController : 1;
		unsigned delegateWantsPrimaryViewControllerForCollapse : 1;
		unsigned delegateWantsPrimaryViewControllerForExpanding : 1;
		unsigned collapsedState : 2;
		unsigned primaryHidingState : 2;
		unsigned primaryHidingStateForCurrentOrientation : 2;
		unsigned delegateWantsWillChangeToDisplayMode : 1;
		unsigned delegateWantsTargetDisplayModeForAction : 1;
		unsigned delegateCanModifyFirstResponderOnTraitCollectionTransition : 1;
		unsigned pendingPresentMasterViewController : 1;
		unsigned pendingUpdateTargetDisplayMode : 1;
		unsigned collapsingClockwise : 1;
		unsigned firstResponderChangedFromPostTransitionResponder : 1;
		unsigned inWillTransitionToSize : 1;
		unsigned hasTransitioningToInternalMode : 1;
		unsigned delegateImplementsPrivateIsPrimaryVisible : 1;
		unsigned delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended : 1;
	}  _splitViewControllerFlags;
	NSString* _displayModeButtonItemTitle;
	float _preferredPrimaryColumnWidthFraction;
	float _minimumPrimaryColumnWidth;
	float _maximumPrimaryColumnWidth;
	unsigned _lastFocusedChildViewControllerIndex;
	UIViewController* __preservedDetailController;
	/*^block*/id __clearPreventRotationHook;
	UIFocusContainerGuide* _masterFocusContainerGuide;
	UIFocusContainerGuide* _detailFocusContainerGuide;

}

@property (nonatomic,readonly) char _presentsInFadingPopover; 
@property (setter=_setPreservedDetailController:,nonatomic,retain) UIViewController * _preservedDetailController;                     //@synthesize _preservedDetailController=__preservedDetailController - In the implementation block
@property (setter=_setClearPreventRotationHook:,nonatomic,copy) id _clearPreventRotationHook;                                         //@synthesize _clearPreventRotationHook=__clearPreventRotationHook - In the implementation block
@property (getter=_lastFocusedChildViewControllerIndex,nonatomic,readonly) unsigned lastFocusedChildViewControllerIndex;              //@synthesize lastFocusedChildViewControllerIndex=_lastFocusedChildViewControllerIndex - In the implementation block
@property (getter=_masterFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * masterFocusContainerGuide;                   //@synthesize masterFocusContainerGuide=_masterFocusContainerGuide - In the implementation block
@property (getter=_detailFocusContainerGuide,nonatomic,readonly) UIFocusContainerGuide * detailFocusContainerGuide;                   //@synthesize detailFocusContainerGuide=_detailFocusContainerGuide - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char presentsWithGesture;                                                                                //@synthesize presentsWithGesture=_presentsWithGesture - In the implementation block
@property (getter=isCollapsed,nonatomic,readonly) char collapsed; 
@property (assign,nonatomic) int preferredDisplayMode; 
@property (assign,nonatomic) float preferredPrimaryColumnWidthFraction;                                                               //@synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction - In the implementation block
@property (assign,nonatomic) float minimumPrimaryColumnWidth;                                                                         //@synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) float maximumPrimaryColumnWidth;                                                                         //@synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) float masterColumnWidth; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) char hidesMasterViewInPortrait; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle;                             //@synthesize displayModeButtonItemTitle=_displayModeButtonItemTitle - In the implementation block
+(float)_defaultGutterWidthInView:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)_commonInit;
-(id)preferredFocusedView;
-(id)preferredFocusEnvironments;
-(char)_disableAutomaticKeyboardBehavior;
-(char)shouldUpdateFocusInContext:(id)arg1 ;
-(void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(float)_contentMarginForChildViewController:(id)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(char*)arg2 ;
-(void)_updateChildContentMargins;
-(int)preferredInterfaceOrientationForPresentation;
-(char)_shouldPersistViewWhenCoding;
-(void)unloadViewForced:(char)arg1 ;
-(void)purgeMemoryForReason:(int)arg1 ;
-(id)masterViewController;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(char)arg4 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(char)_shouldSynthesizeSupportedOrientations;
-(char)_hasPreferredInterfaceOrientationForPresentation;
-(void)_getRotationContentSettings:(SCD_Struct_UI30*)arg1 ;
-(char)_handlesCounterRotationForPresentation;
-(void)_layoutContainerViewWillMoveToWindow:(id)arg1 ;
-(void)_layoutContainerViewDidMoveToWindow:(id)arg1 ;
-(char)_optsOutOfPopoverControllerHierarchyCheck;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(NSArray *)viewControllers;
-(void)__viewWillLayoutSubviews;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)detailViewController;
-(void)_setUpFocusContainerGuides;
-(id)_primaryContentResponder;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(void)_setCollapsedState:(int)arg1 ;
-(char)isCollapsed;
-(char)_isCollapsed;
-(id)initWithSplitViewController:(id)arg1 ;
-(void)_willBeginSnapshotSession;
-(void)_didEndSnapshotSession;
-(void)_initWithCoder:(id)arg1 ;
-(char)presentsWithGesture;
-(void)setPresentsWithGesture:(char)arg1 ;
-(int)preferredDisplayMode;
-(void)setPreferredDisplayMode:(int)arg1 ;
-(int)displayMode;
-(id)displayModeButtonItem;
-(float)preferredPrimaryColumnWidthFraction;
-(void)setPreferredPrimaryColumnWidthFraction:(float)arg1 ;
-(float)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(float)arg1 ;
-(float)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(float)arg1 ;
-(float)primaryColumnWidth;
-(float)masterColumnWidth;
-(void)setMasterColumnWidth:(float)arg1 ;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1 ;
-(char)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(char)arg1 ;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(id)_primaryDimmingView;
-(char)_isRotating;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(void)_popoverController:(id)arg1 willChangeToVisible:(char)arg2 ;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(char)arg2 ;
-(void)toggleMasterVisible:(id)arg1 ;
-(CGRect)_masterViewFrame;
-(CGRect)_detailViewFrame;
-(void)_removeCollapsingSnapshotViews;
-(void)_loadNewSubviews:(id)arg1 ;
-(void)_updateTargetDisplayMode;
-(int)_primaryHidingStateForCurrentOrientation;
-(int)_primaryHidingState;
-(int)_effectivePrimaryHidingState;
-(char)_hidesMasterViewInCurrentOrientation;
-(char)_presentsInFadingPopover;
-(char)_isMasterPopoverVisible;
-(char)_isHidesMasterInPortraitInvalid;
-(void)_setDelegateHidesMaster:(char)arg1 inAspectRatio:(int)arg2 ;
-(char)_isHidesMasterInLandscapeInvalid;
-(char)_effectivePresentsWithGesture;
-(char)_hasMasterViewController;
-(void)_setupHiddenPopoverControllerWithViewController:(id)arg1 ;
-(unsigned)_targetEdgeForPopover;
-(int)_effectiveTargetDisplayMode;
-(void)_invalidateHidesMasterViewForAspectRatio:(int)arg1 ;
-(void)_updateDelegateHiddenMasterAspectRatios;
-(void)_addOrRemovePopoverPresentationGestureRecognizer;
-(float)_primaryColumnWidthForSize:(CGSize)arg1 ;
-(char)_isMasterViewShown;
-(CGRect)_masterViewFrame:(CGRect)arg1 ;
-(CGRect)_detailViewFrame:(CGRect)arg1 ;
-(void)popoverWillAppear:(id)arg1 ;
-(char)_isBasicallyHorizontallyCompact;
-(float)_primaryColumnWidthForSize:(CGSize)arg1 isCompact:(char)arg2 ;
-(float)_defaultMaximumPrimaryColumnWidthForSize:(CGSize)arg1 ;
-(UIViewController *)_preservedDetailController;
-(void)_setMasterOverrideTraitCollectionActive:(char)arg1 ;
-(void)_updateDisplayModeButtonItem;
-(void)_prepareForCompactLayout;
-(id)_childContainingSender:(id)arg1 ;
-(void)_setPreservedDetailController:(id)arg1 ;
-(id)_primaryViewControllerForCollapsing;
-(id)_secondaryViewControllerForCollapsing;
-(void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2 ;
-(void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1 ;
-(void)_collapseMasterAndDetailWithTransitionCoordinator:(id)arg1 ;
-(id)_primaryViewControllerForExpanding;
-(id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1 ;
-(void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(char)_isTransitioningFromCollapsedToSeparated;
-(void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_didTransitionTraitCollection;
-(int)_medusaState;
-(char)_hidesMasterViewInOrientation:(int)arg1 medusaState:(int)arg2 ;
-(char)hidesMasterViewInLandscape;
-(void)_showMasterViewAnimated:(char)arg1 ;
-(void)_changeToDisplayMode:(int)arg1 forCurrentOrientationOnly:(char)arg2 ;
-(id)_defaultDisplayModes;
-(void)_displayModeWillChangeTo:(int)arg1 ;
-(void)_setPrimaryHidingStateForCurrentOrientation:(int)arg1 ;
-(void)_setPrimaryHidingState:(int)arg1 ;
-(void)_dismissMasterViewController:(char)arg1 ;
-(void)_presentMasterViewController:(char)arg1 ;
-(void)_displayModeDidChange;
-(void)_cacheEffectiveTargetDisplayMode;
-(int)_defaultTargetDisplayMode;
-(double)_masterPresentationAnimationDuration;
-(void)_triggerDisplayModeAction:(id)arg1 ;
-(void)_viewControllerHiding:(id)arg1 ;
-(id)_clearPreventRotationHook;
-(void)_setClearPreventRotationHook:(/*^block*/id)arg1 ;
-(char)_shouldPreventAutorotation;
-(char)_canDisplayHostedMaster;
-(unsigned)_lastFocusedChildViewControllerIndex;
-(int)_medusaStateForOrientation:(int)arg1 viewWidth:(float)arg2 ;
-(int)_internalModeForTraitCollection:(id)arg1 orientation:(int)arg2 viewSize:(CGSize)arg3 medusaState:(int)arg4 ;
-(void)snapshotForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 masterChange:(int)arg3 ;
-(void)_setupRoundedCorners;
-(int)_prepareToTransitionToViewSize:(CGSize)arg1 fromOrientation:(int)arg2 toOrientation:(int)arg3 duration:(double)arg4 ;
-(void)_animateTransitionToOrientation:(int)arg1 duration:(double)arg2 masterChange:(int)arg3 ;
-(void)_completeTransitionFromOrientation:(int)arg1 masterChange:(int)arg2 ;
-(void)snapshotMasterView;
-(void)snapshotAllViews;
-(void)_setupUnderBarSeparatorView;
-(void)_setDetailViewFrame:(CGRect)arg1 ;
-(void)_removeRoundedCorners;
-(void)_updateMasterViewControllerFrame;
-(id)_masterFocusContainerGuide;
-(id)_detailFocusContainerGuide;
@end

