/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessoryUpdaterBundles/StandaloneHIDFudPlugins.bundle/StandaloneHIDFudPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StandaloneHIDFudPlugins/SHFUPlugin.h>

@interface SHFUPluginPreloaded : SHFUPlugin
-(void)findFirmwareWithOptions:(id)arg1 remote:(char)arg2 ;
-(id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id*)arg3 options:(id)arg4 mobileAssetType:(id)arg5 vendorID:(id)arg6 productID:(id)arg7 equivalentPIDs:(id)arg8 versionCheckDelay:(id)arg9 deviceClassName:(id)arg10 firmwareDirectory:(id)arg11 inactivityDelayPreflight:(id)arg12 bootstrapDelay:(id)arg13 inactivityDelay:(id)arg14 networkDelay:(id)arg15 featureReportDelay:(id)arg16 loggingIdentifier:(id)arg17 compatibilityVersion:(id)arg18 batteryCheckHost:(id)arg19 batteryCheckDevice:(id)arg20 minBatteryHost:(id)arg21 minBatteryDevice:(id)arg22 STFWFirst:(id)arg23 resetEveryFWPayload:(id)arg24 deviceNeedsBTReconnect:(id)arg25 sendSDPQueryNotification:(id)arg26 bluetoothReconnectDelay:(id)arg27 ;
-(id)getVersionFromFWFile:(id)arg1 ;
-(id)getLatestVersionsFromFWDirectory;
@end

