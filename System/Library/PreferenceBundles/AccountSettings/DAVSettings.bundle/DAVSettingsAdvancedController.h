/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/DAVSettings.bundle/DAVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class DAAccount, DAVSettingsAccountsUIController, NSString;

@interface DAVSettingsAdvancedController : PSListController {

	char _isReloadingProperties;
	DAAccount* _account;
	DAVSettingsAccountsUIController* _accountController;
	NSString* _placeHolder;

}

@property (assign,nonatomic,__weak) DAAccount * account;                                              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) DAVSettingsAccountsUIController * accountController;              //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) NSString * placeHolder;                                                  //@synthesize placeHolder=_placeHolder - In the implementation block
@property (assign,nonatomic) char isReloadingProperties;                                              //@synthesize isReloadingProperties=_isReloadingProperties - In the implementation block
-(void)viewWillDisappear:(char)arg1 ;
-(NSString *)placeHolder;
-(void)setPlaceHolder:(NSString *)arg1 ;
-(DAAccount *)account;
-(void)setAccount:(DAAccount *)arg1 ;
-(DAVSettingsAccountsUIController *)accountController;
-(void)setAccountController:(DAVSettingsAccountsUIController *)arg1 ;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(char)isReloadingProperties;
-(void)setIsReloadingProperties:(char)arg1 ;
-(id)specifiers;
@end

