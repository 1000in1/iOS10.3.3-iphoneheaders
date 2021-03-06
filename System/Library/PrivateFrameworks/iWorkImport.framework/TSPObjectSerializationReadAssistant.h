/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDecoderReadCoordinatorDelegate.h>

@class TSPObjectContext, NSDictionary, TSPComponent, NSString;

@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {

	TSPObjectContext* _context;
	NSDictionary* _identifierToObjectUUIDDictionary;
	NSDictionary* _dataInfos;
	TSPComponent* _rootObjectComponent;
	char _resetObjectUUIDs;
	char _shouldDecodeMissingDataAsRemote;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
-(unsigned long long)fileFormatVersion;
-(char)hasDocumentVersionUUID;
-(long long)objectIdentifierForUUID:(id)arg1 ;
-(id)cachedMetadataObject;
-(id)metadataComponent;
-(char)processMetadataObject:(id)arg1 error:(id*)arg2 ;
-(id)rootObjectComponent;
-(char)canResolveExternalReferences;
-(char)shouldResolveExternalReferencesUsingObjectUUID;
-(id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1 ;
-(id)cachedDataForIdentifier:(long long)arg1 ;
-(id)dataInfoForIdentifier:(long long)arg1 ;
-(char)shouldDecodeMissingDataAsRemote;
-(char)isCrossDocumentPaste;
-(char)isCrossAppPaste;
-(id)decodeObjectWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(int)sourceType;
@end

