/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/LDAPSettings.bundle/LDAPSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class LDAPAccount, LDAPSearchSettings, LDAPSettingsAccountsUIController, NSString;

@interface LDAPSettingsSearchBaseController : PSListController <UIActionSheetDelegate, UIAlertViewDelegate> {

	LDAPAccount* _account;
	LDAPSearchSettings* _searchSettings;
	LDAPSettingsAccountsUIController* _accountController;
	id _confirmDeleteSettingsSheetOrAlert;

}

@property (nonatomic,retain) LDAPAccount * account;                                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) LDAPSearchSettings * searchSettings;                                      //@synthesize searchSettings=_searchSettings - In the implementation block
@property (assign,nonatomic,__weak) LDAPSettingsAccountsUIController * accountController;              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) id confirmDeleteSettingsSheetOrAlert;                                     //@synthesize confirmDeleteSettingsSheetOrAlert=_confirmDeleteSettingsSheetOrAlert - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(LDAPSearchSettings *)searchSettings;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(LDAPAccount *)account;
-(void)setAccount:(LDAPAccount *)arg1 ;
-(LDAPSettingsAccountsUIController *)accountController;
-(void)setAccountController:(LDAPSettingsAccountsUIController *)arg1 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(void)confirmDeleteSettings:(id)arg1 ;
-(void)_checkScopeCell;
-(void)_updateDescriptionFromSearchBase:(id)arg1 ;
-(void)setAccountIntProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(char)_isNewSearchSettings;
-(char)_searchSettingsAreEmpty;
-(void)didConfirmDeleteSettings:(char)arg1 ;
-(void)_confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setSearchSettings:(LDAPSearchSettings *)arg1 ;
-(id)confirmDeleteSettingsSheetOrAlert;
-(void)setConfirmDeleteSettingsSheetOrAlert:(id)arg1 ;
-(id)specifiers;
@end

