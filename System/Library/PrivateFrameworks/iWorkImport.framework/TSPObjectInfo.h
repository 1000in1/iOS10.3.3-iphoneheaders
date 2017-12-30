/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMutableSet, NSArray, NSSet;

@interface TSPObjectInfo : NSObject {

	NSHashTable* _referencedDataHashTable;
	NSHashTable* _referencedObjectsHashTable;
	NSMutableSet* _referencedObjectUUIDs;
	NSArray* _referencedData;
	NSArray* _referencedObjects;

}

@property (nonatomic,readonly) NSArray * referencedData; 
@property (nonatomic,readonly) NSArray * referencedObjects; 
@property (nonatomic,readonly) NSSet * referencedObjectUUIDs; 
-(id)initWithObject:(id)arg1 referenceDepth:(unsigned)arg2 ;
-(NSArray *)referencedData;
-(NSArray *)referencedObjects;
-(NSSet *)referencedObjectUUIDs;
-(void)visitObject:(id)arg1 rootObject:(id)arg2 referenceDepth:(unsigned)arg3 ;
-(void)visitObjectReferences:(id)arg1 rootObject:(id)arg2 referenceDepth:(unsigned)arg3 ;
-(id)init;
@end

