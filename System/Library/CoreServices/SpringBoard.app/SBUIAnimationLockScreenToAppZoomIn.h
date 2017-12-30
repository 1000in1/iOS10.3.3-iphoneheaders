/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlert, SBSceneLayoutAnimationWrapperView, SBWindowSelfHostWrapper, UIView, NSMutableArray, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController {

	SBAlert* _fromAlert;
	SBSceneLayoutAnimationWrapperView* _animationWrapperView;
	SBWindowSelfHostWrapper* _pipWindowWrapper;
	UIView* _viewToAnimate;
	NSMutableArray* _appsRequiringHostView;
	char _finishedZooming;
	char _finishedActivating;
	char _finishedCrossfadingToHostView;
	char _finishedNotificationAnimations;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(char)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(char)_shouldDismissBanner;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)_finishedZooming;
-(id)_lockScreenViewController;
-(void)_applicationDependencyStateChanged;
-(float)initialAppViewScale;
-(void)_doAnimation:(/*^block*/id)arg1 ;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(void)_willSetupStartDependencies;
-(char)isReasonableMomentToInterrupt;
-(void)_noteNotificationAnimationsDidFinish;
-(void)dealloc;
-(id)animationSettings;
-(void)_setHidden:(char)arg1 ;
-(void)_startAnimation;
@end

