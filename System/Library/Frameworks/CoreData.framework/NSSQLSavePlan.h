/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLSaveChangesRequestContext, NSMutableArray, NSMutableSet, NSSaveChangesRequest, NSManagedObjectContext;

@interface NSSQLSavePlan : NSObject {

	NSSQLSaveChangesRequestContext* _requestContext;
	CFDictionaryRef _changeCache;
	CFDictionaryRef _insertCache;
	CFDictionaryRef _toManyCache;
	NSMutableArray* _rowsToDelete;
	NSMutableSet* _updatedByRequest;
	NSMutableSet* _updatedByForeignKey;
	CFDictionaryRef _updatedFOKRowsInCurrentSave;
	CFDictionaryRef _deletedFOKRowsInCurrentSave;
	NSMutableArray* _externalDataReferencesToSave;
	NSMutableSet* _externalDataReferencesToDelete;
	int _transactionInMemorySequence;
	struct {
		unsigned notifyFOKChanges : 1;
		unsigned hasChanges : 1;
		unsigned reserved : 30;
	}  _flags;

}

@property (readonly) NSSaveChangesRequest * saveRequest; 
@property (readonly) NSManagedObjectContext * savingContext; 
@property (assign,nonatomic) int transactionInMemorySequence; 
@property (readonly) id<_NSCoreDataCollectionWithoutKeys> externalDataReferencesToSave;                //@synthesize externalDataReferencesToSave=_externalDataReferencesToSave - In the implementation block
@property (readonly) id<_NSCoreDataCollectionWithoutKeys> externalDataReferencesToDelete;              //@synthesize externalDataReferencesToDelete=_externalDataReferencesToDelete - In the implementation block
-(id)entityForEntityDescription:(id)arg1 ;
-(void)setTransactionInMemorySequence:(int)arg1 ;
-(char)hasChangesForWriting;
-(int)transactionInMemorySequence;
-(long long)_knownPrimaryKeyForObjectID:(id)arg1 ;
-(unsigned)_knownEntityKeyForObjectID:(id)arg1 ;
-(void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned*)arg4 reorderedIndexes:(char**)arg5 ;
-(unsigned)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4 ;
-(void)_registerChangedFOKs:(id)arg1 deletions:(id)arg2 forSourceObject:(id)arg3 andRelationship:(id)arg4 ;
-(id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalOrderKeys:(id)arg3 originalSnapshot:(id)arg4 value:(id)arg5 added:(id)arg6 deleted:(id)arg7 sourceRowPK:(long long)arg8 properties:(id)arg9 sourceObject:(id)arg10 newIndexes:(unsigned*)arg11 reorderedIndexes:(char**)arg12 ;
-(id)_findOrCreateChangeSnapshotForGlobalID:(id)arg1 ;
-(id)_correlationTableUpdateTrackerForRelationship:(id)arg1 ;
-(long long)_knownPrimaryKeyForObject:(id)arg1 ;
-(unsigned)_knownEntityKeyForObject:(id)arg1 ;
-(unsigned)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3 ;
-(void)_addExternalReferenceDataToDelete:(id)arg1 ;
-(void)_addExternalReferenceDataToSave:(id)arg1 ;
-(void)_recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(char)arg4 ;
-(id)_entityForObject:(id)arg1 ;
-(void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(char)arg4 ;
-(void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1 ;
-(void)_createCorrelationTrackerUpdatesForDeletedObject:(id)arg1 ;
-(void)_createRowsForSave;
-(void)_computeUpdatedRowSplit;
-(void)prepareRows;
-(id)initForRequestContext:(id)arg1 ;
-(NSSaveChangesRequest *)saveRequest;
-(NSManagedObjectContext *)savingContext;
-(id)newObjectsForFastLockConflictDetection;
-(id)newObjectsForExhaustiveLockConflictDetection;
-(id)newObjectsForUniquenessConflictDetectionGivenReportedFailures:(id)arg1 ;
-(id)newRowsToRemoveFromRowCache;
-(id)newRowsToAddToRowCache;
-(id)newPrimaryRowsUpdatedForRowCache;
-(id)newAncillaryRowsUpdatedForRowCache;
-(id)newCorrelationTableUpdates;
-(id)foreignOrderKeysBeingUpdated;
-(id)foreignOrderKeysBeingDeleted;
-(id<_NSCoreDataCollectionWithoutKeys>)externalDataReferencesToSave;
-(id<_NSCoreDataCollectionWithoutKeys>)externalDataReferencesToDelete;
-(void)dealloc;
@end

