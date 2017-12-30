/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPReadCoordinatorBase.h>
#import <iWorkImport/TSPPersistedObjectUUIDMapDelegate.h>
#import <iWorkImport/TSPReadCoordinator.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class TSPObjectContext, NSUUID, TSPObject, TSPPackage, NSURL, TSPFinalizeHandlerQueue, TSPDocumentResourceDataProvider, TSPPackageMetadata, TSPPersistedObjectUUIDMap, NSMutableSet, NSObject, NSError, NSMutableArray, NSMapTable, NSSet, TSPDocumentRevision, NSString;

@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPPersistedObjectUUIDMapDelegate, TSPReadCoordinator> {

	TSPObjectContext* _context;
	NSUUID* _documentUUID;
	TSPObject* _documentObject;
	TSPPackage* _package;
	NSURL* _packageURL;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;
	TSPDocumentResourceDataProvider* _documentResourceDataProvider;
	char _areExternalDataReferencesAllowed;
	char _skipDocumentUpgrade;
	unsigned long long _readVersion;
	TSPPackageMetadata* _cachedMetadata;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;
	vector<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation>, std::__1::allocator<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation> > >* _persistedUUIDMapOperations;
	NSMutableSet* _duplicatedUUIDs;
	NSMutableSet* _componentIdentifiersWithDuplicatedUUIDs;
	NSObject*<OS_dispatch_queue> _errorQueue;
	NSError* _error;
	NSObject*<OS_dispatch_group> _completionGroup;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSObject*<OS_dispatch_queue> _ioCompletionQueue;
	NSObject*<OS_dispatch_queue> _readCompletionQueue;
	NSObject*<OS_dispatch_queue> _componentQueue;
	unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readIdentifiers;
	NSMutableArray* _componentsToUpgrade;
	NSObject*<OS_dispatch_queue> _objectQueue;
	NSMapTable* _objects;
	unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readExternalObjects;
	char _losesDataOnWrite;
	char _didRequireUpgrade;
	NSSet* _unsupportedFeatureIdentifiers;
	TSPDocumentRevision* _documentRevision;
	int _preferredPackageType;
	TSPObject* _metadataObject;
	unsigned long long _saveToken;

}

@property (nonatomic,readonly) char losesDataOnWrite;                               //@synthesize losesDataOnWrite=_losesDataOnWrite - In the implementation block
@property (nonatomic,readonly) NSSet * unsupportedFeatureIdentifiers;               //@synthesize unsupportedFeatureIdentifiers=_unsupportedFeatureIdentifiers - In the implementation block
@property (nonatomic,readonly) TSPDocumentRevision * documentRevision;              //@synthesize documentRevision=_documentRevision - In the implementation block
@property (nonatomic,readonly) unsigned long long saveToken;                        //@synthesize saveToken=_saveToken - In the implementation block
@property (nonatomic,readonly) int preferredPackageType;                            //@synthesize preferredPackageType=_preferredPackageType - In the implementation block
@property (nonatomic,readonly) TSPObject * metadataObject;                          //@synthesize metadataObject=_metadataObject - In the implementation block
@property (nonatomic,readonly) char didRequireUpgrade;                              //@synthesize didRequireUpgrade=_didRequireUpgrade - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isReadingFromDocument; 
-(unsigned long long)saveToken;
-(unsigned long long)fileFormatVersion;
-(TSPDocumentRevision *)documentRevision;
-(unsigned char)packageIdentifier;
-(id)readPackageMetadataWithError:(id*)arg1 ;
-(id)initWithContext:(id)arg1 package:(id)arg2 packageURLOrNil:(id)arg3 finalizeHandlerQueue:(id)arg4 documentResourceDataProvider:(id)arg5 areExternalDataReferencesAllowed:(char)arg6 skipDocumentUpgrade:(char)arg7 ;
-(int)preferredPackageType;
-(TSPObject *)metadataObject;
-(void)updateObjectContextForSuccessfulRead;
-(char)didRequireUpgrade;
-(char)losesDataOnWrite;
-(NSSet *)unsupportedFeatureIdentifiers;
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)requestDocumentResourcesUsingDataProvider:(id)arg1 ;
-(char)canRetainObjectReferencedByWeakLazyReference;
-(char)hasDocumentVersionUUID;
-(id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 ;
-(void)persistedObjectUUIDMap:(id)arg1 foundDuplicateUUID:(id)arg2 firstObjectLocation:(ObjectLocation)arg3 secondObjectLocation:(ObjectLocation)arg4 ;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(char)arg4 allowUnknownObject:(char)arg5 fromParentObject:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(char)arg3 allowUnknownObject:(char)arg4 fromParentObject:(id)arg5 completion:(/*^block*/id)arg6 ;
-(char)isReadingFromDocument;
-(void)didUpdateLazyReferenceDelegate:(id)arg1 ;
-(id)baseObjectUUID;
-(id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(char)arg2 ;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(char)arg3 ;
-(void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2 ;
-(long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2 ;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2 ;
-(long long)metadataObjectIdentifier;
-(void)postprocessMetadata:(id)arg1 ;
-(void)p_readComponent:(id)arg1 additionalComponents:(id)arg2 requireUpgrade:(char)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)readPackageMetadataWithComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)p_readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)readComponentIfNeededAsync:(id)arg1 ;
-(void)prepareForFullDocumentUpgradeImpl;
-(void)readComponentAsync:(id)arg1 ;
-(void)didReadObjects:(id)arg1 forComponent:(id)arg2 packageIdentifier:(unsigned char)arg3 ;
-(void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)preprocessMetadata:(id)arg1 ;
-(unsigned long long)fileFormatVersionFromMetadataMessage:(const PackageMetadata*)arg1 ;
-(id)newObjectUUIDForObjectIdentifier:(long long)arg1 ;
-(void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(char)arg3 fromComponent:(id)arg4 ;
-(void)prepareForFullDocumentUpgrade;
-(void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3 ;
-(void)reader:(id)arg1 didResetObjectUUID:(id)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(id)arg4 ;
-(id)init;
-(id)context;
-(int)sourceType;
-(id)error;
-(void)setError:(id)arg1 ;
@end

