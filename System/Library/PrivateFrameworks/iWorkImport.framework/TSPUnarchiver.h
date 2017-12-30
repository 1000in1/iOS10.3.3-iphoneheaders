/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPObjectDelegate, TSPLazyReferenceDelegate, TSPUnarchiverDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPUnknownContent, NSUUID, TSPObjectContext;

@interface TSPUnarchiver : NSObject {

	unsigned _messageType;
	auto_ptr<google::protobuf::Message>* _message;
	long long _objectIdentifier;
	auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >* _strongReferences;
	unsigned long long _messageVersion;
	TSPUnknownContent* _unknownContent;
	id<TSPObjectDelegate> _objectDelegate;
	id<TSPLazyReferenceDelegate> _lazyReferenceDelegate;
	id<TSPUnarchiverDelegate> _delegate;
	vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> >* _references;
	vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> >* _repeatedReferences;
	vector<void ()(), std::__1::allocator<void ()()> >* _finalizeHandlers;
	FieldPath* _currentFieldPath;

}

@property (nonatomic,readonly) char hasPreUFFVersion; 
@property (nonatomic,readonly) unsigned long long preUFFVersion; 
@property (nonatomic,readonly) char isFromCopy; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@property (nonatomic,readonly) long long objectIdentifier;                               //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * objectUUID; 
@property (nonatomic,readonly) TSPUnknownContent * unknownContent;                       //@synthesize unknownContent=_unknownContent - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPObjectDelegate> objectDelegate;              //@synthesize objectDelegate=_objectDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<TSPUnarchiverDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char canValidateReferences; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,__weak,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) unsigned messageType;                                     //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) unsigned long long messageVersion;                        //@synthesize messageVersion=_messageVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) char documentHasCurrentFileFormatVersion; 
@property (nonatomic,readonly) int sourceType; 
-(TSPUnknownContent *)unknownContent;
-(id<TSPObjectDelegate>)objectDelegate;
-(unsigned long long)fileFormatVersion;
-(void)pushScopeForField:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)strongReferences;
-(void)readWeakReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readReferenceMessage:(const Reference*)arg1 isWeak:(char)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 weakSelector:(SEL)arg6 completion:(/*^block*/id)arg7 ;
-(void)validateReferenceToObjectIdentifier:(long long)arg1 isWeak:(char*)arg2 validateStrongReferences:(char)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5 ;
-(void)readRepeatedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 isWeak:(char)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 completion:(/*^block*/id)arg6 ;
-(void)readRepeatedWeakReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readLazyReferenceMessage:(const Reference*)arg1 ownershipMode:(int)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)readWeakLazyReferenceMessage:(const Reference*)arg1 retainObjectUntilArchived:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakLazyReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 ownershipMode:(int)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 retainObjectUntilArchived:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)readRepeatedWeakLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(char)hasDocumentVersionUUID;
-(void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)canValidateReferences;
-(void)readReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readUnownedReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedUnownedReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readLazyReferenceMessage:(const Reference*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readDataReferenceMessage:(const DataReference*)arg1 ;
-(char)documentHasCurrentFileFormatVersion;
-(void)addFinalizeHandler:(/*^block*/id)arg1 ;
-(id)readWeakObjectUUIDReferenceMessage:(const UUID*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readWeakObjectUUIDPathReferenceMessage:(const UUIDPath*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readRepeatedWeakObjectUUIDReferenceMessage:(const RepeatedPtrField<TSP::UUID>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const RepeatedPtrField<TSP::UUIDPath>*)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMessageType:(unsigned)arg1 message:(auto_ptr<google::protobuf::Message>*)arg2 identifier:(long long)arg3 strongReferences:(auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >*)arg4 messageVersion:(unsigned long long)arg5 unknownContent:(id)arg6 objectDelegate:(id)arg7 lazyReferenceDelegate:(id)arg8 delegate:(id)arg9 ;
-(vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> >*)repeatedReferences;
-(vector<void ()(), std::__1::allocator<void ()()> >*)finalizeHandlers;
-(void)readRepeatedLazyReferenceMessage:(const RepeatedPtrField<TSP::Reference>*)arg1 ownershipMode:(int)arg2 validateStrongReferences:(char)arg3 allowUnknownObject:(char)arg4 selector:(SEL)arg5 completion:(/*^block*/id)arg6 ;
-(void)readReferenceMessage1:(const Reference*)arg1 message2:(const Reference*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakReferenceMessage1:(const Reference*)arg1 message2:(const Reference*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readReferenceMessage:(const Reference*)arg1 repeatedMessage:(const RepeatedPtrField<TSP::Reference>*)arg2 completion:(/*^block*/id)arg3 ;
-(void)readWeakReferenceMessage:(const Reference*)arg1 repeatedMessage:(const RepeatedPtrField<TSP::Reference>*)arg2 completion:(/*^block*/id)arg3 ;
-(char)isCrossDocumentPaste;
-(char)isCrossAppPaste;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >Ref)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >Ref)arg1 ;
-(unsigned long long)preUFFVersion;
-(char)hasPreUFFVersion;
-(void)readSparseReferenceArrayMessage:(const SparseReferenceArray*)arg1 isWeak:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)readSparseReferenceArrayMessage:(const SparseReferenceArray*)arg1 completion:(/*^block*/id)arg2 ;
-(void)readSparseWeakReferenceArrayMessage:(const SparseReferenceArray*)arg1 completion:(/*^block*/id)arg2 ;
-(id)readSparseWeakObjectUUIDReferenceArrayMessage:(const SparseUUIDArray*)arg1 ;
-(id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(const SparseUUIDPathArray*)arg1 ;
-(char)isFromCopy;
-(void)dealloc;
-(id<TSPUnarchiverDelegate>)delegate;
-(TSPObjectContext *)context;
-(const Message*)message;
-(int)sourceType;
-(long long)objectIdentifier;
-(NSUUID *)objectUUID;
-(unsigned)messageType;
-(vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> >*)references;
-(unsigned long long)messageVersion;
@end

