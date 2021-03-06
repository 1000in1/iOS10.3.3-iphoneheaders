/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class SBUIAnimationController, NSString;

@interface SBSwitcherActivateNoninteractivelyTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {

	SBUIAnimationController* _animationController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_lockOrientation;
-(void)_releaseOrientationLock;
-(void)_beginAnimation;
-(void)_begin;
-(void)_willComplete;
-(void)_setupAnimation;
@end

