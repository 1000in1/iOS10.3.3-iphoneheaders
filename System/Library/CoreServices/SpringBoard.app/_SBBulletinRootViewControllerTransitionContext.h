/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, UIViewController;

@interface _SBBulletinRootViewControllerTransitionContext : NSObject {

	char _animated;
	char _presenting;
	UIView* _containerView;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	/*^block*/id _presentationCompletion;
	/*^block*/id _dismissalCompletion;

}

@property (nonatomic,retain) UIView * containerView;                                   //@synthesize containerView=_containerView - In the implementation block
@property (assign,getter=isAnimated,nonatomic) char animated;                          //@synthesize animated=_animated - In the implementation block
@property (assign,getter=isPresenting,nonatomic) char presenting;                      //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * presentedViewController;               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,copy) id presentationCompletion;                                  //@synthesize presentationCompletion=_presentationCompletion - In the implementation block
@property (nonatomic,copy) id dismissalCompletion;                                     //@synthesize dismissalCompletion=_dismissalCompletion - In the implementation block
-(id)presentationCompletion;
-(void)setPresentationCompletion:(id)arg1 ;
-(id)dismissalCompletion;
-(void)setDismissalCompletion:(id)arg1 ;
-(UIView *)containerView;
-(UIViewController *)presentingViewController;
-(UIViewController *)presentedViewController;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setPresenting:(char)arg1 ;
-(char)isAnimated;
-(void)setAnimated:(char)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(char)isPresenting;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
@end

