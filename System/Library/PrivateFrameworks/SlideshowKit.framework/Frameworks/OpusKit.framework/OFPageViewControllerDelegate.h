/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFPageViewControllerDelegate <NSObject>
@optional
-(char)pageViewController:(id)arg1 canAutomaticallyHandleGestureRecognizer:(id)arg2;
-(void)pageViewController:(id)arg1 willStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withDirection:(int)arg4;
-(void)pageViewController:(id)arg1 didStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3;
-(void)pageViewController:(id)arg1 willFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionWillComplete:(char)arg4;
-(void)pageViewController:(id)arg1 didFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionCompleted:(char)arg4;
-(void)pageViewController:(id)arg1 didUpdateTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withProgress:(float)arg4 andVelocity:(float)arg5;
-(void)pageViewController:(id)arg1 willStartBouncingWithDirection:(int)arg2;
-(void)pageViewControllerDidFinishBouncing:(id)arg1;

@end

