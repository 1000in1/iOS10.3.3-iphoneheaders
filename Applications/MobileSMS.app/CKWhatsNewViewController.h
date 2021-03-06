/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIScrollView, UIView, NSLayoutConstraint;

@interface CKWhatsNewViewController : UIViewController {

	char __didAdjustScrollPosition;
	UIScrollView* __scrollView;
	UIView* __topContentView;
	UIView* __bottomContentView;
	NSLayoutConstraint* __topConstraint;

}

@property (nonatomic,copy,readonly) UIScrollView * _scrollView;                                              //@synthesize _scrollView=__scrollView - In the implementation block
@property (nonatomic,copy,readonly) UIView * _topContentView;                                                //@synthesize _topContentView=__topContentView - In the implementation block
@property (nonatomic,copy,readonly) UIView * _bottomContentView;                                             //@synthesize _bottomContentView=__bottomContentView - In the implementation block
@property (nonatomic,copy,readonly) NSLayoutConstraint * _topConstraint;                                     //@synthesize _topConstraint=__topConstraint - In the implementation block
@property (assign,setter=_setDidAdjustScrollPosition:,nonatomic) char _didAdjustScrollPosition;              //@synthesize _didAdjustScrollPosition=__didAdjustScrollPosition - In the implementation block
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)_scrollView;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(UIView *)_topContentView;
-(void)_handleContinueButton:(id)arg1 ;
-(NSLayoutConstraint *)_topConstraint;
-(char)_didAdjustScrollPosition;
-(UIView *)_bottomContentView;
-(void)_setDidAdjustScrollPosition:(char)arg1 ;
@end

