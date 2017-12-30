/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>
#import <SpringBoard/SBIconAnimatorDelegate.h>

@class UIView, SBIconAnimator, SBAlert, NSString;

@interface SBUIStarkZoomDownAppToHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate> {

	UIView* _viewToAnimate;
	SBIconAnimator* _iconAnimator;
	SBAlert* _alertImpersonator;
	char _animationFinished;
	char _fromAssistant;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)_viewToAnimate;
-(void)iconAnimatorWasInvalidated:(id)arg1 ;
-(void)_cleanupHosting;
-(void)_prepareZoom;
-(void)_noteZoomDidFinish;
-(void)_noteDependencyDidInvalidate;
-(void)_animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_setReferenceIconViewHiddenIfAppropriate:(char)arg1 ;
-(id)initWithDeactivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(void)dealloc;
-(id)animationSettings;
-(double)_animationDelay;
-(void)_startAnimation;
@end

