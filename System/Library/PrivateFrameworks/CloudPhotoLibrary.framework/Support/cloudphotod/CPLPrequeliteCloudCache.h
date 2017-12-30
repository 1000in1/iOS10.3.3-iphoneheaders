/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineCloudCacheImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteCloudCache : CPLPrequeliteStorage <CPLEngineCloudCacheImplementation> {

	CPLPrequeliteVariable* _syncAnchorVar;
	CPLPrequeliteVariable* _stagedSyncAnchorVar;
	CPLPrequeliteVariable* _initialSyncAnchor;
	CPLPrequeliteVariable* _classForInitialQuery;
	char _shouldMarkInitialSync;
	char _hasDoneAFirstSynchronization;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char hasDoneAFirstSynchronization;              //@synthesize hasDoneAFirstSynchronization=_hasDoneAFirstSynchronization - In the implementation block
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)_hasRecordWithIdentifier:(id)arg1 isStaged:(char*)arg2 ;
-(char)_updateFinalRecordWithIdentifer:(id)arg1 relatedIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 serializedRecord:(id)arg4 error:(id*)arg5 ;
-(char)_updateStagedRecordWithIdentifer:(id)arg1 relatedIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 serializedRecord:(id)arg4 error:(id*)arg5 ;
-(char)_insertFinalRecordWithIdentifier:(id)arg1 className:(id)arg2 relatedIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 serializedRecord:(id)arg5 error:(id*)arg6 ;
-(char)_insertStagedRecordWithIdentifier:(id)arg1 className:(id)arg2 relatedIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 serializedRecord:(id)arg5 error:(id*)arg6 ;
-(void)markFirstSyncAsSuccessful;
-(id)_statusWithSyncAnchor;
-(unsigned)_countOfUnconfirmedRecords;
-(id)status;
-(id)syncAnchor;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(char)discardStagedChangesWithError:(id*)arg1 ;
-(char)resetSyncAnchorWithError:(id*)arg1 ;
-(id)statusDictionary;
-(char)setSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(char)commitStagedChangesWithError:(id*)arg1 ;
-(char)hasRecordWithIdentifier:(id)arg1 ;
-(id)recordWithIdentifier:(id)arg1 isFinal:(char)arg2 ;
-(char)addRecord:(id)arg1 isFinal:(char)arg2 error:(id*)arg3 ;
-(char)updateRecord:(id)arg1 isFinal:(char)arg2 error:(id*)arg3 ;
-(char)deleteRecordWithIdentifier:(id)arg1 isFinal:(char)arg2 error:(id*)arg3 ;
-(char)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)hasDoneAFirstSynchronization;
-(char)confirmAllRecordsWithError:(id*)arg1 ;
-(id)confirmedRecordWithIdentifier:(id)arg1 ;
-(id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(char)arg2 ;
-(id)classNameOfRecordsForInitialQuery;
-(char)setClassNameOfRecordsForInitialQuery:(id)arg1 error:(id*)arg2 ;
-(id)initialSyncAnchor;
-(char)setInitialSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(id)recordsOfClass:(Class)arg1 isFinal:(char)arg2 ;
-(id)allRecordsIsFinal:(char)arg1 ;
-(id)_relatedIdentifierForRecordWithIdentifier:(id)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
-(char)resetWithError:(id*)arg1 ;
-(char)openWithError:(id*)arg1 ;
@end

