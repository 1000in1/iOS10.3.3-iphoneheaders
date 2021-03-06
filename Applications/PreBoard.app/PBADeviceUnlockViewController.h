/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/PreBoard.app/PreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <PreBoard/PBAPasscodeEntryViewControllerDelegate.h>
#import <PreBoard/PBADeviceBlockOverlayViewControllerDelegate.h>

@protocol SBFLockOutStatusProvider;
@class PBAStackViewController, PBASimpleLockScreenView, PBADeviceBlockOverlayViewController, SBFAuthenticationAssertion, SBFUserAuthenticationController, SBFAuthenticationAssertionManager, PBAAuthenticationPolicy, NSString;

@interface PBADeviceUnlockViewController : UIViewController <PBAPasscodeEntryViewControllerDelegate, PBADeviceBlockOverlayViewControllerDelegate> {

	PBAStackViewController* _stackViewController;
	PBASimpleLockScreenView* _newLockScreenView;
	PBADeviceBlockOverlayViewController* _blockOverlayController;
	char _attemptingUnlock;
	SBFAuthenticationAssertion* _transientAssertion;
	id<SBFLockOutStatusProvider> _deviceLockController;
	SBFUserAuthenticationController* _authenticationController;
	SBFAuthenticationAssertionManager* _assertionManager;
	PBAAuthenticationPolicy* _authenticationPolicy;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)passcodeEntryViewControllerEntryBegan:(id)arg1 ;
-(void)passcodeEntryViewControllerEntryCancelled:(id)arg1 ;
-(void)passcodeEntryViewControllerEntryCompleted:(id)arg1 passcode:(id)arg2 ;
-(void)passcodeEntryViewControllerCancelButtonPressed:(id)arg1 ;
-(id)initWithContainingStackViewController:(id)arg1 ;
-(void)deviceBlockOverlayViewControllerDidChangeBlockState:(id)arg1 ;
-(void)registerForUnlockNotification;
-(void)_handleBlockedDevice;
-(void)handlePasscodeLockStatusChangeNotification:(id)arg1 ;
-(void)deviceUnlocked:(/*^block*/id)arg1 ;
-(void)_handleUnblockedDevice;
-(void)_evaluateDeviceBlockState;
-(void)_successfulAuthHandler:(id)arg1 passcode:(id)arg2 ;
-(void)_resetStateAfterHandlingAuthenticationResult;
-(void)_failedAuthHandler:(id)arg1 error:(id)arg2 ;
-(void)_invalidAuthHandler:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)_homeButtonPressed:(id)arg1 ;
@end

