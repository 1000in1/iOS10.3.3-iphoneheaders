/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <MobileCoreServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSSet, NSURL, NSNumber, NSArray;

@interface _UTType : _LSQueryResult <NSSecureCoding, NSCopying>

@property (getter=_isActive,nonatomic,readonly) char _active; 
@property (getter=_isPublic,nonatomic,readonly) char _public; 
@property (getter=_isAppleInternal,nonatomic,readonly) char _appleInternal; 
@property (nonatomic,readonly) NSString * _unlocalizedDescription; 
@property (nonatomic,readonly) NSDictionary * _localizedDescriptionDictionary; 
@property (nonatomic,readonly) NSString * _kernelExtensionName; 
@property (nonatomic,readonly) NSSet * _pedigree; 
@property (nonatomic,readonly) NSURL * _iconURL; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSNumber * version; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSURL * declaringBundleURL; 
@property (nonatomic,readonly) NSDictionary * declaration; 
@property (getter=isDynamic,nonatomic,readonly) char dynamic; 
@property (getter=isDeclared,nonatomic,readonly) char declared; 
@property (nonatomic,readonly) NSDictionary * tagSpecification; 
@property (nonatomic,readonly) NSURL * referenceURL; 
@property (nonatomic,readonly) NSArray * parentIdentifiers; 
+(char)_isDeclaration:(id)arg1 equalToDeclaration:(id)arg2 ;
+(id)_localizationDictionaryForTypeWithIdentifier:(id)arg1 UUID:(id)arg2 preferredLocalizations:(id)arg3 ;
+(CFArrayRef)_copyIdentifiersWithQuery:(id)arg1 ;
-(id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 ;
-(NSDictionary *)declaration;
-(NSURL *)declaringBundleURL;
-(char)isDeclared;
-(NSDictionary *)tagSpecification;
-(char)conformsToTypeIdentifier:(id)arg1 ;
-(NSArray *)parentIdentifiers;
-(char)_isPublic;
-(char)_isAppleInternal;
-(NSString *)_unlocalizedDescription;
-(NSDictionary *)_localizedDescriptionDictionary;
-(NSString *)_kernelExtensionName;
-(NSURL *)_iconURL;
-(NSSet *)_pedigree;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
-(NSString *)identifier;
-(NSString *)localizedDescription;
-(char)_isActive;
-(NSNumber *)version;
-(char)isDynamic;
-(char)conformsToType:(id)arg1 ;
-(NSURL *)referenceURL;
@end

