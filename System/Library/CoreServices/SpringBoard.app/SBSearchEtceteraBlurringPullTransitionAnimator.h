/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSearchEtceteraBlurringTransitionAnimator.h>

@class UIView;

@interface SBSearchEtceteraBlurringPullTransitionAnimator : SBSearchEtceteraBlurringTransitionAnimator {

	unsigned _operation;
	UIView* _touchSwallowingView;

}
-(void)_prepareToAnimate;
-(char)shouldMoveIntoSearch;
-(void)_animateIntoSearch:(char)arg1 ;
-(void)_cleanupAfterAnimating:(char)arg1 ;
-(void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(char)shouldMoveIntoSearchOnCancel;
-(void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(float)arg2 completionCurve:(int)arg3 ;
-(void)updateTransition:(id)arg1 withPercentComplete:(float)arg2 ;
-(float)_percentVisibleForPercentComplete:(float)arg1 ;
@end

