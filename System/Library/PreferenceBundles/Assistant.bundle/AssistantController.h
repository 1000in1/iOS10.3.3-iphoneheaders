/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <Assistant/VTUIEnrollTrainingViewControllerDelegate.h>

@class NSArray, UIPopoverController, AssistantVoiceSettingsConnection, NSString, PSSpecifier, CNContactStore, CNContactPickerViewController;

@interface AssistantController : PSListController <CNContactPickerDelegate, VTUIEnrollTrainingViewControllerDelegate> {

	NSArray* _assistantSettings;
	UIPopoverController* _meCardPopover;
	AssistantVoiceSettingsConnection* _settingsConnection;
	NSString* _pendingLanguage;
	PSSpecifier* _voiceSpecifier;
	CNContactStore* _contactStore;
	CNContactPickerViewController* _peoplePicker;

}

@property (nonatomic,readonly) AssistantVoiceSettingsConnection * settingsConnection;              //@synthesize settingsConnection=_settingsConnection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_heySiriSupportedForLanguage:(id)arg1 ;
+(id)titlesForLanguageIdentifiers:(id)arg1 ;
+(id)assistantLanguageTitlesDictionary;
+(id)capitalizeFirstPartOfCountry:(id)arg1 ;
+(id)shortTitlesForLanguageIdentifiers:(id)arg1 ;
+(id)bundle;
-(id)voiceControlLanguage:(id)arg1 ;
-(void)assistantOnlyEnabledConfirmed:(id)arg1 ;
-(char)watchSupportsSiriLanguageCode:(id)arg1 ;
-(void)assistantEnabledCancelled:(id)arg1 ;
-(void)assistantDisabledConfirmed:(id)arg1 ;
-(void)assistantDisabledCancelled:(id)arg1 ;
-(void)assistantEnabledConfirmed:(id)arg1 ;
-(id)assistantLanguage:(id)arg1 ;
-(char)_isIncompatibleWithWatchLanguage:(id)arg1 ;
-(void)_showIncompatibleWatchLanguageAlert;
-(void)_setAssistantLanguageWatchMismatchConfirmed:(id)arg1 ;
-(void)_setAssistantLanguageConfirmed:(id)arg1 ;
-(void)_setAssistantLanguageCancelled:(id)arg1 ;
-(void)_setAssistantLanguageHeySiriDisableConfirmed:(id)arg1 ;
-(char)_languageWillDisableHeySiri:(id)arg1 ;
-(void)_showWillDisableHeySiriAlert;
-(void)setAssistantLanguage:(id)arg1 ;
-(void)showAssistantConfirmationViewForSpecifier:(id)arg1 ;
-(id)meCard:(id)arg1 ;
-(id)assistantAudioFeedbackMode:(id)arg1 ;
-(void)setVoiceControlLanguage:(id)arg1 specifier:(id)arg2 ;
-(void)assistantAboutDonePressed:(id)arg1 ;
-(id)assistantVoice:(id)arg1 ;
-(void)setAssistantEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAssistantLanguage:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAccessibleFromLockScreen:(id)arg1 forSpecifier:(id)arg2 ;
-(id)voiceTrigger:(id)arg1 ;
-(id)accessibleFromLockScreen:(id)arg1 ;
-(void)showAboutAssistantSheet:(id)arg1 ;
-(void)lowPowerModeChangedNotification:(id)arg1 ;
-(void)contactsDidChange;
-(void)prepareForSnapshot;
-(void)outputVoiceDidChange;
-(id)assistantVoiceLanguage:(id)arg1 ;
-(void)_updateSpecifiersForLanguage:(id)arg1 ;
-(char)_isAssistantLockScreenAccessRestricted;
-(id)_localizeTriggerString:(id)arg1 ;
-(id)assistantEnabled:(id)arg1 ;
-(char)_isHeySiriAlwaysOn;
-(void)setVoiceTrigger:(id)arg1 forSpecifier:(id)arg2 ;
-(AssistantVoiceSettingsConnection *)settingsConnection;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)bundle;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)setAssistantEnabled:(char)arg1 ;
-(void)reloadSpecifiers;
-(void)handleURL:(id)arg1 ;
-(void)willResignActive;
-(void)didBecomeActive;
-(void)skipSetup;
-(void)showLearnMore;
-(void)continueSetup;
-(void)_showMeCardPopover;
-(void)showMeCardPicker:(id)arg1 ;
-(id)specifiers;
@end
