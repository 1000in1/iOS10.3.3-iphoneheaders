/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:12 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MCMSQLiteDB;

@interface MCMCodeSigningMapping : NSObject {

	NSObject*<OS_dispatch_queue> _codeSignQueue;
	MCMSQLiteDB* _codeSigningMappingDB;

}

@property (nonatomic,retain) MCMSQLiteDB * codeSigningMappingDB;              //@synthesize codeSigningMappingDB=_codeSigningMappingDB - In the implementation block
+(id)sharedInstance;
-(void)_migrateFromMappingFileToDBIfNecessary;
-(void)_onQueue_migrateAppGroupIdsFromDataContainersToFile;
-(void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;
-(void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMapping;
-(void)_onQueue_reconcileSystemContainers;
-(void)performAllCodeSigningMigrationAndReconciliation;
-(id)_readCodeSigningMappingFromDiskAtURL:(id)arg1 ;
-(id)_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2 ;
-(id)_copyApplicationGroupEntitlementForIdentifier:(id)arg1 entitlements:(id)arg2 groupKey:(id)arg3 ;
-(void)_onQueue_removeCodeSigningDictionariesForIdentifierAndItsChildren:(id)arg1 ;
-(id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(char)arg2 ;
-(id)_onQueue_codeSigningInfoForCodeSigningEntry:(id)arg1 identifier:(id)arg2 externalRequest:(char)arg3 ;
-(id)_onQueue_entitlementsForIdentifier:(id)arg1 ;
-(id)_onQueue_entitlementsCodeSigningEntry:(id)arg1 identifier:(id)arg2 ;
-(char)_onQueue_codeSigningInfoExistForIdentifier:(id)arg1 ;
-(char)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1 ;
-(char)_onQueue_identifierHasSystemContainer:(id)arg1 ;
-(unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1 ;
-(id)_onQueue_appGroupIdentifiersForIdentifier:(id)arg1 ;
-(id)_onQueue_systemGroupIdentifiersForIdentifier:(id)arg1 ;
-(unsigned long long)_onQueue_processCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 withOptions:(id)arg3 ;
-(id)_onQueue_invalidateCodeSigningInfoForAppsWithoutBundleContainer;
-(id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 ;
-(void)iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(/*^block*/id)arg3 ;
-(void)removeCodeSigningDictionariesForIdentifierAndItsChildren:(id)arg1 ;
-(char)codeSigningInfoExistForIdentifier:(id)arg1 ;
-(char)identifierHasCallerRegisteredEntitlements:(id)arg1 ;
-(char)identifierHasSystemContainer:(id)arg1 ;
-(unsigned long long)dataContainerTypeForIdentifier:(id)arg1 ;
-(id)appGroupIdentifiersForIdentifier:(id)arg1 ;
-(id)systemGroupIdentifiersForIdentifier:(id)arg1 ;
-(unsigned long long)processCallerRegisteredEntitlements:(id)arg1 forIdentifier:(id)arg2 ;
-(unsigned long long)processCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 withOptions:(id)arg3 ;
-(id)getCodeSigningInfoForIdentifier:(id)arg1 ;
-(unsigned long long)invalidateCodeSigningInfoForAppsWithoutBundleContainer;
-(char)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id*)arg2 ;
-(MCMSQLiteDB *)codeSigningMappingDB;
-(void)setCodeSigningMappingDB:(MCMSQLiteDB *)arg1 ;
-(id)init;
@end

