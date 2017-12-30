/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol OS_dispatch_queue, NSObject, AAUIiCloudServiceViewControllerDelegate;
@class NSMutableArray, PSSpecifier, NSArray, NSOperationQueue, NSObject, AAUINetworkReachabilityAlert, NSLock, IDSService, IDSAccountController, PSListController, UINavigationController, RUILoader, CDSServiceAccessCache, AAUIQuotaResponse, AAServiceOwnersManager, NSString;

@interface AAUIiCloudServiceViewController : ACUIDataclassConfigurationViewController <RUIObjectModelDelegate> {

	NSMutableArray* _storageSpecifiers;
	NSMutableArray* _appSpecifiers;
	PSSpecifier* _mailDataclassSpecifier;
	PSSpecifier* _keychainSyncSpecifier;
	char _requestingAvailableQuota;
	char _hasCachedAvailableQuota;
	NSArray* _cachediCloudMediaUsage;
	int _keychainStatus;
	NSOperationQueue* _networkActivityQueue;
	NSObject*<OS_dispatch_queue> _accountWorkQueue;
	AAUINetworkReachabilityAlert* _reachabilityController;
	NSLock* _saveCurrentStateLock;
	IDSService* _idsServiceMsgs;
	IDSAccountController* _idsControllerMsgs;
	IDSService* _idsServiceFT;
	IDSAccountController* _idsControllerFT;
	id _accountStoreDidChangeObserver;
	id _restrictionChangeNotificationObserver;
	int _keychainSyncNotificationToken;
	PSListController* _storageSettingsController;
	PSListController* _photoStreamSettingsController;
	UINavigationController* _addEmailNavController;
	RUILoader* _addEmailLoader;
	NSMutableArray* _addEmailObjectModels;
	int _tccObserverToken;
	CDSServiceAccessCache* _cdsAccessCache;
	AAUIQuotaResponse* _cachedQuotaResponse;
	id<NSObject> _deviceLocatorStateDidChangeObserver;
	AAServiceOwnersManager* _serviceOwnersManager;
	id<AAUIiCloudServiceViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) AAServiceOwnersManager * serviceOwnersManager;                            //@synthesize serviceOwnersManager=_serviceOwnersManager - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIiCloudServiceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startObservingTCCAccessChanges;
-(void)_startObservingDeviceLocatorStateDidChangeNotification;
-(void)_stopObservingAccountStoreChanges;
-(void)_stopObservingRestrictionChanges;
-(void)_stopObservingTCCAccessChanges;
-(void)_stopObservingDeviceLocatorStateDidChangeNotification;
-(id)_specifiersForStorageGroup;
-(id)_specifiersForAppsGroup;
-(id)_valueForStorageSpecifier:(id)arg1 ;
-(void)_storageSpecifierWasTapped:(id)arg1 ;
-(char)_isAccountInGrayMode;
-(id)_specifiersForProvisionedDataclasses;
-(id)_appSpecifiersForTCCServices;
-(id)_specifierForServiceType:(id)arg1 ;
-(id)_specifierForFindMyiPhone;
-(id)_specifierForBackup;
-(id)_specifierForUbiquity;
-(char)_shouldShowBackupSpecifier;
-(id)_isBackupEnabledForSpecifier:(id)arg1 ;
-(void)_backupSpecifierWasTapped:(id)arg1 ;
-(char)_shouldShowFindMySpecifier;
-(id)_isFindMyiPhoneEnabledForSpecifier:(id)arg1 ;
-(id)_cdsAccessCache;
-(void)_startObservingAccountStoreChanges;
-(void)_startObservingRestrictionChanges;
-(void)_setDocumentsAndDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_documentsAndDataEnabled:(id)arg1 ;
-(void)_loadiCloudDriveSettingsBundleIfNeeded;
-(void)_startUsingiCloudDriveWithSpecifier:(id)arg1 ;
-(void)_presentiCloudUpgradeFlowForSpecifier:(id)arg1 ;
-(char)_shouldShowSpecifierForServiceType:(id)arg1 ;
-(void)_setValue:(id)arg1 forServiceSpecifier:(id)arg2 ;
-(id)_valueForServiceSpecifier:(id)arg1 ;
-(void)_startSpinnerInSpecifier:(id)arg1 ;
-(void)_stopSpinnerInSpecifier:(id)arg1 ;
-(void)_signInAccountForService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_signOutAccountForService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_shoeboxStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isShoeboxEnabledForSpecifier:(id)arg1 ;
-(id)_isPhotoStreamEnabledString:(id)arg1 ;
-(void)_photoStreamSpecifierWasTapped:(id)arg1 ;
-(id)_keychainSyncStateForSpecifier:(id)arg1 ;
-(char)_isSystemAppRestrictedOrRemovedForDataclass:(id)arg1 ;
-(char)_isHiddenDataclass:(id)arg1 ;
-(id)_idsServiceMsgs;
-(id)_idsServiceFT;
-(void)_findMyiPhoneSpecifierWasTapped:(id)arg1 ;
-(char)_shouldEnableFMIPSpecifier;
-(char)_isMultiUserMode;
-(id)_specifierForLookMeUpByEmail;
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
-(id)_appSpecifierWithBundleID:(id)arg1 ;
-(id)_appAccessGrantedForBundleID:(id)arg1 ;
-(void)_setAppAccessGranted:(id)arg1 forBundleID:(id)arg2 ;
-(void)_setAppAccessGranted:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_appAccessGrantedForSpecifier:(id)arg1 ;
-(void)_refreshKeychainState;
-(char)shouldContinueDataclassChangeForSpecifier:(id)arg1 ;
-(void)_beginChangingDataclasses;
-(void)_setDataclasses:(id)arg1 enabled:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showPhotoStreamController:(id)arg1 ;
-(void)_endChangingDataclasses;
-(void)_configureEmailAccount;
-(void)_presentCreateFreeEmailPromptWithCompletion:(/*^block*/id)arg1 isForNotes:(char)arg2 ;
-(void)_forgetSpecifiers;
-(void)_keychainSyncStateDidChange;
-(void)_deviceLocatorStateDidChangeNotification:(id)arg1 ;
-(void)_promptForEmailAccountConfiguration;
-(void)setServiceOwnersManager:(AAServiceOwnersManager *)arg1 ;
-(AAServiceOwnersManager *)serviceOwnersManager;
-(id)_facetimeAccountIfNotPrimaryAA;
-(void)_messagesStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_facetimeStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_openMessagesPreferences:(id)arg1 ;
-(void)_openFacetimePreferences:(id)arg1 ;
-(id)_idsControllerMsgs;
-(id)_isFacetimeEnabledForSpecifier:(id)arg1 ;
-(id)_idsControllerFT;
-(id)_messagesAccountIfNotPrimaryAA;
-(void)_stopListeningForKeychainSyncStatusChangeNotification;
-(void)_registerForKeychainSyncStatusChangeNotification;
-(void)_loadMailSettingsBundleIfNeeded;
-(id)_isMessagesEnabledForSpecifier:(id)arg1 ;
-(void)setCachedResponse:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<AAUIiCloudServiceViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<AAUIiCloudServiceViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldShowOtherSpecifiersDuringFirstSetup;
-(id)otherSpecifiers;
-(char)shouldShowSpecifierForDataclass:(id)arg1 ;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(char)_carrierBundleSaysHideFindMyiPhone;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(char)_isPhotoStreamEnabled;
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
-(id)specifiers;
@end
