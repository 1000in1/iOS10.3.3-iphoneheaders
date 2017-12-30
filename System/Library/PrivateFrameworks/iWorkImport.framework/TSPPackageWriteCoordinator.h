/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPArchiverManagerDelegate.h>
#import <iWorkImport/TSPComponentWriterDelegate.h>
#import <iWorkImport/TSPDataArchiver.h>
#import <iWorkImport/TSPExternalReferenceDelegate.h>
#import <iWorkImport/TSPPersistedObjectUUIDMapDelegate.h>
#import <iWorkImport/TSPObjectModifyDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSURL, TSPObjectContext, TSPDocumentRevision, TSPObject, TSPDataAttributesSnapshot, TSPObjectReferenceMap, TSPArchiverManager, NSObject, TSUPathSet, TSPObjectContainer, TSPPersistedObjectUUIDMap, NSHashTable, TSPComponentExternalReferenceMap, NSMutableArray, NSMutableSet, TSPPackageMetadata, NSString;

@interface TSPPackageWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPExternalReferenceDelegate, TSPPersistedObjectUUIDMapDelegate, TSPObjectModifyDelegate> {

	Ac _didWriteObjectContainer;
	TSPObjectContext* _context;
	unsigned char _packageIdentifier;
	TSPDocumentRevision* _documentRevision;
	unsigned long long _fileFormatVersion;
	unsigned long long _saveToken;
	int _preferredPackageType;
	TSPObject* _metadataObject;
	TSPDataAttributesSnapshot* _dataAttributesSnapshot;
	TSPObjectReferenceMap* _objectReferenceMap;
	TSPArchiverManager* _archiverManager;
	NSObject*<OS_dispatch_group> _completionGroup;
	unordered_map<const long long, TSP::ComponentPropertiesSnapshot, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot> > >* _componentPropertiesSnapshot;
	NSObject*<OS_dispatch_queue> _componentQueue;
	unordered_map<const long long, TSP::WrittenComponentInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenComponentInfo> > >* _writtenComponents;
	unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _skippedComponents;
	map<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > > > > >* _remainingComponentsQueue;
	TSUPathSet* _packageLocatorPathSet;
	TSPObjectContainer* _objectContainer;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;
	NSObject*<OS_dispatch_queue> _modifyObjectQueue;
	NSHashTable* _modifiedObjectsDuringWrite;
	char _captureSnapshots;
	NSObject*<OS_dispatch_queue> _externalLazyReferencesQueue;
	TSPComponentExternalReferenceMap* _externalLazyReferencesMap;
	NSObject*<OS_dispatch_queue> _objectsQueue;
	unordered_map<const long long, TSP::WrittenObjectInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo> > >* _writtenObjects;
	queue<TSP::WrittenObjectInfo, std::__1::deque<TSP::WrittenObjectInfo, std::__1::allocator<TSP::WrittenObjectInfo> > >* _writtenLazyReferences;
	NSObject*<OS_dispatch_queue> _externalReferenceQueue;
	NSMutableArray* _externalReferenceBlocks;
	NSMutableSet* _duplicateUUIDs;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;
	NSHashTable* _referencedDatas;
	NSMutableArray* _dataFinalizeHandlers;
	char _writeSuccess;
	char _isRecoverableError;
	char _isCancelled;
	char _didWriteRootObject;
	char _didWriteMetadata;
	NSURL* _documentTargetURL;
	NSURL* _relativeURLForExternalData;
	TSPPackageMetadata* _packageMetadata;

}

