/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPExternalReferenceDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPObjectContext;

@interface TSPObjectReferenceMap : NSObject {

	TSPObjectContext* _context;
	id<TSPExternalReferenceDelegate> _delegate;
	unordered_map<const long long, TSP::ReferenceMapInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ReferenceMapInfo> > >* _inverseReferenceMap;
	unordered_map<const long long, __unsafe_unretained Class, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, __unsafe_unretained Class> > >* _classMap;

}
-(id)descriptionOfAllPossiblePathsToObjectIdentifier:(long long)arg1 withLimit:(unsigned)arg2 ;
-(void)addReferenceFromObjectIdentifier:(long long)arg1 toObjectIdentifier:(long long)arg2 ;
-(id)parentObjectsForObjectIdentifier:(long long)arg1 ;
-(unsigned)visitObjectWithIdentifier:(long long)arg1 level:(unsigned)arg2 mode:(int)arg3 limit:(unsigned)arg4 pathSuffix:(id)arg5 visitedObjectIdentifiers:(id)arg6 updatingParentObjectPaths:(id)arg7 ;
-(id)parentObjectPathsForObjectIdentifier:(long long)arg1 limit:(unsigned)arg2 totalParentObjects:(unsigned*)arg3 ;
-(void)addReferenceFromObjectIdentifier:(long long)arg1 toObjectOrLazyReference:(id)arg2 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 externalReferencesFromComponent:(id)arg3 ;
-(id)parentObjectsForObject:(id)arg1 ;
-(id)descriptionOfAllPossiblePathsToObject:(id)arg1 withLimit:(unsigned)arg2 ;
-(char)hasParentsForObjectIdentifier:(long long)arg1 ;
-(void)addReferencesFromObject:(id)arg1 archiver:(id)arg2 ;
-(void)mergeWithObjectReferenceMap:(id)arg1 ;
-(void)addObjectReferenceMap:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
@end

