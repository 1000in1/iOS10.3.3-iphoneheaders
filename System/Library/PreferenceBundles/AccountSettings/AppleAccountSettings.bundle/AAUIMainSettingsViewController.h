/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/AAUIFamilySetupDelegate.h>
#import <AppleAccountSettings/AAUIFamilyInvitationsViewControllerDelegate.h>
#import <AppleAccountSettings/AAUIFamilySettingsViewControllerDelegate.h>
#import <AppleAccountSettings/AAUIAccountValidationControllerDelegate.h>
#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol OS_dispatch_queue;
@class PSSpecifier, UIView, AAAutoAccountVerifier, NSMutableArray, UINavigationController, RUILoader, NSLock, NSOperationQueue, AAUIGenericTermsRemoteUI, AAUIDeviceLocatorService, NSObject, PSListController, AAUIProfilePictureStore, RemoteUIController, AAFamilyDetailsResponse, AAFamilyEligibilityResponse, NSString, NSArray, ACAccount, AAUINetworkReachabilityAlert, NSMutableURLRequest, AAGrandSlamSigner, AAUIFamilyNotificationObserver, AAUIAccountValidationController, AKAppleIDAuthenticationController, AARequester;

@interface AAUIMainSettingsViewController : ACUIDataclassConfigurationViewController <RemoteUIControllerDelegate, AAUIFamilySetupDelegate, AAUIFamilyInvitationsViewControllerDelegate, AAUIFamilySettingsViewControllerDelegate, AAUIAccountValidationControllerDelegate, AAUIGenericTermsRemoteUIDelegate, RUIObjectModelDelegate> {

