/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface AXHASettings : NSObject {

	ACAccountStore* _accountStore;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;               //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                   //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSDictionary * pairedHearingAids; 
@property (assign,nonatomic) char independentHearingAidSettings; 
@property (assign,nonatomic) char allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) char shouldStreamToLeftAid; 
@property (assign,nonatomic) char shouldStreamToRightAid; 
@property (assign,nonatomic) int callAudioRoute; 
@property (assign,nonatomic) int mediaAudioRoute; 
@property (assign,nonatomic) char exportsLiveListenToFile; 
+(id)sharedInstance;
+(void)initialize;
-(id)init;
-(void)dealloc;
-(NSMutableSet *)synchronizePreferences;
-(NSMutableDictionary *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(char)allowHearingAidControlOnLockScreen;
-(char)shouldStreamToLeftAid;
-(char)shouldStreamToRightAid;
-(NSDictionary *)pairedHearingAids;
-(char)independentHearingAidSettings;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(void)setPairedHearingAids:(NSDictionary *)arg1 ;
-(void)setIndependentHearingAidSettings:(char)arg1 ;
-(void)setAllowHearingAidControlOnLockScreen:(char)arg1 ;
-(void)setShouldStreamToLeftAid:(char)arg1 ;
-(void)setShouldStreamToRightAid:(char)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(char)isiCloudPaired;
-(char)exportsLiveListenToFile;
-(char)shouldUseiCloud;
-(void)icloudHearingSettingsDidChange:(id)arg1 ;
-(void)pushLocalHearingAidsToiCloud;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(void)setLocalHearingAidsFromiCloud:(id)arg1 ;
-(id)convertPersistentRepresentation:(id)arg1 fromVersion:(float)arg2 toVersion:(float)arg3 ;
-(id)deviceIDForPairingInformation:(id)arg1 ;
-(char)isDeviceIDOnCloudBlacklist:(id)arg1 ;
-(int)callAudioRoute;
-(int)mediaAudioRoute;
-(void)addDeviceIDToCloudBlacklist:(id)arg1 ;
-(void)removeDeviceIDFromCloudBlacklist:(id)arg1 ;
-(char)isPairedWithFakeHearingAids;
-(void)setCallAudioRoute:(int)arg1 ;
-(void)setMediaAudioRoute:(int)arg1 ;
-(void)setExportsLiveListenToFile:(char)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(NSMutableSet *)registeredNotifications;
@end

