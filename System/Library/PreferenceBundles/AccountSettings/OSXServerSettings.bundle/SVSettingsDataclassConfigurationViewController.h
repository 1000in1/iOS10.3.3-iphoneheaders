/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@interface SVSettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController
-(void)discoverPropertiesForAccount;
-(id)enabledButTurnedOffDataclassSpecifiers;
-(id)VPNInstallationPromptReason;
-(void)addVPNConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)evaluateDeviceAuthenticationForReason:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)deleteVPNConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)displayedAccountTypeString;
-(id)specifierForAccountSummaryCell;
-(id)otherSpecifiers;
-(char)shouldShowDeleteAccountButton;
-(Class)accountInfoControllerClass;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)lastGroupSpecifierInSpecifiers:(id)arg1 ;
-(id)specifiers;
@end

