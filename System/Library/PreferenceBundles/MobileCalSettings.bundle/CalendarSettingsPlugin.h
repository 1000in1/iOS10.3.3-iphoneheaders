/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAccountsClientListController.h>

@class PSSpecifier, EKEventStore, ACAccountStore;

@interface CalendarSettingsPlugin : PSAccountsClientListController {

	PSSpecifier* _showInviteeDeclinesSpecifier;
	PSSpecifier* _syncDaysSpecifier;
	PSSpecifier* _timeZoneSupportSpecifier;
	PSSpecifier* _defaultCalendarSpecifier;
	PSSpecifier* _birthdayCalendarSpecifier;
	PSSpecifier* _defaultAlarmsSpecifier;
	PSSpecifier* _overlayCalendarSpecifier;
	PSSpecifier* _showWeekNumbersSpecifier;
	PSSpecifier* _showEventsFoundInMailSpecifier;
	PSSpecifier* _suggestedLocationsSpecifier;
	EKEventStore* _eventStore;
	ACAccountStore* _accountStore;
	char _moreThanOneCalendar;
	PSSpecifier* _weekStartSpecifier;

}

@property (nonatomic,retain) PSSpecifier * weekStartSpecifier;              //@synthesize weekStartSpecifier=_weekStartSpecifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_localeChanged:(id)arg1 ;
-(void)reloadSpecifiers:(id)arg1 ;
-(id)requestedAccountDataclass;
-(id)_eventStore;
-(void)_eventStoreChanged:(id)arg1 ;
-(id)_accountStore;
-(void)_freeSpecifiers;
-(char)_shouldShowFoundInMailToggle;
-(id)_defaultWeekdayLocalizedFormatString;
-(void)setShowInviteeDeclinesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)showInviteeDeclinesEnabled:(id)arg1 ;
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setOverlayCalendarID:(id)arg1 specifier:(id)arg2 ;
-(id)overlayCalendarID:(id)arg1 ;
-(id)_titlesForCalendarIdentifiers:(id)arg1 ;
-(void)setShowWeekNumbers:(id)arg1 specifier:(id)arg2 ;
-(id)showWeekNumbers:(id)arg1 ;
-(void)setShowEventsFoundInMail:(id)arg1 specifier:(id)arg2 ;
-(id)showEventsFoundInMail:(id)arg1 ;
-(void)setDaysToSync:(id)arg1 specifier:(id)arg2 ;
-(id)daysToSync:(id)arg1 ;
-(id)_titlesForDaysToSync;
-(void)setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)defaultCalendarName:(id)arg1 ;
-(void)setWeekStart:(id)arg1 specifier:(id)arg2 ;
-(id)weekStart:(id)arg1 ;
-(id)_numbersForWeekdays;
-(id)_titlesForWeekDays:(id)arg1 ;
-(void)setWeekStartSpecifier:(PSSpecifier *)arg1 ;
-(void)setSuggestEventLocations:(id)arg1 specifier:(id)arg2 ;
-(id)suggestEventLocations:(id)arg1 ;
-(id)_localeSpecificLocalizedTwoWeeksSyncTitleWithNumberFormatter:(id)arg1 bundle:(id)arg2 ;
-(id)_localeSpecificLocalizedOneMonthSyncTitleWithNumberFormatter:(id)arg1 bundle:(id)arg2 ;
-(id)_localeSpecificLocalizedThreeMonthsSyncTitleWithNumberFormatter:(id)arg1 bundle:(id)arg2 ;
-(id)_localeSpecificLocalizedSixMonthsSyncTitleWithNumberFormatter:(id)arg1 bundle:(id)arg2 ;
-(id)_localizedNoLimitSyncTitleInBundle:(id)arg1 ;
-(id)_localizedOneMonthSyncTitleOverrideInBundle:(id)arg1 ;
-(void)_createAllCommonSpecifiers;
-(int)_countOfAccountsSyncingCalendars;
-(PSSpecifier *)weekStartSpecifier;
-(void)setImmediateAlarmCreation:(id)arg1 specifier:(id)arg2 ;
-(id)immediateAlarmCreation:(id)arg1 ;
-(id)specifiers;
-(id)footerText;
@end

