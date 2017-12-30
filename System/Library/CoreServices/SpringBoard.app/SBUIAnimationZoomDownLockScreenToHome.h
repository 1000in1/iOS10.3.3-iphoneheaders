/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomApp.h>

@class SBAlert, SBLockToAppStatusBarAnimator, SBIconAnimator, SBWindowSelfHostWrapper, UIView, SBWorkspaceTransitionRequest;

@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomApp {

	SBAlert* _dismissingAlert;
	SBLockToAppStatusBarAnimator* _statusBarAnimator;
	SBIconAnimator* _iconAnimator;
	SBWindowSelfHostWrapper* _alertWindowHostWrapper;
	UIView* _viewToAnimate;
	SBWorkspaceTransitionRequest* _transitionRequest;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(char)_shouldDismissBanner;
-(void)_prepareAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 zoomDirection:(unsigned)arg2 ;
-(id)animationSettings;
-(void)_startAnimation;
@end

