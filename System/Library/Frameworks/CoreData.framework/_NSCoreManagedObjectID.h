/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
+(char)accessInstanceVariablesDirectly;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)_storeInfo1;
+(void)_setStoreInfo1:(id)arg1 ;
+(char*)generatedNameSuffix;
+(id)_retain_1;
+(void)_release_1;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_storeDeallocated;
+(void)release;
+(id)alloc;
+(void)initialize;
+(id)retain;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(int)version;
-(id)_storeInfo1;
-(id)_storeIdentifier;
-(char)_isPersistentStoreAlive;
-(oneway void)release;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)entity;
-(char)isTemporaryID;
-(id)entityName;
-(id)URIRepresentation;
-(void)finalize;
-(id)persistentStore;
@end

