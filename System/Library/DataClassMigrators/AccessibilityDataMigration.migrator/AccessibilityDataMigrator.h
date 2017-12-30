/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/AccessibilityDataMigration.migrator/AccessibilityDataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface AccessibilityDataMigrator : DataClassMigrator {

	char _inUnitTest;

}

@property (assign,nonatomic) char inUnitTest;              //@synthesize inUnitTest=_inUnitTest - In the implementation block
-(void)_okemoMigrateVoiceOverGradeTwoAutoTranslate;
-(void)_monarchMigrateSpeechRateSettings;
-(void)_monarchClearSwitchControlMenuItemVersionPreferences;
-(void)_monarchRemoveNavigationDirectionRotorIfNeeded;
-(void)_eagleMigrateBalanceSettingFromCoreAudio;
-(void)_whitetailMigrateVoiceSettings;
-(void)_whitetailMigrateTTYSettings;
-(char)inUnitTest;
-(void)_whitetailMigrateDisplayFilterSettings;
-(void)_whitetailMigrateVOTShouldRouteToSpeakerWithProx;
-(void)_voiceOverVoiceMigrationWhitetail;
-(void)_switchVoiceMigrationWhitetail;
-(void)_speechVoiceMigrationWhitetail;
-(float)_monarchConvertSpeechRate:(float)arg1 ;
-(void)_okemoMigrateVoiceOverTypingMode;
-(void)_okemoMigrateBrailleOutputMode;
-(void)_migratePreferences;
-(void)setInUnitTest:(char)arg1 ;
-(float)migrationProgress;
-(float)estimatedDuration;
-(char)performMigration;
@end

