/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>

@protocol _UIActionSheetCompactPresentationControllerDelegate, UIActionSheetPresentationControllerDismissActionView, UIActionSheetPresentationControllerVisualStyle;
@class UIView, UILongPressGestureRecognizer, _UIDimmingKnockoutBackdropView, _UIAnimationCoordinator, NSString;

@interface _UIActionSheetCompactPresentationController : UIPresentationController {

	char _shouldAdoptPresentedAppearance;
	char _isSizeTransitionInProgress;
	id<_UIActionSheetCompactPresentationControllerDelegate> _actionSheetDelegate;
	UIView*<UIActionSheetPresentationControllerDismissActionView> _dismissActionView;
	UILongPressGestureRecognizer* _dismissActionViewGestureRecognizer;
	UIView* _dimmingView;
	_UIDimmingKnockoutBackdropView* _backdropView;
	_UIAnimationCoordinator* _animationCoordinator;
	id<UIActionSheetPresentationControllerVisualStyle> _visualStyle;

}

@property (assign,nonatomic) char shouldAdoptPresentedAppearance;                                                             //@synthesize shouldAdoptPresentedAppearance=_shouldAdoptPresentedAppearance - In the implementation block
@property (nonatomic,retain) UIView*<UIActionSheetPresentationControllerDismissActionView> dismissActionView;                 //@synthesize dismissActionView=_dismissActionView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * dismissActionViewGestureRecognizer;                               //@synthesize dismissActionViewGestureRecognizer=_dismissActionViewGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                                            //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) _UIDimmingKnockoutBackdropView * backdropView;                                                   //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) _UIAnimationCoordinator * animationCoordinator;                                                  //@synthesize animationCoordinator=_animationCoordinator - In the implementation block
@property (assign,nonatomic) char isSizeTransitionInProgress;                                                                 //@synthesize isSizeTransitionInProgress=_isSizeTransitionInProgress - In the implementation block
@property (nonatomic,retain) id<UIActionSheetPresentationControllerVisualStyle> visualStyle;                                  //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,copy) NSString * dismissActionTitle; 
@property (assign,nonatomic) char dismissActionUsesShorterHeightWhenCompactVertically; 
@property (assign,nonatomic,__weak) id<_UIActionSheetCompactPresentationControllerDelegate> actionSheetDelegate;              //@synthesize actionSheetDelegate=_actionSheetDelegate - In the implementation block
-(void)dealloc;
-(char)_shouldPresentedViewControllerControlStatusBarAppearance;
-(CGRect)frameOfPresentedViewInContainerView;
-(char)shouldRemovePresentersView;
-(char)shouldPresentInFullscreen;
-(void)_willRunTransitionForCurrentStateDeferred:(char)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(char)_shouldOccludeDuringPresentation;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)setVisualStyle:(id<UIActionSheetPresentationControllerVisualStyle>)arg1 ;
-(id<UIActionSheetPresentationControllerVisualStyle>)visualStyle;
-(UIView *)dimmingView;
-(void)_keyboardChanged:(id)arg1 ;
-(void)setDismissActionTitle:(NSString *)arg1 ;
-(void)setActionSheetDelegate:(id<_UIActionSheetCompactPresentationControllerDelegate>)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 visualStyle:(id)arg3 ;
-(NSString *)dismissActionTitle;
-(void)setDismissActionUsesShorterHeightWhenCompactVertically:(char)arg1 ;
-(id<_UIActionSheetCompactPresentationControllerDelegate>)actionSheetDelegate;
-(char)dismissActionUsesShorterHeightWhenCompactVertically;
-(void)_dismiss;
-(void)setBackdropView:(_UIDimmingKnockoutBackdropView *)arg1 ;
-(_UIDimmingKnockoutBackdropView *)backdropView;
-(void)_layoutViews;
-(UIView*<UIActionSheetPresentationControllerDismissActionView>)dismissActionView;
-(void)setDismissActionView:(UIView*<UIActionSheetPresentationControllerDismissActionView>)arg1 ;
-(void)_handleDismiss:(id)arg1 ;
-(void)setDismissActionViewGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setIsSizeTransitionInProgress:(char)arg1 ;
-(SCD_Struct_UI93)_currentLayoutGeometry;
-(void)_subscribeToKeyboardNotifications;
-(void)setShouldAdoptPresentedAppearance:(char)arg1 ;
-(void)_applyVisualAffordancesToViews;
-(void)_unsubscribeFromKeyboardNotifications;
-(char)isSizeTransitionInProgress;
-(_UIAnimationCoordinator *)animationCoordinator;
-(void)setAnimationCoordinator:(_UIAnimationCoordinator *)arg1 ;
-(double)_resizeAnimationDuration;
-(void)_updateForKeyboardStartFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duration:(double)arg3 curve:(int)arg4 ;
-(char)shouldAdoptPresentedAppearance;
-(CGSize)_minimumSizeForDismissButton;
-(UILongPressGestureRecognizer *)dismissActionViewGestureRecognizer;
@end
