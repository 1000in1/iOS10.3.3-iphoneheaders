/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Bridge/COSAppleIDAuthControllerDelegate.h>

@class NRDevice, ACAccountStore, NSString, UIScrollView, UILabel, UIButton, UITextField, UIBarButtonItem, UIActivityIndicatorView, COSAppleIDAuthController, NRServerRequestReporter;

@interface COSAppleIDLoginViewController : COSSetupPageViewController <UITextFieldDelegate, COSAppleIDAuthControllerDelegate> {

	char _hasUpdatedAppleAccountProperties;
	char _watchSupportsAuthKit;
	char _holdingForAppleAccountPropertyUpdateToComplete;
	char _recoveringCredentials;
	NRDevice* _device;
	ACAccountStore* _accountStore;
	NSString* _username;
	UIScrollView* _scroller;
	UILabel* _detailTitleLabel;
	UILabel* _detailLabel;
	UIButton* _skipButton;
	UILabel* _usernameLabel;
	UITextField* _passwordTextField;
	UIButton* _forgotPasswordButton;
	id _passwordTextFieldDidChangeObserver;
	UIBarButtonItem* _nextNavBarButtonItem;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _verifyingLabel;
	COSAppleIDAuthController* _authController;
	NRServerRequestReporter* _reporter;

}

@property (nonatomic,retain) NSString * username;                                              //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) UIScrollView * scroller;                                          //@synthesize scroller=_scroller - In the implementation block
@property (nonatomic,retain) UILabel * detailTitleLabel;                                       //@synthesize detailTitleLabel=_detailTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                            //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                                            //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                          //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UITextField * passwordTextField;                                  //@synthesize passwordTextField=_passwordTextField - In the implementation block
@property (nonatomic,retain) UIButton * forgotPasswordButton;                                  //@synthesize forgotPasswordButton=_forgotPasswordButton - In the implementation block
@property (nonatomic,retain) id passwordTextFieldDidChangeObserver;                            //@synthesize passwordTextFieldDidChangeObserver=_passwordTextFieldDidChangeObserver - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextNavBarButtonItem;                           //@synthesize nextNavBarButtonItem=_nextNavBarButtonItem - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                      //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * verifyingLabel;                                         //@synthesize verifyingLabel=_verifyingLabel - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) COSAppleIDAuthController * authController;                        //@synthesize authController=_authController - In the implementation block
@property (assign,nonatomic) char watchSupportsAuthKit;                                        //@synthesize watchSupportsAuthKit=_watchSupportsAuthKit - In the implementation block
@property (assign,nonatomic) char holdingForAppleAccountPropertyUpdateToComplete;              //@synthesize holdingForAppleAccountPropertyUpdateToComplete=_holdingForAppleAccountPropertyUpdateToComplete - In the implementation block
@property (assign,nonatomic) char recoveringCredentials;                                       //@synthesize recoveringCredentials=_recoveringCredentials - In the implementation block
@property (nonatomic,retain) NRServerRequestReporter * reporter;                               //@synthesize reporter=_reporter - In the implementation block
@property (nonatomic,readonly) NRDevice * device;                                              //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) char hasUpdatedAppleAccountProperties;                          //@synthesize hasUpdatedAppleAccountProperties=_hasUpdatedAppleAccountProperties - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showAlertForLoginFailureWithError:(id)arg1 presentingViewController:(id)arg2 ;
+(char)showAlertIfLackingConnectivityAndPresentAlertWithPresentingViewController:(id)arg1 ;
+(char)controllerNeedsToRun;
-(void)loggedInSuccessfully;
-(id)holdActivityIdentifier;
-(void)updateAppleAccountProperties;
-(char)registerActivationObserver;
-(void)setAwaitingActivationIfNotActivated;
-(char)hasUpdatedAppleAccountProperties;
-(char)allowSkipping;
-(id)performanceMonitorActivityName;
-(unsigned)performanceMonitorAggTiming;
-(id)activationHoldActivityIdentifier;
-(void)signInFailedWithError:(id)arg1 ;
-(void)finishedUpdatingAppleAccountProperties;
-(void)finishedActivating;
-(void)startNetworkRequest;
-(void)stopNetworkRequest;
-(void)appleIDAuthController:(id)arg1 didSignInWithSuccess:(char)arg2 error:(id)arg3 ;
-(id)appleIDAuthControllerRequestsPresentingViewController:(id)arg1 ;
-(COSAppleIDAuthController *)authController;
-(void)setAuthController:(COSAppleIDAuthController *)arg1 ;
-(char)contentViewIsInAdjustedScrollView;
-(void)recoverCredentials;
-(void)passwordTextFieldDidChange:(id)arg1 ;
-(void)tappedForgotButton:(id)arg1 ;
-(void)tappedSkipButton:(id)arg1 ;
-(void)tappedNext;
-(void)allowUserInteractions:(char)arg1 ;
-(void)signInToAccountWithPassword:(id)arg1 ;
-(void)_finishedActivating;
-(void)updatedAppleAccountPropertiesWithAuthenticated:(char)arg1 error:(id)arg2 ;
-(void)signInWithPassword:(id)arg1 ;
-(void)_signInToAccount;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(UIButton *)forgotPasswordButton;
-(void)setForgotPasswordButton:(UIButton *)arg1 ;
-(id)passwordTextFieldDidChangeObserver;
-(void)setPasswordTextFieldDidChangeObserver:(id)arg1 ;
-(UIBarButtonItem *)nextNavBarButtonItem;
-(void)setNextNavBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UILabel *)verifyingLabel;
-(void)setVerifyingLabel:(UILabel *)arg1 ;
-(char)watchSupportsAuthKit;
-(void)setWatchSupportsAuthKit:(char)arg1 ;
-(char)holdingForAppleAccountPropertyUpdateToComplete;
-(void)setHoldingForAppleAccountPropertyUpdateToComplete:(char)arg1 ;
-(char)recoveringCredentials;
-(void)setRecoveringCredentials:(char)arg1 ;
-(void)setReporter:(NRServerRequestReporter *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)updateLayout;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UIScrollView *)scroller;
-(id)detailText;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(id)titleString;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(UILabel *)detailLabel;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(id)account;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
-(NRServerRequestReporter *)reporter;
-(char)controllerAllowsNavigatingBackTo;
-(UITextField *)passwordTextField;
-(void)setPasswordTextField:(UITextField *)arg1 ;
-(UILabel *)detailTitleLabel;
-(void)setDetailTitleLabel:(UILabel *)arg1 ;
-(NRDevice *)device;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(void)setScroller:(UIScrollView *)arg1 ;
@end

