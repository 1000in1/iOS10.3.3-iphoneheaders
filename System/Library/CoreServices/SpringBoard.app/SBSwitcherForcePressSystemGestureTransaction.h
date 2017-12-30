/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>
#import <SpringBoard/SBSceneLayoutWorkspaceTransactionDelegate.h>
#import <UIKit/UIInteractionProgressObserver.h>

@class SBAppSwitcherSettings, UIPreviewForceInteractionProgress, SBUIPresentSwitcherAnimationController, SBUIDismissSwitcherAnimationController, SBSceneLayoutWorkspaceTransaction, SBMainWorkspaceTransitionRequest, SBWorkspaceAlert, NSString;

@interface SBSwitcherForcePressSystemGestureTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, UIInteractionProgressObserver> {

	SBAppSwitcherSettings* _switcherSettings;
	UIPreviewForceInteractionProgress* _forceObserver;
	char _isPanning;
	char _didAnimateToInitialPosition;
	char _didFinishAnimatingToInitialPosition;
	char _didPop;
	char _didBump;
	char _didCommitToSwitcher;
	char _didCommitToNextDisplayItem;
	char _didPerformPresentLayoutCompletion;
	float _minNormalizedTranslation;
	UIEdgeInsets _currentTransitionParameters;
	CGPoint _currentVelocity;
	SBUIPresentSwitcherAnimationController* _presentAnimationController;
	SBUIDismissSwitcherAnimationController* _dismissAnimationController;
	SBSceneLayoutWorkspaceTransaction* _sceneLayoutTransaction;
	/*^block*/id _presentLayoutCompletion;
	/*^block*/id _dismissLayoutCompletion;
	SBMainWorkspaceTransitionRequest* _dismissTransitionRequest;
	SBWorkspaceAlert* _alertToGoTo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(void)_finishWithCompletionType:(int)arg1 ;
-(void)_tearDownForceObserver;
-(void)_lockOrientation;
-(void)_releaseOrientationLock;
-(void)_updateInteractionProgressWithGesture:(id)arg1 ;
-(void)_endInteractionWithGesture:(id)arg1 ;
-(void)_cancelInteractionWithGesture:(id)arg1 ;
-(float)_initialSpringVelocityForVelocity:(CGPoint)arg1 withTranslation:(float)arg2 ;
-(void)_runPresentLayoutCompletionIfPossible;
-(char)_requiresAdditionalAnimation;
-(void)_noteDidCommitToActivatingSwitcher:(char)arg1 didCommitToNextDisplayItem:(char)arg2 ;
-(id)_transitionRequestForPresentationWithCommitment:(char)arg1 toNextDisplayItem:(char)arg2 ;
-(void)_beginDismissalWithCurrentTranslation:(float)arg1 ;
-(void)_crossFadeToEndInteraction;
-(float)_currentProgressForGesture:(id)arg1 rawNormalizedTranslation:(float*)arg2 normalizedTranslation:(float*)arg3 ;
-(float)_currentProgressForForceObserver:(id)arg1 withMaxProgress:(float)arg2 ;
-(void)_noteInteractionProgressWithGesture:(id)arg1 orForceObserver:(id)arg2 ;
-(void)_updateInteractionParameters:(UIEdgeInsets)arg1 ;
-(void)_endInteractionWithParameters:(UIEdgeInsets)arg1 velocity:(CGPoint)arg2 ;
-(void)_runDismissLayoutCompletionIfPossible;
-(void)dealloc;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)_beginAnimation;
-(void)_didComplete;
-(void)_begin;
-(void)_setupAnimation;
-(float)_translationWithVelocity:(CGPoint)arg1 acceleration:(float)arg2 ;
@end

