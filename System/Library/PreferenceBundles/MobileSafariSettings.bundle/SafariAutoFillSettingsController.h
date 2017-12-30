/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSIndexPath, CNContactStore, CNContactPickerViewController, NSString;

@interface SafariAutoFillSettingsController : SafariSettingsListController <CNContactPickerDelegate, DevicePINControllerDelegate, UIPopoverControllerDelegate> {

	/*^block*/id _passcodeEntryCompletionHandler;
	/*^block*/id _promptCompletionHandler;
	/*^block*/id _passcodeSetupCompletionHandler;
	UIPopoverController* _autoFillContactController;
	NSIndexPath* _autoFillContactIndex;
	char _isMeCardSet;
	CNContactStore* _contactStore;
	CNContactPickerViewController* _meCardPicker;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)willResignActive;
-(void)didAcceptSetPIN;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
-(void)updateUseContactInfoSpecifiers;
-(void)_contactStoreChanged:(id)arg1 ;
-(id)_formDataController;
-(id)meCardName;
-(void)_enablingAutoFillWithoutPasscodePromptEndedWithResult:(int)arg1 ;
-(void)_showPasscodeSetupSheetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_promptForEnablingAutoFillWithoutPasscodeWithTitle:(id)arg1 message:(id)arg2 allowAnyway:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setShouldAutoFill:(char)arg1 specifier:(id)arg2 message:(id)arg3 setter:(/*^block*/id)arg4 ;
-(void)_setupMeCardPicker;
-(void)showMeCardPicker;
-(void)presentPopoverContactListInTable:(id)arg1 index:(id)arg2 specifier:(id)arg3 ;
-(void)_dismissMeCardPicker;
-(id)useContactInfo:(id)arg1 ;
-(id)myInfo:(id)arg1 ;
-(id)shouldAutoFillPasswords:(id)arg1 ;
-(void)setShouldAutoFillPasswords:(id)arg1 specifier:(id)arg2 ;
-(id)shouldAutoFillCreditCards:(id)arg1 ;
-(void)setShouldAutoFillCreditCards:(id)arg1 specifier:(id)arg2 ;
-(void)setUseContactInfo:(id)arg1 forSpecifier:(id)arg2 ;
-(id)specifiers;
@end

