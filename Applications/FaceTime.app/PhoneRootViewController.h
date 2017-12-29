/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIViewController.h>

@protocol PhoneBaseViewController;
@class PhoneContentView, PHRegistrationViewController, PHLocalVideoViewController, PHFrecentViewController, UIViewController, _UIBackdropView;

@interface PhoneRootViewController : UIViewController {

	PhoneContentView* _contentView;
	PHRegistrationViewController* _registrationController;
	PHLocalVideoViewController* _localVideoViewController;
	PHFrecentViewController* _faceTimeRecentViewController;
	char _faceTimeRegistrationViewIsShowing;
	UIViewController*<PhoneBaseViewController> _baseViewController;
	_UIBackdropView* _backdropView;
	UIViewController* _detailsViewController;

}

@property (retain) UIViewController * detailsViewController;                                                      //@synthesize detailsViewController=_detailsViewController - In the implementation block
@property (nonatomic,retain,readonly) PHLocalVideoViewController * localVideoViewController; 
@property (nonatomic,retain,readonly) PhoneContentView * contentView; 
@property (nonatomic,retain,readonly) _UIBackdropView * backdropView;                                             //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain,readonly) UIViewController*<PhoneBaseViewController> baseViewController;              //@synthesize baseViewController=_baseViewController - In the implementation block
@property (nonatomic,retain,readonly) PHFrecentViewController * faceTimeRecentViewController;                     //@synthesize faceTimeRecentViewController=_faceTimeRecentViewController - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Ph0 applicationBadge; 
+(char)_shouldForwardViewWillTransitionToSize;
-(UIViewController*<PhoneBaseViewController>)baseViewController;
-(PHLocalVideoViewController *)localVideoViewController;
-(void)animateInUI;
-(void)ensureBaseViewControllerIsShowing;
-(void)showFaceTimeFirstRunViewIfNeeded;
-(PHFrecentViewController *)faceTimeRecentViewController;
-(void)createFaceTimeFirstRunViewIfNeeded;
-(void)setupContentViewFullSize;
-(void)setupContentViewSidebar;
-(UIViewController *)detailsViewController;
-(void)_ensureProperPositionForContentView;
-(float)_contentViewWidthForApplicationBoundsSize:(CGSize)arg1 ;
-(void)setContentViewHiddenPosition;
-(void)setContentViewNormalPosition;
-(void)showContentViewAnimated:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)destroyFirstRunController;
-(void)_constrainRegistrationView;
-(void)_stausBarDidChangeFrame:(id)arg1 ;
-(void)hideDetailsViewController;
-(void)showDetailsViewController;
-(SCD_Struct_Ph0)applicationBadge;
-(void)hideContentViewAnimated:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)showVideoConferenceBackgroundViewAnimated:(char)arg1 ;
-(void)hideVideoConferenceBackgroundViewAnimated:(char)arg1 ;
-(void)setDetailsViewController:(UIViewController *)arg1 ;
-(PhoneContentView *)contentView;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_Ph4*)arg1 ;
-(id)_childViewControllerForWhitePointAdaptivityStyle;
-(_UIBackdropView *)backdropView;
-(char)isContentViewLoaded;
@end
