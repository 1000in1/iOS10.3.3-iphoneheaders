/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSPersistentStoreCoordinator, NSSQLitePrefetchRequestCache, NSMutableDictionary, NSObject;

@interface NSXPCStoreServerPerConnectionCache : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSSQLitePrefetchRequestCache* _prefetchRequestCache;
	NSMutableDictionary* _generationTokenMap;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(id)initWithCoordinator:(id)arg1 ;
-(void)registerQueryGeneration:(id)arg1 forRemoteGeneration:(id)arg2 ;
-(id)localGenerationForRemoteGeneration:(id)arg1 ;
-(void)releaseQueryGenerationForRemoteGeneration:(id)arg1 ;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(void)dealloc;
-(NSPersistentStoreCoordinator *)coordinator;
@end

