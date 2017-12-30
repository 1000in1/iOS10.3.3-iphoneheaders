/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudKeySyncing/ProtectedCloudKeySyncing-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_os_log, OS_dispatch_queue;
@class UserRegistryStats, CKRecordZoneID, NSString, AccountsModel, NSObject, UserRegistryDB, CKFetchRecordZoneChangesOperation;

@interface PCSUserRegistry : NSObject <APSConnectionDelegate> {

	BOOL _resubmitSyncing;
	BOOL _stats_dirty;
	int _qualityOfService;
	UserRegistryStats* _stats;
	/*^block*/id _databaseUpdate;
	CKRecordZoneID* _recordZoneID;
	NSString* _deviceIdentifier;
	NSString* _deviceName;
	AccountsModel* _accounts;
	NSObject*<OS_os_log> _oslog;
	UserRegistryDB* _userdb;
	CKFetchRecordZoneChangesOperation* _syncingOpertion;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) CKRecordZoneID * recordZoneID;                                    //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (retain) NSString * deviceIdentifier;                                      //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain) NSString * deviceName;                                            //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) AccountsModel * accounts;                                         //@synthesize accounts=_accounts - In the implementation block
@property (retain) NSObject*<OS_os_log> oslog;                                       //@synthesize oslog=_oslog - In the implementation block
@property (retain) UserRegistryDB * userdb;                                          //@synthesize userdb=_userdb - In the implementation block
@property (retain) CKFetchRecordZoneChangesOperation * syncingOpertion;              //@synthesize syncingOpertion=_syncingOpertion - In the implementation block
@property (assign) BOOL resubmitSyncing;                                             //@synthesize resubmitSyncing=_resubmitSyncing - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL stats_dirty;                                                 //@synthesize stats_dirty=_stats_dirty - In the implementation block
@property (assign) int qualityOfService;                                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (retain) UserRegistryStats * stats;                                        //@synthesize stats=_stats - In the implementation block
@property (copy) id databaseUpdate;                                                  //@synthesize databaseUpdate=_databaseUpdate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyMachineIdentifier;
-(void)setUserdb:(UserRegistryDB *)arg1 ;
-(UserRegistryDB *)userdb;
-(void)cacheUserRegistryStats;
-(BOOL)stats_dirty;
-(void)setStats_dirty:(BOOL)arg1 ;
-(void)saveUserRegistryStats;
-(void)setupSyncing;
-(CKFetchRecordZoneChangesOperation *)syncingOpertion;
-(void)setSyncingOpertion:(CKFetchRecordZoneChangesOperation *)arg1 ;
-(void)checkAccountStatus:(id)arg1 ;
-(void)setupSubscriptions:(BOOL)arg1 ;
-(void)addDatabaseOperation:(id)arg1 ;
-(void)flushStats;
-(void)triggerSyncing;
-(void)setResubmitSyncing:(BOOL)arg1 ;
-(id)getServerChangeToken;
-(void)deleteServerChangeToken;
-(void)clearCloudKitCache;
-(id)databaseUpdate;
-(void)saveServerChangeToken:(id)arg1 ;
-(PCSIdentitySetDataRef)identityCopySet;
-(void)recoverFromCachedDevices:(PCSIdentitySetDataRef)arg1 ;
-(BOOL)resubmitSyncing;
-(BOOL)checkRegistryLocal:(int)arg1 complete:(/*^block*/id)arg2 ;
-(id)getRecordID:(id)arg1 ;
-(void)statFetch;
-(id)deviceRecordIDName;
-(void)statModify;
-(id)deviceRecordID;
-(BOOL)updateiCDPDeviceStatus:(id)arg1 ;
-(id)updateEscrowKey:(id)arg1 ;
-(id)deviceListRecordID;
-(BOOL)needZone:(id)arg1 ;
-(void)createZone:(int)arg1 ;
-(void)createDeviceList:(int)arg1 complete:(/*^block*/id)arg2 ;
-(void)saveDeviceList:(id)arg1 complete:(/*^block*/id)arg2 ;
-(void)fetchDeviceList:(int)arg1 complete:(/*^block*/id)arg2 ;
-(void)createDevice:(int)arg1 complete:(/*^block*/id)arg2 ;
-(void)ensureDeviceOnDeviceList:(id)arg1 qos:(int)arg2 complete:(/*^block*/id)arg3 ;
-(void)fetchDevice:(int)arg1 complete:(/*^block*/id)arg2 ;
-(void)fetchDeviceKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)keyRecordIdentity:(PCSIdentityDataRef)arg1 device:(id)arg2 version:(id)arg3 ;
-(void)checkKeys:(id)arg1 complete:(/*^block*/id)arg2 ;
-(void)getThisDevice:(int)arg1 complete:(/*^block*/id)arg2 ;
-(void)compareKeys:(id)arg1 device:(id)arg2 complete:(/*^block*/id)arg3 ;
-(void)fetchKeys:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)checkDeviceLocal:(id)arg1 complete:(/*^block*/id)arg2 ;
-(id)keyRecord:(PCSIdentityDataRef)arg1 device:(id)arg2 ;
-(BOOL)updateEscrowData:(id)arg1 escrowIdentity:(PCSIdentityDataRef)arg2 identity:(PCSIdentityDataRef)arg3 ;
-(BOOL)updateCurrent:(PCSIdentitySetDataRef)arg1 ident:(PCSIdentityDataRef)arg2 key:(id)arg3 ;
-(BOOL)updateBackup:(id)arg1 ident:(PCSIdentityDataRef)arg2 keybag:(int)arg3 keybagUUID:(id)arg4 ;
-(void)updateDevice:(id)arg1 withKeys:(id)arg2 complete:(/*^block*/id)arg3 ;
-(void)checkFlag:(long)arg1 name:(id)arg2 status:(long)arg3 string:(id)arg4 ;
-(id)statusString:(id)arg1 ;
-(void)printDevice:(id)arg1 keys:(id)arg2 ;
-(long)deviceStatus:(id)arg1 ;
-(void)enumerateDevices:(int)arg1 complete:(/*^block*/id)arg2 ;
-(void)printKeys:(id)arg1 complete:(/*^block*/id)arg2 ;
-(BOOL)haveEscrowIdentity:(PCSIdentitySetDataRef)arg1 ;
-(void)recoverKeysFromDevice:(id)arg1 usingSet:(PCSIdentitySetDataRef)arg2 ;
-(id)extractKeybagEscrowedData:(id)arg1 ;
-(void)fetchDeviceKeys:(id)arg1 qos:(int)arg2 complete:(/*^block*/id)arg3 ;
-(void)getRecordID:(id)arg1 qos:(int)arg2 complete:(/*^block*/id)arg3 ;
-(BOOL)foundMatchingDevice:(id)arg1 device:(id)arg2 ;
-(void)escrowRecordIDsFromDeviceList:(id)arg1 complete:(/*^block*/id)arg2 ;
-(void)setupStatCache;
-(BOOL)setupCloudKitSyncing;
-(void)registerCloudKitNotifications;
-(void)addContainerOperation:(id)arg1 ;
-(BOOL)checkRegistry:(int)arg1 complete:(/*^block*/id)arg2 ;
-(void)printCachedDevices;
-(void)printCachedStats;
-(void)printAllDevices:(/*^block*/id)arg1 ;
-(void)printThisDevice:(/*^block*/id)arg1 ;
-(void)fetchAllDeviceKeys:(id)arg1 qos:(int)arg2 complete:(/*^block*/id)arg3 ;
-(void)deleteThisDevice:(/*^block*/id)arg1 ;
-(void)escrowRecordIDs:(/*^block*/id)arg1 ;
-(void)setDatabaseUpdate:(id)arg1 ;
-(id)init;
-(id)container;
-(void)saveRecord:(id)arg1 ;
-(void)setQualityOfService:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setOslog:(NSObject*<OS_os_log>)arg1 ;
-(int)qualityOfService;
-(void)setStats:(UserRegistryStats *)arg1 ;
-(UserRegistryStats *)stats;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSObject*<OS_os_log>)oslog;
-(NSString *)deviceName;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)setAccounts:(AccountsModel *)arg1 ;
-(AccountsModel *)accounts;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(id)privateDatabase;
-(id)containerName;
@end

