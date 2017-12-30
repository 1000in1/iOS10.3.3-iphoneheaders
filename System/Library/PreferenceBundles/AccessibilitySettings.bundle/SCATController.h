/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSMutableArray, NSString;

@interface SCATController : PSListController {

	NSArray* _cachedAutoScanningOptionsSpecifiers;
	NSArray* _cachedManualScanningOptionsSpecifiers;
	NSArray* _cachedDwellScanningOptionsSpecifiers;
	NSArray* _cachedSpeechOptionsSpecifiers;
	NSMutableArray* _cachedPointPickerOptionsSpecifiers;
	NSString* _selectedScanningModeIdentifier;
	NSString* _selectedPointPickerIdentifier;

}

@property (nonatomic,retain) NSArray * cachedAutoScanningOptionsSpecifiers;                    //@synthesize cachedAutoScanningOptionsSpecifiers=_cachedAutoScanningOptionsSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * cachedManualScanningOptionsSpecifiers;                  //@synthesize cachedManualScanningOptionsSpecifiers=_cachedManualScanningOptionsSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * cachedDwellScanningOptionsSpecifiers;                   //@synthesize cachedDwellScanningOptionsSpecifiers=_cachedDwellScanningOptionsSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * cachedSpeechOptionsSpecifiers;                          //@synthesize cachedSpeechOptionsSpecifiers=_cachedSpeechOptionsSpecifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedPointPickerOptionsSpecifiers;              //@synthesize cachedPointPickerOptionsSpecifiers=_cachedPointPickerOptionsSpecifiers - In the implementation block
@property (nonatomic,retain) NSString * selectedScanningModeIdentifier;                        //@synthesize selectedScanningModeIdentifier=_selectedScanningModeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * selectedPointPickerIdentifier;                         //@synthesize selectedPointPickerIdentifier=_selectedPointPickerIdentifier - In the implementation block
-(id)speechEnabled:(id)arg1 ;
-(void)setSwitchScanningEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)switchScanningEnabled:(id)arg1 ;
-(id)switchesSummary:(id)arg1 ;
-(id)recipesSummary:(id)arg1 ;
-(id)scanningStyle:(id)arg1 ;
-(id)_autoScanningOptionsSpecifiers;
-(id)_manualScanningOptionsSpecifiers;
-(id)_dwellScanningOptionsSpecifiers;
-(id)actionRepeatSummary:(id)arg1 ;
-(id)longPressSummary:(id)arg1 ;
-(id)tapBehaviorSummary:(id)arg1 ;
-(id)scanLocationAfterTapSummary:(id)arg1 ;
-(void)setAlwaysTapKeyboardKeysEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)alwaysTapKeyboardKeysEnabled:(id)arg1 ;
-(id)holdDurationSummary:(id)arg1 ;
-(id)inputCoalescingSummary:(id)arg1 ;
-(char)_isUsingHeadSwitch;
-(id)headMovementSummary:(id)arg1 ;
-(id)_pointPickerRescanSpecifiers;
-(void)setSoundEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)soundEnabled:(id)arg1 ;
-(void)setItemGroupingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)itemGroupingEnabled:(id)arg1 ;
-(void)setCursorHighVisibility:(id)arg1 specifier:(id)arg2 ;
-(id)cursorHighVisibility:(id)arg1 ;
-(id)cursorColorDescription:(id)arg1 ;
-(id)customGesturesSummary:(id)arg1 ;
-(id)scanTimeoutSummary:(id)arg1 ;
-(id)autoscanDelaySummary:(id)arg1 ;
-(id)delayAfterInputSummary:(id)arg1 ;
-(id)scanCyclesSummary:(id)arg1 ;
-(id)_scanTimeoutSpecifier;
-(NSArray *)cachedDwellScanningOptionsSpecifiers;
-(id)dwellTimeSummary:(id)arg1 ;
-(void)setCachedDwellScanningOptionsSpecifiers:(NSArray *)arg1 ;
-(id)axisSweepSummary:(id)arg1 ;
-(id)_localizedSummaryForDelay:(double)arg1 ;
-(id)_summaryForListOfItems:(id)arg1 ;
-(char)_isScanningModeIdentifier:(id)arg1 ;
-(char)_isPointPickerIdentifier:(id)arg1 ;
-(char)_scanningModeEnabledForIdentifier:(id)arg1 ;
-(void)setSelectedScanningModeIdentifier:(NSString *)arg1 ;
-(char)_pointPickerEnabledForIdentifier:(id)arg1 ;
-(void)setSelectedPointPickerIdentifier:(NSString *)arg1 ;
-(void)_setScanningModeEnabledForIdentifier:(id)arg1 ;
-(NSString *)selectedScanningModeIdentifier;
-(void)_setPointPickerEnabledForIdentifier:(id)arg1 ;
-(NSString *)selectedPointPickerIdentifier;
-(void)_handleAssistiveTouchToggled:(id)arg1 ;
-(id)compactMenuEnabled:(id)arg1 ;
-(NSMutableArray *)cachedPointPickerOptionsSpecifiers;
-(void)setCachedPointPickerOptionsSpecifiers:(NSMutableArray *)arg1 ;
-(NSArray *)cachedAutoScanningOptionsSpecifiers;
-(void)setCachedAutoScanningOptionsSpecifiers:(NSArray *)arg1 ;
-(NSArray *)cachedSpeechOptionsSpecifiers;
-(void)setScanByElements:(id)arg1 specifier:(id)arg2 ;
-(id)scanByElements:(id)arg1 ;
-(id)axisPickerWantsRescan:(id)arg1 ;
-(void)setAxisPickerWantsRescan:(id)arg1 specifier:(id)arg2 ;
-(void)setCompactMenuEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)selectActionDelaySummary:(id)arg1 ;
-(NSArray *)cachedManualScanningOptionsSpecifiers;
-(void)setCachedManualScanningOptionsSpecifiers:(NSArray *)arg1 ;
-(void)setCachedSpeechOptionsSpecifiers:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)specifiers;
@end

