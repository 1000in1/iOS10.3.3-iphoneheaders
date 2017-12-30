/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMailBridgeSettings.bundle/NanoMailBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class NSArray;

@interface MFNanoBridgeSettingsListController : BPSNotificationAppController {

	NSArray* _subsectionSpecifiers;

}
-(id)_includeMail:(id)arg1 ;
-(id)_flagValues;
-(id)_signature:(id)arg1 ;
-(id)_flagStyle:(id)arg1 ;
-(id)_mirroringDetailStringForNotificationSources;
-(id)_mirroringDetailStringForAlerts;
-(id)_mirroringDetailStringForFlagStyle;
-(id)_mirroringDetailStringForAskBeforeDeleting;
-(id)_mirroringDetailStringForOrganizeByThread;
-(void)saveShowAlertsForSpecifier:(id)arg1 ;
-(void)_setShowAlertsFrom:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_showAlertsFrom:(id)arg1 ;
-(void)_setIncludeMail:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setLinesOfPreview:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_linesOfPreview:(id)arg1 ;
-(id)_linesOfPreviewTitlesDictionary;
-(id)_linesOfPreviewValues;
-(void)_setFlagStyle:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_flagTitlesDictionary;
-(void)_setAskBeforeDeleting:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_askBeforeDeleting:(id)arg1 ;
-(void)_setOrganizeByThread:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_organizeByThread:(id)arg1 ;
-(char)_needsSetUp;
-(void)_setUpMail;
-(id)_accountNamesKeyedByAccountId;
-(id)init;
-(void)willBecomeActive;
-(char)caresAboutSubsections;
-(id)notificationApplicationSpecifiers;
-(char)suppressAllMirrorSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)mirroredApplicationGroupSpecifiers;
-(id)localizedPaneTitle;
-(void)mirrorSettingsChanged:(char)arg1 ;
-(id)applicationBundleIdentifier;
-(void)_setSignature:(id)arg1 withSpecifier:(id)arg2 ;
@end

