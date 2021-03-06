/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SoftwareUpdateUIService.app/SoftwareUpdateUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <CoreAuthUI/SBUIPasscodeLockViewDelegate.h>
#import <SoftwareUpdateUIService/SUSUIRemoteEmergencyCallViewControllerDelegate.h>

@protocol SUSUISoftwareUpdateAuthenticationViewControllerDelegate;
@class UIViewController, SUSUIPasscodeEntryView, PSSoftwareUpdateTermsManager, SUAutoInstallOperation, SUDownload, NSString, SUManagerClient, SUSUIRemoteEmergencyCallViewController;

@interface SUSUISoftwareUpdateAuthenticationViewController : UIViewController <SBUIPasscodeLockViewDelegate, SUSUIRemoteEmergencyCallViewControllerDelegate> {

	id<SUSUISoftwareUpdateAuthenticationViewControllerDelegate> _delegate;
	UIViewController* _termsAndConditionsController;
	SUSUIPasscodeEntryView* _view;
	PSSoftwareUpdateTermsManager* _preferencesSUManager;
	SUAutoInstallOperation* _installOperation;
	SUDownload* _download;
	char _forInstallTonight;
	NSString* _passcode;
	char _attemptingUnlock;
	char _showingTermsAndConditions;
	char _responseSent;
	char _canDeferInstallation;
	SUManagerClient* _suManagerClient;
	SUSUIRemoteEmergencyCallViewController* _emergencyVC;

}

@property (assign,nonatomic,__weak) id<SUSUISoftwareUpdateAuthenticationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_termsAgree;
-(void)_dismissSelf:(char)arg1 ;
-(void)_sendDeactivationResponseFailureIfNecessary;
-(void)_setVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(char)arg2 ;
-(void)_authenticationCancelled;
-(void)_dismissTermsAndConditionsIfNecessaryAnimated:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(char)_shouldShowPasscodeView;
-(void)_presentTermsAndConditionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissAndSendCompletionResponse:(char)arg1 ;
-(void)_authenticationSuccess:(id)arg1 fromMesa:(char)arg2 ;
-(void)_authenticationFailure:(id)arg1 fromMesa:(char)arg2 ;
-(void)_attemptUnlock:(id)arg1 passcode:(id)arg2 ;
-(char)_createKeybagForPasscode:(id)arg1 forInstallTonight:(char)arg2 ;
-(void)dismissEmergencyCallViewController:(id)arg1 ;
-(void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2 ;
-(id)initWithDownload:(id)arg1 forInstallTonight:(char)arg2 withInstallOperation:(id)arg3 canDeferInstallation:(char)arg4 ;
-(void)setDelegate:(id<SUSUISoftwareUpdateAuthenticationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SUSUISoftwareUpdateAuthenticationViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(void)_termsDisagree;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
@end

