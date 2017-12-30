/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying> {

	unordered_map<NSUUID *, TSP::ObjectLocation, TSP::NSUUIDHash, TSP::NSUUIDEqualTo, std::__1::allocator<std::__1::pair<NSUUID *const, TSP::ObjectLocation> > >* _map;

}

@property (nonatomic,readonly) unsigned count; 
-(char)setObjectLocation:(ObjectLocation)arg1 forUUID:(id)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4 ;
-(id)initWithPersistedObjectUUIDMap:(id)arg1 ;
-(id)descriptionForComponentIdentifier:(long long)arg1 objectIdentifier:(long long)arg2 delegate:(id)arg3 ;
-(id)initWithComponentsDictionary:(id)arg1 isLoadingDocument:(char)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4 ;
-(ObjectLocation)objectLocationForUUID:(id)arg1 ;
-(void)didUpdateUUIDDuringRead:(id)arg1 forComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 originalUUID:(id)arg4 isDuplicatedUUID:(char)arg5 delegate:(id)arg6 ;
-(void)didUpdateObjectIdentifierDuringRead:(long long)arg1 forUUID:(id)arg2 componentIdentifier:(long long)arg3 originalObjectIdentifier:(long long)arg4 delegate:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
@end

