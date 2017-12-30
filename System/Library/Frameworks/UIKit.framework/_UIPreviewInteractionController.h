/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPreviewInteractionDelegate.h>

@protocol _UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;
@class UIView, UIViewController, UIPreviewInteraction, _UIRevealGestureRecognizer2, _UIPreviewGestureRecognizer2, UIPanGestureRecognizer, _UIPreviewPresentationController2, _UIPreviewInteractionViewControllerTransition, _UIPreviewInteractionCommitTransition, UIGestureRecognizer, NSArray, NSString;

@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate> {

	char _performingPreviewTransition;
	char _performingCommitTransition;
	id<_UIPreviewInteractionControllerDelegate> _delegate;
	UIView* _sourceView;
	UIViewController* _presentingViewController;
	UIPreviewInteraction* _previewInteraction;
	_UIRevealGestureRecognizer2* _revealGestureRecognizer;
	_UIPreviewGestureRecognizer2* _previewGestureRecognizer;
	UIPanGestureRecognizer* _modalPanGestureRecognizer;
	UIViewController* _currentPreviewViewController;
	_UIPreviewPresentationController2* _currentPresentationController;
	_UIPreviewInteractionViewControllerTransition* _currentTransitionDelegate;
	_UIPreviewInteractionCommitTransition* _currentCommitTransition;
	id<UIViewControllerPreviewing_Internal> _currentPreviewingContext;
	id<_UIPreviewInteractionHighlighting> _currentHighlighter;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                                                                       //@synthesize location=_location - In the implementation block
@property (assign,nonatomic,__weak) UIView * sourceView;                                                             //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                     //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIPreviewInteraction * previewInteraction;                                              //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (nonatomic,retain) _UIRevealGestureRecognizer2 * revealGestureRecognizer;                                  //@synthesize revealGestureRecognizer=_revealGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIPreviewGestureRecognizer2 * previewGestureRecognizer;                                //@synthesize previewGestureRecognizer=_previewGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * modalPanGestureRecognizer;                                     //@synthesize modalPanGestureRecognizer=_modalPanGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIViewController * currentPreviewViewController;                                        //@synthesize currentPreviewViewController=_currentPreviewViewController - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationController2 * currentPresentationController;                      //@synthesize currentPresentationController=_currentPresentationController - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionViewControllerTransition * currentTransitionDelegate;              //@synthesize currentTransitionDelegate=_currentTransitionDelegate - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionCommitTransition * currentCommitTransition;                        //@synthesize currentCommitTransition=_currentCommitTransition - In the implementation block
@property (assign,nonatomic) char performingPreviewTransition;                                                       //@synthesize performingPreviewTransition=_performingPreviewTransition - In the implementation block
@property (assign,nonatomic) char performingCommitTransition;                                                        //@synthesize performingCommitTransition=_performingCommitTransition - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing_Internal> currentPreviewingContext;                //@synthesize currentPreviewingContext=_currentPreviewingContext - In the implementation block
@property (nonatomic,retain) id<_UIPreviewInteractionHighlighting> currentHighlighter;                               //@synthesize currentHighlighter=_currentHighlighter - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * beginPreviewGestureRecognizer; 
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (assign,nonatomic,__weak) id<_UIPreviewInteractionControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<_UIPreviewInteractionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<_UIPreviewInteractionControllerDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(NSArray *)gestureRecognizers;
-(id)initWithView:(id)arg1 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(char)previewInteractionShouldBegin:(id)arg1 ;
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(float)arg2 ended:(char)arg3 ;
-(void)previewInteraction:(id)arg1 didUpdateCommitTransition:(float)arg2 ended:(char)arg3 ;
-(void)previewInteractionDidCancel:(id)arg1 ;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(CGPoint)location;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(void)setRevealGestureRecognizer:(_UIRevealGestureRecognizer2 *)arg1 ;
-(void)_panningRecognizerDidFire:(id)arg1 ;
-(void)setPreviewGestureRecognizer:(_UIPreviewGestureRecognizer2 *)arg1 ;
-(_UIRevealGestureRecognizer2 *)revealGestureRecognizer;
-(_UIPreviewGestureRecognizer2 *)previewGestureRecognizer;
-(char)performingPreviewTransition;
-(UIViewController *)currentPreviewViewController;
-(void)setPerformingCommitTransition:(char)arg1 ;
-(void)_resetCustomPresentationHooks;
-(void)setCurrentCommitTransition:(_UIPreviewInteractionCommitTransition *)arg1 ;
-(void)_finalizeAfterPreviewViewControllerPresentation;
-(char)performingCommitTransition;
-(char)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1 ;
-(void)commitInteractivePreview;
-(void)_dismissPreviewViewControllerIfNeeded;
-(char)_previewingIsPossibleForView:(id)arg1 ;
-(void)setCurrentTransitionDelegate:(_UIPreviewInteractionViewControllerTransition *)arg1 ;
-(id<UIViewControllerPreviewing_Internal>)currentPreviewingContext;
-(void)setCurrentPreviewViewController:(UIViewController *)arg1 ;
-(void)setCurrentPresentationController:(_UIPreviewPresentationController2 *)arg1 ;
-(void)setCurrentHighlighter:(id<_UIPreviewInteractionHighlighting>)arg1 ;
-(id<_UIPreviewInteractionHighlighting>)currentHighlighter;
-(void)setCurrentPreviewingContext:(id<UIViewControllerPreviewing_Internal>)arg1 ;
-(void)setPerformingPreviewTransition:(char)arg1 ;
-(UIPanGestureRecognizer *)modalPanGestureRecognizer;
-(void)setModalPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(char)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1 ;
-(UIGestureRecognizer *)beginPreviewGestureRecognizer;
-(id)_preferredNavigationControllerForCommitTransition;
-(void)_finalizeInteractivePreview;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(_UIPreviewPresentationController2 *)currentPresentationController;
-(_UIPreviewInteractionViewControllerTransition *)currentTransitionDelegate;
-(_UIPreviewInteractionCommitTransition *)currentCommitTransition;
@end

