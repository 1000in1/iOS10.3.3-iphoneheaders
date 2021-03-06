/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, TSKMultiTableRemapping;
@class TSKAccessController, TSKChangeNotifier, TSCEUUidReferenceMap, TSCERewriteTableIDInfo, NSString, NSDate, NSTimeZone, NSObject, TSCETableInfosByName, NSMutableArray, TSCENamedReferenceManager, TSKChangeGroup, TSCETransaction;

@interface TSCECalculationEngine : TSPObject {

	TSKAccessController* _accessController;
	TSKChangeNotifier* _changeNotifier;
	TSCEDependencyTracker* _dependencyTracker;
	TSCEUUidReferenceMap* _uuidReferenceMap;
	TSCERewriteTableIDInfo* _tableIDHistory;
	int _xlImportDateMode;
	NSString* _previousLocaleIdentifier;
	NSDate* _currentDate;
	NSTimeZone* _currentTimeZone;
	unsigned long long _documentRandSeed;
	int _recalculationThreadState;
	opaque_pthread_mutex_t _recalculationThreadStateMutex;
	char _shouldCancelRecalculation;
	int _calculationPauseCount;
	NSObject*<OS_dispatch_group> _recalcLoopGroup;
	char _blockingUntilRecalcIsComplete;
	NSObject*<OS_dispatch_group> _recalcDispatchGroup;
	Ai _recalcDispatchGroupSize;
	NSObject*<OS_dispatch_queue> _recalcHighPriorityQueue;
	NSObject*<OS_dispatch_queue> _recalcLowPriorityQueue;
	NSObject*<OS_dispatch_semaphore> _modifiedOwnersSem;
	CFSetRef _modifiedOwnersInThisRecalcCycle;
	char _shouldRefillRecalcQueue;
	CFDictionaryRef _referenceResolvers;
	unordered_map<TSU::UUIDData<TSP::UUIDData>, id<TSCEReferenceResolving>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, id<TSCEReferenceResolving> > > >* _referenceResolversByUid;
	unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >* _unregisterIOUs;
	CFDictionaryRef _legacyGlobalIDStringToOwnerIDDictionary;
	TSCETableInfosByName* _tableInfosByName;
	unsigned _batchingGroupCellDirtyingLevel;
	char _dirtyRandomVolatileFunctionsAtEndOfDirtyBatching;
	NSMutableArray* _calculationStateObservers;
	unsigned _suppressWillModifyCallsLevel;
	unsigned _numberOfFormulas;
	TSCENamedReferenceManager* _namedReferenceManager;
	TSKChangeGroup* _pendingChangesForAsyncNotification;
	NSObject*<OS_dispatch_queue> _writeMutualExclusionQueue;
	char _dirtyAllFormulasInDocumentDidLoad;
	CFUUIDRef _transposingTableID;
	id<TSKMultiTableRemapping> _currentTableIDRemapper;
	TSCETransaction* _transaction;
	unsigned long long _loadFromFileVersion;
	id<TSKMultiTableRemapping> _currentTableIdRemapper;

}

