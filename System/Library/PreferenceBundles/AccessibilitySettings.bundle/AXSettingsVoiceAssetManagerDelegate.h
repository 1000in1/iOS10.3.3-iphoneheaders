/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSettingsVoiceAssetManagerDelegate <NSObject>
@required
-(void)assetManagerError:(id)arg1 voiceId:(id)arg2;
-(void)assetManagerFinishedDownloadingAsset:(id)arg1;
-(void)assetManagerVoiceLanguageDownloadProgress:(id)arg1 progress:(float)arg2 storageSize:(long long)arg3 requiredDiskSpace:(char)arg4 versionId:(id)arg5;
-(void)assetManagerUpdateToDownloadAvailabilityChanged;

@end

