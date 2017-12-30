/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface AirTrafficHost : NSObject {

	NSDictionary* _hostDict;

}

@property (getter=libraryIdentifier,nonatomic,readonly) NSString * libraryIdentifier; 
@property (getter=lastSyncTime,nonatomic,readonly) NSNumber * lastSyncTime; 
@property (getter=hostName,nonatomic,readonly) NSString * name; 
@property (getter=syncedAssetsString,nonatomic,readonly) NSString * syncedAssetsString; 
@property (getter=isWifiEnabled,nonatomic,readonly) char wifiEnabled; 
-(NSString *)syncedAssetsString;
-(id)localizedAssetTypeForDataclass:(id)arg1 ;
-(id)initWithHostDictionary:(id)arg1 ;
-(id)hostName;
-(NSString *)libraryIdentifier;
-(char)isWifiEnabled;
-(NSNumber *)lastSyncTime;
@end