@property (assign,nonatomic) TSKChangeNotifier * changeNotifier;                               //@synthesize changeNotifier=_changeNotifier - In the implementation block
@property (retain) NSDate * currentDate;                                                       //@synthesize currentDate=_currentDate - In the implementation block
@property (retain) NSTimeZone * currentTimeZone;                                               //@synthesize currentTimeZone=_currentTimeZone - In the implementation block
@property (assign,nonatomic) unsigned long long loadFromFileVersion;                           //@synthesize loadFromFileVersion=_loadFromFileVersion - In the implementation block
@property (readonly) char shouldAbortRecalculation; 
@property (assign) CFUUIDRef transposingTableID;                                               //@synthesize transposingTableID=_transposingTableID - In the implementation block
@property (nonatomic,readonly) TSCENamedReferenceManager * namedReferenceManager; 
@property (assign) unsigned long long documentRandomSeed;                                      //@synthesize documentRandSeed=_documentRandSeed - In the implementation block
@property (retain,readonly) TSCEUUidReferenceMap * uuidReferenceMap;                           //@synthesize uuidReferenceMap=_uuidReferenceMap - In the implementation block
@property (retain,readonly) TSCERewriteTableIDInfo * tableIDHistory;                           //@synthesize tableIDHistory=_tableIDHistory - In the implementation block
@property (retain) id<TSKMultiTableRemapping> currentTableIdRemapper;                          //@synthesize currentTableIdRemapper=_currentTableIdRemapper - In the implementation block
+(unsigned long long)generateRandomSeed;
+(char)localVariablesEnabled;
+(unsigned long long)randomSeedFromRandomLo:(int)arg1 hi:(int)arg2 ;
+(void)splitRandomSeed:(unsigned long long)arg1 intoLo:(int*)arg2 hi:(int*)arg3 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(char)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)saveToArchiver:(id)arg1 ;
-(char)isInCollaborationMode;
-(char)rangeIsWithinTable:(SCD_Struct_TS363*)arg1 ;
-(id)documentLocale;
-(char)ownerUidIsRegistered:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)resolverForTableUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)resolverForTableID:(CFUUIDRef)arg1 ;
-(void)cellReferenceIsDirty:(const SCD_Struct_TS364*)arg1 ;
-(TSCEUUidReferenceMap *)uuidReferenceMap;
-(TSCERewriteTableIDInfo *)tableIDHistory;
-(char)recalculationIsPaused;
-(void)startRecalcTaskIfNecessary;
-(void)initializeDispatchObjects;
-(void)setCurrentTimeZone:(NSTimeZone *)arg1 ;
-(void)pauseRecalculation;
-(void)p_addApplicationNotification;
-(void)p_removeApplicationNotification;
-(int)preferredDispatchQueueSize;
-(void)notifyObserversOfRecalcProgress;
-(void)p_enqueueTaskForCell:(SCD_Struct_TS364*)arg1 ;
-(void)p_recalcOneCellHoldingReadLock:(SCD_Struct_TS364*)arg1 formulaOwner:(id)arg2 hasExistingCalculatedPrecedents:(char)arg3 isInACycle:(char)arg4 ;
-(SCD_Struct_TS364*)p_refillRecalcQueue;
-(unsigned)dirtyCellCount;
-(char)allCellsAreClean;
-(char)recalcHoldingReadLock;
-(void)recalcHoldingWriteLock;
-(void)invalidateAfterRecalc;
-(void)resumeRecalculation;
-(void)unregisterOwner:(CFUUIDRef)arg1 ;
-(void)beginSuppressingWillModifyCalls;
-(void)endSuppressingWillModifyCalls;
-(char)ownerIsRegistered:(CFUUIDRef)arg1 ;
-(int)forwardRegisterOwnerWithOwnerID:(CFUUIDRef)arg1 legacyGlobalID:(id)arg2 ;
-(void)replaceFormula:(SCD_Struct_TS365)arg1 inOwner:(CFUUIDRef)arg2 precedentIterator:(/*function pointer*/void*)arg3 userData:(void*)arg4 ;
-(void)replaceFormula:(SCD_Struct_TS365)arg1 inOwner:(CFUUIDRef)arg2 precedentIterator:(/*function pointer*/void*)arg3 userData:(void*)arg4 clearCycle:(char)arg5 ;
-(void)randomVolatileFunctionsAreDirty;
-(char)isCellReferenceDirty:(SCD_Struct_TS364*)arg1 ;
-(void)headerStateOfTableChanged:(CFUUIDRef)arg1 changeIsForColumns:(char)arg2 ;
-(void)rangeReferenceIsDirty:(SCD_Struct_TS363*)arg1 ;
-(void)p_blockUntilRecalcTaskExitedWithTimeout:(double)arg1 ;
-(void)pauseRecalculationSometimeSoon;
-(void)p_blockUntilRecalcIsCompleteOnNewThreadWithTimeout:(id)arg1 ;
-(void)p_startRecalculationTask;
-(CFUUIDRef)transposingTableID;
-(id)p_stringForRangeReference:(SCD_Struct_TS363*)arg1 hostTableID:(CFUUIDRef)arg2 contextSheetName:(id)arg3 stickyBits:(unsigned char)arg4 isRangeWithFunction:(char)arg5 quoteComponents:(char)arg6 forceEscaping:(char)arg7 ;
-(TSCENamedReferenceManager *)namedReferenceManager;
-(TSUCellCoord)parseStringAsGeometricReferenceComponent:(id)arg1 inResolver:(id)arg2 outStickyBits:(char*)arg3 gettingReferencesMatchingInputAsPrefix:(id*)arg4 ;
-(SCD_Struct_TS363*)parseStringAsReferenceComponentIntersection:(id)arg1 inResolver:(id)arg2 inTableNamed:(id)arg3 preferredGeometricResolver:(id)arg4 defaultResolver:(id)arg5 outStickyBits:(char*)arg6 gettingReferencesMatchingInputAsPrefix:(id*)arg7 requireFullMatches:(char)arg8 filterColons:(char)arg9 outNamesUsed:(char*)arg10 abortObject:(id)arg11 ;
-(SCD_Struct_TS363*)parseStringAsReference:(id)arg1 tableName:(id)arg2 rest:(id)arg3 contextResolver:(id)arg4 contextSheetName:(id)arg5 gettingReferencesMatchingInputAsPrefix:(id*)arg6 gettingStickyBits:(char*)arg7 filterColons:(char)arg8 referenceIsComplete:(char)arg9 outNamesUsed:(char*)arg10 abortObject:(id)arg11 ;
-(char)parseComponentsOfReference:(id)arg1 gettingSheetName:(id*)arg2 gettingTableName:(id*)arg3 gettingRest:(id*)arg4 ;
-(SCD_Struct_TS363*)parseStringAsReference:(id)arg1 contextResolver:(id)arg2 contextSheetName:(id)arg3 gettingSpecifiedSheetName:(id*)arg4 gettingSpecifiedTableName:(id*)arg5 gettingRest:(id*)arg6 gettingReferencesMatchingInputAsPrefix:(id*)arg7 gettingStickyBits:(char*)arg8 filterColons:(char)arg9 referenceIsComplete:(char)arg10 outNamesUsed:(char*)arg11 abortObject:(id)arg12 ;
-(NSTimeZone *)currentTimeZone;
-(void)ownerIsDirty:(CFUUIDRef)arg1 ;
-(char)shouldAbortRecalculation;
-(void)setAccessController:(id)arg1 ;
-(id)accessController;
-(void)documentDidLoad;
-(void)wroteCells:(const vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >*)arg1 inOwnerID:(CFUUIDRef)arg2 ;
-(void)recalculateWithTimeout:(double)arg1 ;
-(int)xlImportDateMode;
-(void)setXLImportDateMode:(int)arg1 ;
-(id)previousLocaleIdentifier;
-(void)dirtyCellsForUpgrade;
-(int)registerOwnerWithOwnerID:(CFUUIDRef)arg1 owner:(id)arg2 referenceResolver:(id)arg3 ownerKind:(int)arg4 ;
-(char)ownerOwesAnUnregister:(CFUUIDRef)arg1 ;
-(char)allOwnersRegistered;
-(id)allOwnerIDs;
-(CFUUIDRef)formulaOwnerIDForFormulaOwnerID:(CFUUIDRef)arg1 ;
-(CFUUIDRef)formulaOwnerIDForFormulaOwnerUID:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(void)enumerateFormulaOwnersUsingBlock:(/*^block*/id)arg1 ;
-(void)clearLegacyGlobalIDs;
-(id)tableInfosByName;
-(CFUUIDRef)ownerIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(char)arg2 ;
-(void)setOwnerIDForLegacyGlobalID:(id)arg1 ownerID:(CFUUIDRef)arg2 ;
-(UUIDData<TSP::UUIDData>)uuidForTableUID:(const UUIDData<TSP::UUIDData>*)arg1 andIndex:(unsigned short)arg2 direction:(char)arg3 ;
-(void)closeTransaction:(id)arg1 ;
-(void)addFormula:(SCD_Struct_TS365)arg1 inOwner:(CFUUIDRef)arg2 precedentIterator:(/*function pointer*/void*)arg3 userData:(void*)arg4 ;
-(void)removeFormula:(SCD_Struct_TS365)arg1 inOwner:(CFUUIDRef)arg2 ;
-(void)removeAllFormulasFromOwner:(CFUUIDRef)arg1 ;
-(void)removeFormulasFromRange:(SCD_Struct_TS363*)arg1 ;
-(void)setError:(id)arg1 forCell:(const SCD_Struct_TS364*)arg2 ;
-(void)clearErrorForCell:(const SCD_Struct_TS364*)arg1 ;
-(SCD_Struct_TS364*)rootCauseForErrorInCell:(const SCD_Struct_TS364*)arg1 atRootCell:(char*)arg2 ;
-(void)foreachFormulaInOwner:(CFUUIDRef)arg1 block:(/*^block*/id)arg2 ;
-(vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >*)formulaCoordsReferringToRange:(const SCD_Struct_TS363*)arg1 fromOwner:(CFUUIDRef)arg2 ;
-(vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >*)formulaCoordsInRange:(const TSCERangeCoordinate*)arg1 inOwner:(CFUUIDRef)arg2 ;
-(unordered_set<TSCECellRef, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<TSCECellRef> >*)formulaCellsUsingVolatiles:(unsigned)arg1 ;
-(unsigned)dirtyCellCountInOwner:(CFUUIDRef)arg1 ;
-(char)cellIsInACycle:(SCD_Struct_TS364*)arg1 ;
-(char)referenceWasGuaranteedCleanAtRecalcCycleStart:(TSCECReference*)arg1 ;
-(char)clearCellIsDirtyAfterRecalc:(SCD_Struct_TS364*)arg1 ;
-(id)extendTableIDHistoryWithRewrite:(id)arg1 ;
-(void)rollbackTableIDHistoryWithRewrite:(id)arg1 ;
-(void)headerStateOfTableChanged:(CFUUIDRef)arg1 ;
-(void)updateDirtyPrecedentCountsForRemovedIndex:(int)arg1 inTable:(CFUUIDRef)arg2 forColumns:(char)arg3 ;
-(void)dirtyCellsForRemovalOfColumns:(NSRange)arg1 fromTable:(CFUUIDRef)arg2 tableRange:(TSCERangeCoordinate)arg3 ;
-(void)dirtyCellsForRemovalOfRows:(NSRange)arg1 fromTable:(CFUUIDRef)arg2 tableRange:(TSCERangeCoordinate)arg3 ;
-(void)dirtyCellsForInsertionOfColumns:(NSRange)arg1 forTable:(CFUUIDRef)arg2 tableRange:(TSCERangeCoordinate)arg3 headerRange:(TSCERangeCoordinate)arg4 ;
-(void)dirtyCellsForInsertionOfRows:(NSRange)arg1 forTable:(CFUUIDRef)arg2 tableRange:(TSCERangeCoordinate)arg3 headerRange:(TSCERangeCoordinate)arg4 ;
-(void)dirtyCellsForMergingRange:(TSCERangeCoordinate)arg1 forTable:(CFUUIDRef)arg2 headerRowRange:(TSCERangeCoordinate)arg3 headerColumnRange:(TSCERangeCoordinate)arg4 ;
-(void)allFunctionsAreDirty;
-(void)indirectCallsAreDirty;
-(void)markOnlyDependentsDirty:(const SCD_Struct_TS364*)arg1 ;
-(void)detectAndRepairConsistencyViolations;
-(void)timeVolatileFunctionsAreDirty;
-(void)localeVolatileFunctionsAreDirty;
-(void)locationVolatileFunctionsAreDirty;
-(void)compassVolatileFunctionsAreDirty;
-(void)geometryVolatileFunctionsAreDirtyInOwner:(CFUUIDRef)arg1 ;
-(char)cellContainsAFormula:(SCD_Struct_TS364*)arg1 ;
-(void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1 ;
-(void)startRecalculation;
-(void)pauseRecalculationForBlock:(/*^block*/id)arg1 ;
-(void)executeBlockWhileCalculationEngineIsNotWriting:(/*^block*/id)arg1 ;
-(void)beginBatchingGroupCellDirtying;
-(void)endBatchingGroupCellDirtying;
-(TSUCellCoord)cellCoordForCellHandle:(TSUCellCoord)arg1 inTable:(CFUUIDRef)arg2 ;
-(TSCERangeCoordinate)rangeCoordForCellHandleRange:(TSCERangeCoordinate)arg1 inTable:(CFUUIDRef)arg2 ;
-(TSUCellCoord)cellHandleForCellCoord:(TSUCellCoord)arg1 inTable:(CFUUIDRef)arg2 ;
-(TSCERangeCoordinate)cellHandleRangeForRangeCoord:(TSCERangeCoordinate)arg1 inTable:(CFUUIDRef)arg2 ;
-(char)referenceIsValid:(SCD_Struct_TS363*)arg1 ;
-(id)stringForRangeReference:(SCD_Struct_TS363*)arg1 hostTableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(char)arg4 ;
-(id)stringForRangeReference:(SCD_Struct_TS363*)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(char)arg4 ;
-(id)escapedStringForRangeReference:(SCD_Struct_TS363*)arg1 hostTableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(char)arg4 forceEscaping:(char)arg5 ;
-(id)escapedStringForRangeReference:(SCD_Struct_TS363*)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(char)arg4 forceEscaping:(char)arg5 ;
-(TSCEReferenceSet*)precedentsOfCell:(SCD_Struct_TS364*)arg1 ;
-(TSCEReferenceSet*)emptyReferenceSet;
-(SCD_Struct_TS363*)parseStringAsReference:(id)arg1 tableName:(id)arg2 rest:(id)arg3 contextResolver:(id)arg4 contextSheetName:(id)arg5 gettingReferencesMatchingInputAsPrefix:(id*)arg6 gettingStickyBits:(char*)arg7 filterColons:(char)arg8 referenceIsComplete:(char)arg9 outNamesUsed:(char*)arg10 ;
-(SCD_Struct_TS363*)parseStringAsReference:(id)arg1 contextResolver:(id)arg2 contextSheetName:(id)arg3 gettingSpecifiedSheetName:(id*)arg4 gettingSpecifiedTableName:(id*)arg5 gettingRest:(id*)arg6 gettingReferencesMatchingInputAsPrefix:(id*)arg7 gettingStickyBits:(char*)arg8 filterColons:(char)arg9 referenceIsComplete:(char)arg10 outNamesUsed:(char*)arg11 ;
-(void)addCalculationStateObserver:(id)arg1 ;
-(void)removeCalculationStateObserver:(id)arg1 ;
-(unsigned)numberOfCellsWithFormulas;
-(unsigned)numFormulaCellsInOwner:(CFUUIDRef)arg1 ;
-(char)hasMaxNumFormulas;
-(void)assertDirtyPrecedentsCountConsistency;
-(void)assertAllDirtyCellsAreOnLeafStack;
-(id)allFormulaOwnersAsString;
-(id)allCellDependenciesAsString;
-(id)allSpanningDependenciesAsString;
-(id)allWholeOwnerDependenciesAsString;
-(unordered_set<TSUCellCoord, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUCellCoord> >*)cellCoordinatesNeedingExcelImportForTable:(CFUUIDRef)arg1 ;
-(unsigned long long)loadFromFileVersion;
-(void)setLoadFromFileVersion:(unsigned long long)arg1 ;
-(id<TSKMultiTableRemapping>)currentTableIdRemapper;
-(void)setCurrentTableIdRemapper:(id<TSKMultiTableRemapping>)arg1 ;
-(unsigned long long)documentRandomSeed;
-(void)setDocumentRandomSeed:(unsigned long long)arg1 ;
-(void)setTransposingTableID:(CFUUIDRef)arg1 ;
-(TSKChangeNotifier *)changeNotifier;
-(void)setChangeNotifier:(TSKChangeNotifier *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)currentTransaction;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(NSDate *)currentDate;
-(id)documentRoot;
-(id)openTransaction;
@end

