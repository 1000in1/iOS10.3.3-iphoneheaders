/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPObjectDelegate;
@class NSUUID, TSPUnknownContent, TSPComponent, TSUUUIDPath, NSString, TSPObjectContext;

@interface TSPObject : NSObject {

	Aq _identifier;
	Aq _modifyObjectToken;
	NSUUID* _UUID;
	TSPUnknownContent* _unknownContent;
	TSPComponent* _component;
	id<TSPObjectDelegate> _delegate;
	long long _unarchiverIdentifier;

}

@property (nonatomic,readonly) TSUUUIDPath * objectUUIDPath; 
@property (nonatomic,readonly) char tsp_isInDocument; 
@property (assign,nonatomic) long long tsp_identifier; 
@property (nonatomic,readonly) long long tsp_unarchiverIdentifier;                   //@synthesize unarchiverIdentifier=_unarchiverIdentifier - In the implementation block
@property (nonatomic,readonly) TSPUnknownContent * tsp_unknownContent;               //@synthesize unknownContent=_unknownContent - In the implementation block
@property (assign,nonatomic) long long tsp_modifyObjectToken; 
@property (assign,nonatomic,__weak) TSPComponent * tsp_component;                    //@synthesize component=_component - In the implementation block
@property (assign,nonatomic,__weak) id<TSPObjectDelegate> tsp_delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char needsArchiving; 
@property (nonatomic,readonly) char isCommandObject; 
@property (nonatomic,copy) NSUUID * objectUUID; 
@property (nonatomic,readonly) TSPObject * componentRootObject; 
@property (nonatomic,readonly) char allowsImplicitComponentOwnership; 
@property (nonatomic,readonly) char shouldDelayArchiving; 
@property (nonatomic,readonly) unsigned delayedArchivingPriority; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) char isComponentRoot; 
@property (nonatomic,readonly) char storeOutsideObjectArchive; 
@property (nonatomic,readonly) unsigned allowedObjectTargetTypes; 
@property (nonatomic,readonly) TSPObjectContext * context; 
@property (nonatomic,readonly) NSString * tsp_description; 
@property (nonatomic,readonly) char tsp_isPersisted; 
+(char)needsObjectUUID;
+(id)newObjectForUnarchiver:(id)arg1 ;
+(char)tsp_isTransientObjectIdentifier:(long long)arg1 ;
+(id)tsp_deserializeFromData:(id)arg1 options:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)deallocSOS;
-(id)initBaseObjectWithContext:(id)arg1 ;
-(NSString *)packageLocator;
-(void)willModifyForUpgrade;
-(id)initFromUnarchiver:(id)arg1 ;
-(id)initBaseObjectFromUnarchiver:(id)arg1 ;
-(void)setObjectUUID:(id)arg1 updatingObjectUUIDMap:(char)arg2 ;
-(void)willModify;
-(id)tsp_descriptionWithDepth:(unsigned)arg1 ;
-(char)needsArchiving;
-(id)initDocumentObjectWithContext:(id)arg1 ;
-(void)performBlockIgnoringModifications:(/*^block*/id)arg1 ;
-(char)isComponentRoot;
-(char)storeOutsideObjectArchive;
-(unsigned)allowedObjectTargetTypes;
-(void)willModifyToComponentRootObject:(id)arg1 ;
-(TSPObject *)componentRootObject;
-(char)allowsImplicitComponentOwnership;
-(char)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)didLoadChildObjectFromDocumentSupport:(id)arg1 ;
-(char)isCommandObject;
-(char)tsp_isPersisted;
-(void)saveToArchiver:(id)arg1 ;
-(void)didFinishUnarchiving;
-(void)resetObjectUUIDWithoutUpdatingObjectUUIDMap;
-(NSString *)tsp_description;
-(long long)tsp_identifier;
-(void)setTsp_identifier:(long long)arg1 ;
-(long long)tsp_modifyObjectToken;
-(void)setTsp_modifyObjectToken:(long long)arg1 ;
-(long long)tsp_unarchiverIdentifier;
-(TSPUnknownContent *)tsp_unknownContent;
-(TSPComponent *)tsp_component;
-(void)setTsp_component:(TSPComponent *)arg1 ;
-(id<TSPObjectDelegate>)tsp_delegate;
-(void)setTsp_delegate:(id<TSPObjectDelegate>)arg1 ;
-(void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 objectMap:(id*)arg3 error:(id*)arg4 ;
-(id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)tsp_serializeToDataWithOptions:(id)arg1 dataReferences:(id*)arg2 error:(id*)arg3 ;
-(id)tsp_serializeToDataWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)tsp_deepCopyWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tsp_deepCopyWithOptions:(id)arg1 ;
-(void)wasAddedToDocumentDuringUnarchiveWithContext:(id)arg1 ;
-(id)tsp_objectInfoWithDepth:(unsigned)arg1 ;
-(id)tsp_referencedData;
-(id)tsp_referencedObjects;
-(id)tsp_referencedObjectUUIDs;
-(void)wasAddedToDocumentWithContext:(id)arg1 options:(unsigned)arg2 ;
-(char)tsp_isInDocument;
-(TSUUUIDPath *)objectUUIDPath;
-(void)wasAddedToDocumentWithContext:(id)arg1 ;
-(void)wasAddedToDocumentDuringImportWithContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentWithContext:(id)arg1 ;
-(void)didInitFromSOS;
-(id)objectLocale;
-(char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(char)documentIsRTL;
-(id)owningDocument;
-(id)init;
-(void)dealloc;
-(TSPObjectContext *)context;
-(id)initWithContext:(id)arg1 ;
-(id)initCommon;
-(NSUUID *)objectUUID;
-(void)setObjectUUID:(NSUUID *)arg1 ;
-(id)documentRoot;
@end