@property (nonatomic,readonly) TSPPackageMetadata * packageMetadata;              //@synthesize packageMetadata=_packageMetadata - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * relativeURLForExternalData;                //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
-(id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(int)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 ;
-(NSURL *)relativeURLForExternalData;
-(unsigned)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 error:(id*)arg4 ;
-(void)stopCapturingSnapshots;
-(void)enumerateWrittenObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)updateObjectContextForSuccessfulSaveWithPackageWriter:(id)arg1 packageURL:(id)arg2 ;
-(unsigned)objectTargetType;
-(void)willModifyObject:(id)arg1 duringReadOperation:(char)arg2 shouldCaptureSnapshot:(char)arg3 ;
-(void)didReferenceData:(id)arg1 ;
-(id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 ;
-(void)persistedObjectUUIDMap:(id)arg1 foundDuplicateUUID:(id)arg2 firstObjectLocation:(ObjectLocation)arg3 secondObjectLocation:(ObjectLocation)arg4 ;
-(id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(int)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 packageWriteCoordinator:(id)arg9 captureSnapshots:(char)arg10 ;
-(void)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)createPackageMetadataWritingDatasWithPackageWriter:(id)arg1 saveOperationState:(id)arg2 ;
-(void)writeRootObjectAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)writeRemainingRootObjectsAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)writeRemainingComponentsWithPackageWriter:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueRootObject:(id)arg1 forceArchive:(char)arg2 isAddingDelayedObjectReferencedByObjectContainer:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)enqueueRootObjectImpl:(id)arg1 forceArchive:(char)arg2 isAddingDelayedObjectReferencedByObjectContainer:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)enqueueComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(char)arg3 ;
-(char)isComponentPersisted:(id)arg1 ;
-(char)shouldEnqueueComponent:(id)arg1 ;
-(void)nextComponentAndRootObjectForComponentWriteWithCompletion:(/*^block*/id)arg1 ;
-(void)writeComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(char)arg3 withPackageWriter:(id)arg4 ;
-(char)shouldArchiveComponent:(id)arg1 checkForceArchive:(char)arg2 ;
-(void)archiveComponent:(id)arg1 locator:(id)arg2 storeOutsideObjectArchive:(char)arg3 rootObject:(id)arg4 withPackageWriter:(id)arg5 ;
-(void)copyComponent:(id)arg1 locator:(id)arg2 packageWriter:(id)arg3 ;
-(void)writeExternalReferences:(id)arg1 andUpdateLazyReferences:(id)arg2 withPackageWriter:(id)arg3 forComponent:(id)arg4 locator:(id)arg5 ;
-(void)setArchivedObjects:(id)arg1 componentObjectUUIDMap:(id)arg2 objectReferenceMap:(id)arg3 externalStrongReferences:(id)arg4 externalWeakReferences:(id)arg5 featureInfos:(id)arg6 dataReferences:(id)arg7 forComponent:(id)arg8 ;
-(char)shouldLinkComponentOfObject:(id)arg1 ;
-(void)updateExternalReferencesForLinkedComponent:(id)arg1 ;
-(char)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2 ;
-(id)componentForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 ;
-(id)explicitComponentRootObjectForObject:(id)arg1 archiverOrNil:(id)arg2 claimingComponent:(id)arg3 newClaimingComponent:(id)arg4 hasArchiverAccessLock:(char)arg5 ;
-(void)addDelayedObject:(id)arg1 forComponentRootObject:(id)arg2 claimingComponent:(id)arg3 isDelayedObjectReferencedByObjectContainer:(char)arg4 completion:(/*^block*/id)arg5 ;
-(char)shouldArchiveComponent:(id)arg1 ;
-(char)isComponentExternal:(id)arg1 wasWritten:(char*)arg2 wasCopied:(char*)arg3 ;
-(void)calculateExternalReferences;
-(unsigned)objectTargetTypeForComponentWriter:(id)arg1 ;
-(id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(char)arg5 ;
-(void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)componentWriterNeedsDocumentRecovery:(id)arg1 ;
-(void)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)componentWriter:(id)arg1 object:(id)arg2 belongsToLinkedComponent:(id)arg3 ;
-(void)addDataFinalizeHandlerForSuccessfulSave:(/*^block*/id)arg1 ;
-(long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3 ;
-(id)explicitComponentRootObjectForObject:(id)arg1 ;
-(char)didWriteObject:(id)arg1 claimingComponent:(id*)arg2 ;
-(char)didWriteComponent:(id)arg1 wasCopied:(char*)arg2 ;
-(char)didWriteData:(id)arg1 ;
-(TSPPackageMetadata *)packageMetadata;
-(id)init;
-(void)dealloc;
-(id)objectForIdentifier:(long long)arg1 ;
@end
