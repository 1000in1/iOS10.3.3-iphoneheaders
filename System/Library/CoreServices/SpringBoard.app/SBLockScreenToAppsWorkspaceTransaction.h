/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAlertToAppsWorkspaceTransaction.h>

@class SBFAuthenticationAssertion, SBLockScreenViewControllerBase;

@interface SBLockScreenToAppsWorkspaceTransaction : SBAlertToAppsWorkspaceTransaction {

	SBFAuthenticationAssertion* _siriAuthenticationAssertion;
	SBLockScreenViewControllerBase* _lockScreenViewController;
	char _hidKeyboardForTransition;
	char _updateStatusBarForLockTeardown;
	char _disabledAutorotationForUnlockToApp;

}
-(id)initWithTransitionRequest:(id)arg1 ;
-(unsigned)_serialOverlayPreDismissalOptions;
-(void)_beginTransition;
-(char)_hasPreAnimationTasks;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(char)_shouldAnimateTransition;
-(id)_animationToSpringBoard;
-(id)_animationToApplications;
-(void)_prepareApplicationsForActivationAnimated:(char)arg1 ;
-(char)_shouldUpdateUnderLockStateForForegroundScenes;
-(void)dealloc;
-(id)debugDescription;
-(void)_didComplete;
-(void)_begin;
@end

