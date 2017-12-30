/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/com.apple.mobilenotes.SharingExtension-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIView;

@interface ICSEPresentationController : UIPresentationController {

	UIView* _dimmingView;

}

@property (nonatomic,retain) UIView * dimmingView;              //@synthesize dimmingView=_dimmingView - In the implementation block
+(CGRect)frameOfPresentedViewInContainerView:(id)arg1 withKeyboardFrame:(CGRect)arg2 topLayoutGuideLength:(float)arg3 ;
-(id)rootViewController;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
@end

