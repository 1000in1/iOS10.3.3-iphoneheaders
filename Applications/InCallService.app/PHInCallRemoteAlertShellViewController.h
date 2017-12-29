/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class PHHIDEventMonitor, PHInCallRootViewController;

@interface PHInCallRemoteAlertShellViewController : SBUIRemoteAlertServiceViewController {

	PHHIDEventMonitor* _hidEventMonitor;
	PHInCallRootViewController* _inCallRootViewController;
	/*^block*/id _pipFinishedTransitionBlock;

}

@property (nonatomic,retain) PHHIDEventMonitor * hidEventMonitor;                                //@synthesize hidEventMonitor=_hidEventMonitor - In the implementation block
@property (nonatomic,retain) PHInCallRootViewController * inCallRootViewController;              //@synthesize inCallRootViewController=_inCallRootViewController - In the implementation block
@property (copy) id pipFinishedTransitionBlock;                                                  //@synthesize pipFinishedTransitionBlock=_pipFinishedTransitionBlock - In the implementation block
+(char)_isSecureForRemoteViewService;
-(PHInCallRootViewController *)inCallRootViewController;
-(void)setInCallRootViewController:(PHInCallRootViewController *)arg1 ;
-(void)pipDidCancelNotification:(id)arg1 ;
-(void)setPipFinishedTransitionBlock:(id)arg1 ;
-(void)_stealViewControllerFromPIP;
-(void)handleShouldLogChangedNotification:(id)arg1 ;
-(PHHIDEventMonitor *)hidEventMonitor;
-(void)setHidEventMonitor:(PHHIDEventMonitor *)arg1 ;
-(void)updateSuppressionIfNecessary;
-(void)noteActivatedForCustomReason:(id)arg1 ;
-(id)pipFinishedTransitionBlock;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(char)arg2 ;
-(id)_childViewController;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)_childViewControllerForWhitePointAdaptivityStyle;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(char)_shouldRemoveViewFromHierarchyOnDisappear;
-(void)prepareForActivationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleVolumeUpButtonPressed;
-(void)handleVolumeDownButtonPressed;
-(void)handleHeadsetButtonPressed:(char)arg1 ;
-(void)handleButtonActions:(id)arg1 ;
-(void)handleDoubleHeightStatusBarTap;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1 ;
-(void)_createRootViewController;
-(void)handleLockButtonPressed;
@end