	PSSpecifier* _findMyiPhoneSwitchSpecifier;
	PSSpecifier* _cloudDriveSwitchSpecifier;
	PSSpecifier* _keychainSyncSpecifier;
	UIView* _accountDowngradeConfirmation;
	AAAutoAccountVerifier* _accountVerifier;
	PSSpecifier* _checkMailSpecifier;
	NSMutableArray* _headerSpecifiers;
	UINavigationController* _addEmailNavController;
	RUILoader* _addEmailLoader;
	NSMutableArray* _addEmailObjectModels;
	PSSpecifier* _mailDataclassSpecifier;
	int _keychainStatus;
	int _keychainSyncNotificationToken;
	int _iCloudRestoreToken;
	char _isPresentingUpdateSheet;
	char _shouldAuthenticateAfterUpdate;
	char _loadedViaURL;
	char _monitoringReachability;
	char _allowAccountRevalidation;
	char _performedUpdate;
	char _performingUpdate;
	char _appearedBefore;
	char _topLevelSettings;
	char _shouldPresentLocationWarning;
	char _accountWasPromoted;
	char _shouldAttemptToEnableDataclasses;
	char _userCanceledLastUpdate;
	char _didShowDeletionConfirmation;
	NSLock* _accountValidationLock;
	NSLock* _saveCurrentStateLock;
	NSOperationQueue* _networkActivityQueue;
	AAUIGenericTermsRemoteUI* _genericTermsRemoteUI;
	AAUIDeviceLocatorService* _deviceLocatorService;
	/*^block*/id _deviceLocatorOperationCompletionHandler;
	id _restrictionChangeNotificationObserver;
	NSObject*<OS_dispatch_queue> _accountWorkQueue;
	id _accountStoreDidChangeObserver;
	id _deviceLocatorStateDidChangeObserver;
	PSListController* _photoStreamSettingsController;
	PSListController* _backupSettingsController;
	PSListController* _storageSettingsController;
	AAUIProfilePictureStore* _profilePictureStore;
	RemoteUIController* _secondaryAuthRemoteUIController;
	char _hasCachedAvailableQuota;
	float _cachedAvailableQuota;
	char _didAttemptToGetFamilyDetails;
	char _didFailToGetFamilyDetails;
	AAFamilyDetailsResponse* _familyDetailsResponse;
	AAFamilyEligibilityResponse* _familyEligibilityResponse;
	NSMutableArray* _pendingInvites;
	NSString* _familyStatusSummary;
	NSString* _invitationSummary;
	int _familyEligibilityStatus;
	NSArray* _familySpecifiers;
	PSSpecifier* _profileCellSpecifier;
	ACAccount* _grandSlamAccount;
	char _hasShownSecondaryAuthFirstPage;
	/*^block*/id _secondaryAuthCompletion;
	NSString* _secondaryToken;
	AAUINetworkReachabilityAlert* _networkAlert;
	NSMutableURLRequest* _pendingInviteRemoteUIRequest;
	NSMutableArray* _cellsActivelyLoadingDetailView;
	char _isLoadingFamilyDetails;
	NSMutableArray* _pendingFamilyDetailsCompletionBlocks;
	char _isHandlingURLForInvite;
	PSSpecifier* _familyCellSpecifier;
	PSSpecifier* _invitationsCellSpecifier;
	NSObject* _profilePictureStoreDidChangeObserver;
	AAGrandSlamSigner* _grandSlamSigner;
	AAUIFamilyNotificationObserver* _familyNotificationObserver;
	AAUIAccountValidationController* _accountRepairController;
	AKAppleIDAuthenticationController* _authController;
	AARequester* _secondaryAppleIDTokenFetchRequest;
	AAUINetworkReachabilityAlert* _reachabilityController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_stopObservingAccountStoreChanges;
-(id)_valueForStorageSpecifier:(id)arg1 ;
-(void)_storageSpecifierWasTapped:(id)arg1 ;
-(char)_isAccountInGrayMode;
-(id)_specifierForFindMyiPhone;
-(id)_specifierForBackup;
-(id)_isBackupEnabledForSpecifier:(id)arg1 ;
-(void)_backupSpecifierWasTapped:(id)arg1 ;
-(id)_isFindMyiPhoneEnabledForSpecifier:(id)arg1 ;
-(void)setShouldAttemptToEnableDataclasses:(char)arg1 ;
-(void)familyInvitationsViewController:(id)arg1 didProcessInvite:(id)arg2 ;
-(void)familyInvitationsViewControllerDidFinish:(id)arg1 ;
-(void)_handleiForgotActionURL:(id)arg1 ;
-(void)_startObservingAccountStoreChanges;
-(void)_loadiCloudDriveSettingsBundleIfNeeded;
-(void)_shoeboxStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isShoeboxEnabledForSpecifier:(id)arg1 ;
-(id)_isPhotoStreamEnabledString:(id)arg1 ;
-(void)_photoStreamSpecifierWasTapped:(id)arg1 ;
-(id)_keychainSyncStateForSpecifier:(id)arg1 ;
-(void)_findMyiPhoneSpecifierWasTapped:(id)arg1 ;
-(char)_shouldEnableFMIPSpecifier;
-(char)_isMultiUserMode;
-(id)_specifierForLocationSharing;
-(id)_specifierForMailSettings;
-(id)_specifiersForServerProvidedFooter;
-(void)_footerButtonTapped:(id)arg1 ;
-(void)_presentMailSettingsViewControllerForSpecifier:(id)arg1 ;
-(void)_loadCloudKitSettingsBundleIfNeeded;
-(char)_shouldShowLocationSharingSpecifier;
-(char)_locationServicesDisabledByRestrictions;
-(id)_specifierForShoebox;
-(id)_specifierForPhotoStream;
-(id)_specifierForKeychainSync;
-(void)_refreshKeychainState;
-(char)shouldContinueDataclassChangeForSpecifier:(id)arg1 ;
-(void)_beginChangingDataclasses;
-(void)_endChangingDataclasses;
-(void)_configureEmailAccount;
-(void)_presentCreateFreeEmailPromptWithCompletion:(/*^block*/id)arg1 isForNotes:(char)arg2 ;
-(void)_keychainSyncStateDidChange;
-(void)_handleSecondaryAuthenticationResponse:(id)arg1 baseURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_generateLoginCode;
-(void)_cancelSecondaryAuthenticationWasTapped:(id)arg1 ;
-(void)_beginObservingiCloudRestoreStatus;
-(void)_startObservingDeviceLocatorStateChanges;
-(void)_loadFamilyDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)_endObservingiCloudRestoreStatus;
-(void)_stopObservingDeviceLocatorStateChanges;
-(void)_cleanupFromNetworkActivity;
-(void)_deviceLocatorStateDidChange:(id)arg1 ;
-(void)_accountEmailBecameVerified;
-(id)_grandSlamAccount;
-(void)_promptForEmailAccountConfiguration;
-(void)_promptUserToEnableFindMyiPhoneIfPossible;
-(void)_enableAllProvisionedDataclasses;
-(void)_presentFirstAlertIfNecessary;
-(void)_checkNetworkReachabilityAndValidateAccount;
-(void)_handleShowFamilyInviteActionURL:(id)arg1 ;
-(void)_handleStartFamilySetupActionURL:(id)arg1 ;
-(void)_handleShowFamilySettingsURL:(id)arg1 ;
-(void)_handleShowChildTransferActionURL:(id)arg1 ;
-(void)_handleShowInvitesActionURL:(id)arg1 ;
-(void)_handleHSAActionURL:(id)arg1 ;
-(void)_handleAuthActionURL:(id)arg1 ;
-(void)_handleChangePasswordActionURL:(id)arg1 ;
-(void)_handleCDPActionURL:(id)arg1 ;
-(void)_handleOONAddressVettingActionURL:(id)arg1 ;
-(void)_loadAccountRepairRemoteUI;
-(void)_pushInvitationsViewControllerWithSpecifier:(id)arg1 invites:(id)arg2 viewingInviteAtIndex:(int)arg3 ;
-(void)_viewFamilySpecifierWasTapped:(id)arg1 ;
-(void)_handleShowInviteActionURL:(id)arg1 isChildTransfer:(char)arg2 ;
-(id)_grandSlamSigner;
-(void)_presentValidationErrorAlert:(id)arg1 account:(id)arg2 ;
-(id)_specifiersForUnverifiedAccountHeader;
-(id)_specifiersForServiceUnavailableHeader;
-(id)_specifiersForGrayModeHeader;
-(id)_specifierForProfileCell;
-(id)_specifiersForFamily;
-(id)_specifierForStorageCell;
-(id)_deviceSpecificLocalizedStringKey:(id)arg1 ;
-(void)_didUpdateProfilePhotoWithLikeness:(id)arg1 ;
-(void)_profileCellWasTapped:(id)arg1 ;
-(id)_valueForInvitiationsSpecifier:(id)arg1 ;
-(void)_pendingInvitationsSpecifierWasTapped:(id)arg1 ;
-(id)_valueForFamilySpecifier:(id)arg1 ;
-(void)_setUpFamilySpecifierWasTapped:(id)arg1 ;
-(void)_reloadFamilySpecifiersAnimated:(char)arg1 ;
-(void)_handleFamilyDetailsResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_reloadFamilySpecifiers;
-(void)_loadFamilyEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleFamilyEligibilityResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkMailButtonTapped:(id)arg1 ;
-(void)_openServiceUnavailableInfoLink;
-(void)_showTermsAndConditionsButtonTapped:(id)arg1 ;
-(id)_specifierForCloudDrive;
-(id)_isCloudDriveEnabledString:(id)arg1 ;
-(void)_cloudDriveSpecifierWasTapped:(id)arg1 ;
-(void)_updateCloudDriveSpinnerState;
-(char)_isCloudDriveEnabled;
-(void)_setDataclasses:(id)arg1 toState:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishDataclassChangeWithState:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_authenticateAndPushAppleIDManagementViewControllerWithSpecifier:(id)arg1 ;
-(void)_showAccountDetailsUnavailableAlert;
-(void)_startSpinnerInCellForSpecifier:(id)arg1 ;
-(void)_stopSpinnerInCellForSpecifier:(id)arg1 ;
-(void)_pushAppleIDManagementViewControllerWithSecondaryToken:(id)arg1 specifier:(id)arg2 ;
-(void)_requestSecondaryTokenWithAppleIDSettingsGrandSlamToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestAppleIDSettingsGrandSlamTokenWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentSecondaryAuthenticationRemoteUI:(id)arg1 baseURL:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_clearFamilyState;
-(void)_performNetworkValidation;
-(void)_registerAccount;
-(void)_revalidateAccount;
-(char)_setupForNetworkActivity;
-(void)_handleAccountRegistrationCompletionWithResult:(char)arg1 error:(id)arg2 ;
-(void)_updateAccountInformation;
-(char)_isPasswordRequiredToValidateAppleAccount:(id)arg1 ;
-(void)_clearCachedSpecifierValues;
-(void)_beginValidationForAccount:(id)arg1 ;
-(void)_handleAccountRevalidationCompletionWithValidatedAccount:(id)arg1 success:(char)arg2 error:(id)arg3 ;
-(void)_removeHeaderSpecifiers;
-(void)_autoVerifyAccount;
-(id)_accountAutoVerifier;
-(void)_handleAccountAutoVerificationCompletionWithSuccess:(char)arg1 error:(id)arg2 ;
-(char)_isRunningInMail;
-(void)_showGenericTermsUI;
-(char)_isAnotherAccountSyncingDataclass:(id)arg1 ;
-(char)_isDataclassSycningOnlyUsingExchange:(id)arg1 ;
-(char)_localCalendarStoreHasReadOnlyCalendars;
-(void)_issueFindMyiPhonePromptWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(void)_restoreFromiCloudStatusChange;
-(id)_enabledDataclassesThatNeedConfirmation;
-(void)_confirmAccountDeletionWithWarningAboutDataclasses:(id)arg1 ;
-(void)_handleAccountDeletionConfirmed;
-(void)familySettingsViewControllerDidUpdateFamily:(id)arg1 ;
-(void)familySettingsViewControllerDidDeleteFamily:(id)arg1 ;
-(void)setAccountWasPromoted:(char)arg1 ;
-(void)_stopListeningForKeychainSyncStatusChangeNotification;
-(void)_registerForKeychainSyncStatusChangeNotification;
-(void)_loadMailSettingsBundleIfNeeded;
-(id)init;
-(void)dealloc;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)willBecomeActive;
-(id)displayedAccountTypeString;
-(id)specifierForAccountSummaryCell;
-(char)shouldShowOtherSpecifiersDuringFirstSetup;
-(id)otherSpecifiers;
-(id)titleForDeleteButton;
-(char)shouldEnableDeleteAccountButton;
-(Class)accountInfoControllerClass;
-(char)shouldEnableAccountSummaryCell;
-(char)shouldShowSpecifierForDataclass:(id)arg1 ;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(char)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(id)messageForAccountDeletionProgressUI;
-(void)reloadDynamicSpecifiersWithAnimation:(char)arg1 ;
-(id)_titleForError:(id)arg1 account:(id)arg2 ;
-(id)_messageForError:(id)arg1 account:(id)arg2 ;
-(void)_showUnderageAlertWithEligibilityResponse:(id)arg1 ;
-(void)accountValidationController:(id)arg1 didFinishHSAVerificationWithSuccess:(char)arg2 error:(id)arg3 ;
-(void)accountValidationControllerWillShowViewController:(id)arg1 ;
-(void)accountValidationControllerWillHideViewController:(id)arg1 ;
-(char)_isRestoringFromiCloud;
-(char)_carrierBundleSaysHideFindMyiPhone;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(char)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2 ;
-(id)accountChangeObserver;
-(void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(char)arg2 ;
-(char)_isPhotoStreamEnabled;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(char)arg2 ;
-(void)_cleanupLoader;
-(char)_shouldEnableLocationSharingSpecifier;
-(void)_locationSharingSpecifierWasTapped:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;
-(void)_accountStoreChanged:(id)arg1 ;
-(void)deleteButtonTapped:(id)arg1 ;
-(id)specifiers;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(char)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
@end

