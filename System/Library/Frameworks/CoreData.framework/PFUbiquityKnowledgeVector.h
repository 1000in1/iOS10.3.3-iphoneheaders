/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {

	NSDictionary* _kv;
	NSDictionary* _storeKVDict;
	unsigned _hash;

}

@property (nonatomic,readonly) unsigned hash;                //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) unsigned length; 
+(id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1 ;
+(id)createKnowledgeVectorDictionaryFromString:(id)arg1 ;
-(id)transactionNumberForPeerID:(id)arg1 ;
-(id)initWithStoreKnowledgeVectorDictionary:(id)arg1 ;
-(void)updateWithKnowledgeVector:(id)arg1 ;
-(char)isZeroVector;
-(char)isAncestorOfKnowledgeVector:(id)arg1 ;
-(id)allPeerIDs;
-(char)conflictsWithKnowledgeVector:(id)arg1 ;
-(id)createStoreKnowledgeVectorDictionary;
-(id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1 ;
-(id)createKnowledgeVectorString;
-(id)newKnowledgeVectorBySubtractingVector:(id)arg1 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 ;
-(id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1 ;
-(id)createAncestorVectorForConflictingVector:(id)arg1 ;
-(id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1 ;
-(id)createSetOfAllPeerIDsWithOtherVector:(id)arg1 ;
-(void)_updateHash;
-(id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned)arg3 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2 ;
-(id)initWithKnowledgeVectorString:(id)arg1 ;
-(char)hasPeerIDInCommonWith:(id)arg1 ;
-(char)isDescendantOfKnowledgeVector:(id)arg1 ;
-(void)decrementToMinimumWithKnowledgeVector:(id)arg1 ;
-(char)canMergeWithKnowledgeVector:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)compare:(id)arg1 ;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

