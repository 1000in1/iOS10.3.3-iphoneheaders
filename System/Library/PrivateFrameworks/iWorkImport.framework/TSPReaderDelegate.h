/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID;


@protocol TSPReaderDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) NSUUID * baseObjectUUID; 
@property (nonatomic,readonly) char isReadingFromDocument; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,readonly) char canRetainObjectReferencedByWeakLazyReference; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@optional
-(char)isCrossDocumentPaste;
-(char)isCrossAppPaste;
-(void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
-(void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3;
-(void)reader:(id)arg1 didResetObjectUUID:(id)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(id)arg4;

@required
-(unsigned long long)fileFormatVersion;
-(unsigned char)packageIdentifier;
-(char)canRetainObjectReferencedByWeakLazyReference;
-(char)hasDocumentVersionUUID;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(char)arg4 allowUnknownObject:(char)arg5 fromParentObject:(id)arg6 completion:(/*^block*/id)arg7;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(char)arg3 allowUnknownObject:(char)arg4 fromParentObject:(id)arg5 completion:(/*^block*/id)arg6;
-(void)reader:(id)arg1 didReadLazyReference:(id)arg2;
-(char)isReadingFromDocument;
-(NSUUID *)baseObjectUUID;
-(long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
-(id)lazyReferenceDelegateForReader:(id)arg1;
-(id)contextForReader:(id)arg1;
-(id)objectDelegateForReader:(id)arg1;
-(int)sourceType;

@end
