/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthentication.bundle/AppleIDAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleIDAuthentication/AppleIDAuthentication-Structs.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>
#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <AppleIDAuthentication/AACredentialRecoveryDialogStatusDelegate.h>

@class NSXPCListener, AASigningSession, NSDate, NSMutableSet, AKAppleIDAuthenticationController, NSString;

@interface AppleIDAuthenticationPlugin : NSObject <AKAppleIDAuthenticationDelegate, ACDAccountAuthenticationPlugin, NSXPCListenerDelegate, AACredentialRecoveryDialogStatusDelegate> {

	NSXPCListener* _credentialRecoveryListener;
	/*^block*/id _credentialRecoveryCompletion;
	AASigningSession* _signingSession;
	NSDate* _signingSessionCreationDate;
	NSMutableSet* _accountsAwaitingRemotePasswordEntry;
	AKAppleIDAuthenticationController* _authController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_migrateiCloudTokenIfNeededForAccount:(id)arg1 credential:(id)arg2 ;
-(void)_migrateFMIPTokenIfNeededForAccount:(id)arg1 credential:(id)arg2 ;
-(void)_migrateAppleIDTokensIfNeededForAccount:(id)arg1 credential:(id*)arg2 store:(id)arg3 ;
-(void)_fetchTokenForAccount:(id)arg1 accountStore:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)_tryPasswordLoginWithAccount:(id)arg1 store:(id)arg2 cookieHeaders:(id)arg3 services:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_beginPETBasedLoginWithAccount:(id)arg1 PET:(id)arg2 store:(id)arg3 usingCookieHeaders:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_silentlyAuthenticateAppleID:(id)arg1 altDSID:(id)arg2 companionDevice:(id)arg3 services:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_frontmostApplicationId;
-(void)_stopListeningForCredentialRecoveryStatus;
-(id)_findAndRemoveOldiCloudTokenForAccount:(id)arg1 ;
-(id)_findAndRemoveOldFMIPTokenForAccount:(id)arg1 ;
-(id)_accountTypeIDsThatReplacedAppleIDAccountType;
-(id)_authController;
-(id)_delegateHintsForAccount:(id)arg1 ;
-(char)_isPairedToPreBondiWatch;
-(void)_convertPasswordToPETForAppleID:(id)arg1 altDSID:(id)arg2 password:(id)arg3 services:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_parametersForProxiedAuthentication;
-(void)_handleHSALoginReponse:(id)arg1 forAccount:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleHSAActionIfNecessary:(id)arg1 withDataString:(id)arg2 forAccount:(id)arg3 ;
-(void)_renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 errorMessage:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_presentPasswordAlertForAccount:(id)arg1 inStore:(id)arg2 options:(id)arg3 errorMessage:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_presentGrayModeAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_isAccountReallyInGreyMode:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleCallbackFromGrayModeAlert:(CFUserNotificationRef)arg1 withResponse:(unsigned long)arg2 ;
-(void)_showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 withCompletionBlock:(/*^block*/id)arg6 ;
-(void)_handleCallbackFromPasswordAlertWithResults:(id)arg1 error:(id)arg2 forAccount:(id)arg3 inStore:(id)arg4 isiTunesAccount:(char)arg5 resetAuthenticatedOnAlertFailure:(char)arg6 completion:(/*^block*/id)arg7 ;
-(void)_updateDSID:(id)arg1 withRawPassword:(id)arg2 suggestedAccount:(id)arg3 store:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)_deviceIsSetupForDevEnvironment;
-(void)_invokeDelegatesWithAuthenticationResponse:(id)arg1 password:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_alertIfHSAVerificationIsRequiredForiCloudAccount:(id)arg1 withResponse:(id)arg2 ;
-(void)_startListeningForCredentialRecoveryStatus;
-(char)_showNativeCredentialRecovery;
-(void)_launchWebBasedCredentialRecovery;
-(void)credentialRecoveryDidFinishWithSuccess:(char)arg1 error:(id)arg2 ;
-(void)_getPasswordFromCompanionForAccount:(id)arg1 store:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showiForgotDialogWithCompletion:(/*^block*/id)arg1 ;
-(char)_isiCloudTwoFactorAuthRequiredForLoginResponse:(id)arg1 ;
-(id)_parametersForIDSAlertFromLoginResponse:(id)arg1 ;
-(id)_absintheSigningSession;
-(char)_isAccountInGrayMode:(id)arg1 ;
-(void)_loginWithAccount:(id)arg1 store:(id)arg2 usingCookieHeaders:(id)arg3 companionDevice:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)init;
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)isPushSupportedForAccount:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)renewalIDForAccount:(id)arg1 ;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(char)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(char)_clientHasEntitlement:(id)arg1 ;
@end

