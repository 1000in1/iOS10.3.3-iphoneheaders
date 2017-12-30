/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/CPLDiagnoseServiceClientProtocol.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class PSSpecifier, NSArray, UIProgressHUD, RadiosPreferences, NSXPCConnection, PSCloudStorageOffersManager, CPLStatus, NSString;

@interface MSSSettingsController : PSListController <PSCloudStorageOffersManagerDelegate, CPLStatusDelegate, CPLDiagnoseServiceClientProtocol, RadiosPreferencesDelegate> {

	PSSpecifier* _iCloudPhotosSwitchSpecifier;
	NSArray* _allCloudPhotosSpecifiers;
	NSArray* _photoStreamSwitchSpecifiers;
	NSArray* _sharedStreamsSwitchSpecifiers;
	NSArray* _iCloudPhotoLibraryConditionalSpecifiers;
	NSArray* _photoStreamAvalancheSpecifiers;
	NSArray* _allPeopleAlbumResetSpecifiers;
	UIProgressHUD* _displayedSpinner;
	RadiosPreferences* _radiosPreferences;
	unsigned char _originalCellFlag;
	unsigned char _originalWiFiFlag;
	int _wifiAvailable;
	char _cloudPhotosEnabled;
	char _avalancheAllowed;
	char _accountModificationAllowed;
	unsigned _showAirplaneModeAlertWhenViewLoads : 1;
	unsigned _showWifiUnavailableWhenViewLoads : 1;
	unsigned _inAirplaneMode : 1;
	unsigned _observingNetworkChanges : 1;
	unsigned _stoppedObservingNetworkChangesBecauseUIDisappeared : 1;
	unsigned _photoStreamEnabled : 1;
	unsigned _sharedStreamsEnabled : 1;
	unsigned _shownFromAccountSettings : 1;
	NSXPCConnection* _diagnoseServiceConnection;
	PSCloudStorageOffersManager* _offersManager;
	char _requireStorageUpgradeForCPL;
	CPLStatus* _cplStatus;
	char _isCPLInExitMode;
	int _rampStatus;
	char _performingRampStatusUpdate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setPhotoStreamsEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoStreamsEnabledFromBuddyWorkflow:(id)arg1 ;
+(void)setPhotoSharingEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoSharingEnabledFromBuddyWorkflow:(id)arg1 ;
+(char)shouldOfferHyperionInBuddy;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)reloadSpecifiers;
-(void)pushController:(id)arg1 ;
-(void)statusDidChange:(id)arg1 ;
-(void)airplaneModeChanged;
-(void)_continueWithoutStoragePurchase:(id)arg1 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)managerDidCancel:(id)arg1 ;
-(char)_shownFromAccountSettings;
-(void)_wifiReachabilityChanged:(id)arg1 ;
-(void)_clearCachedSpecifiers;
-(void)_initializeUserAccountAndSpecifiers;
-(void)updateDiagnoseButtonName:(id)arg1 enabled:(char)arg2 ;
-(id)diagnoseServiceConnection;
-(void)diagnosticServiceStateDidChange:(char)arg1 ;
-(void)_updateCloudPhotoFooterTextAnimated:(char)arg1 ;
-(void)_updateKeepOriginalsFooterTextAnimated:(char)arg1 ;
-(char)_shouldHideCPL;
-(char)_isiCPLFacesLocalModelEnabled;
-(char)_peopleAlbumIsAvailable;
-(id)_peopleAlbumResetButtonSpecifier;
-(void)_hideDisplayedSpinner;
-(void)_setPhotoStreamEnabled:(char)arg1 ;
-(char)_photoStreamAssetsWillBeDeletedIfTurnedOff;
-(void)_showSpinnerForDuration:(double)arg1 withText:(id)arg2 ;
-(void)_confirmWithTitle:(id)arg1 message:(id)arg2 confirmationButtonTitle:(id)arg3 cancelButtonTtle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_setSharedStreamsEnabled:(char)arg1 ;
-(void)_enableCloudPhotosIgnoringStorageLimits:(char)arg1 ;
-(void)_beginCloudPhotosDisableFlow;
-(char)_avalancheUploadOnlyPicks;
-(void)_updateAvalancheFooterTextAnimated:(char)arg1 ;
-(void)_saveUserAccount;
-(void)_setDisplayedSpinner:(id)arg1 ;
-(id)_CPLStorageFooterText;
-(id)_CPLSwitchFooterText;
-(id)_uploadBurstFooterText;
-(void)_updatePeopleResetFooterTextUsingSpecifier:(id)arg1 ;
-(id)_removeNonPhotoStreamOrCloudPhotosSettingFromSpecifier:(id)arg1 ;
-(id)_photoStreamSwitchName;
-(void)_setRecordVideoConfiguration:(id)arg1 specifier:(id)arg2 ;
-(id)_recordVideoConfiguration:(id)arg1 ;
-(void)_setRecordSlomoConfiguration:(id)arg1 specifier:(id)arg2 ;
-(id)_recordSlomoConfiguration:(id)arg1 ;
-(void)_updatePauseUnpauseButtonName;
-(id)_showSpinnerWithText:(id)arg1 ;
-(id)_nonLocalResourceInfo;
-(void)_disableCloudPhotos;
-(void)_confirmCloudPhotosDisableWithSyncInProgress;
-(void)_confirmCloudPhotosDisableWhilePrunedWithNonLocalResourceInfo:(id)arg1 ;
-(void)_confirmCloudPhotosDisableWithNonLocalResourceInfo:(id)arg1 ;
-(void)_cancelDisableCloudPhotos;
-(void)_confirmDeletePrunedResourcesWithNonLocalResourceInfo:(id)arg1 ;
-(void)_enableKeepOriginalsWithNonLocalResourceInfo:(id)arg1 ;
-(void)_showManageStorage;
-(void)keepOriginals:(id)arg1 ;
-(void)_updatePhotoStreamSwitchNameAnimated:(char)arg1 ;
-(void)_updatePeopleResetFooterText;
-(void)_showStorageOptions;
-(void)photoStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)photoStreamEnabled:(id)arg1 ;
-(id)sharedStreamsEnabled:(id)arg1 ;
-(void)sharedStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)cloudPhotosEnabled:(id)arg1 ;
-(void)cloudPhotosEnableWasToggled:(id)arg1 specifier:(id)arg2 ;
-(void)pauseCloudPhotos:(id)arg1 ;
-(void)generateCPLDiagnose:(id)arg1 ;
-(void)optimizeStorage:(id)arg1 ;
-(id)uploadBurstPhotos:(id)arg1 ;
-(void)uploadBurstPhotosSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(char)_sharedStreamsAssetsWillBeDeletedIfTurnedOff;
-(void)_updatePhotoStreamSwitchEnabled;
-(id)_personID;
-(void)resetPeopleAlbum:(id)arg1 ;
-(id)specifiers;
@end

