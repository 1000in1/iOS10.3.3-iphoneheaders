/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, IMManagedObjectIDMonitorObserver;
@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSString, NSPredicate, NSSet, NSObject, NSMapTable, NSMutableSet;

@interface IMManagedObjectIDMonitor : NSObject {

	NSManagedObjectContext* _context;
	NSPersistentStoreCoordinator* _coordinator;
	NSString* _entityName;
	NSPredicate* _predicate;
	NSString* _mapProperty;
	NSSet* _propertiesOfInterest;
	NSObject*<OS_dispatch_queue> _sync;
	id<IMManagedObjectIDMonitorObserver> _observer;
	NSMapTable* _mocToChangesMap;
	NSMutableSet* _currentObjectIdentifiers;

}

@property (nonatomic,readonly) NSManagedObjectContext * context;                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator;                        //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                                             //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) NSString * mapProperty;                                            //@synthesize mapProperty=_mapProperty - In the implementation block
@property (nonatomic,readonly) NSSet * propertiesOfInterest;                                      //@synthesize propertiesOfInterest=_propertiesOfInterest - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sync;                                 //@synthesize sync=_sync - In the implementation block
@property (nonatomic,__weak,readonly) id<IMManagedObjectIDMonitorObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSMapTable * mocToChangesMap;                                      //@synthesize mocToChangesMap=_mocToChangesMap - In the implementation block
@property (nonatomic,readonly) NSMutableSet * currentObjectIdentifiers;                           //@synthesize currentObjectIdentifiers=_currentObjectIdentifiers - In the implementation block
@property (copy,readonly) NSSet * currentIdentifiers; 
-(void)_managedObjectContextWillSave:(id)arg1 ;
-(char)_objectHasChangesOfInterest:(id)arg1 ;
-(id)initWithContext:(id)arg1 coordinator:(id)arg2 entityName:(id)arg3 predicate:(id)arg4 mapProperty:(id)arg5 propertiesOfInterest:(id)arg6 observer:(id)arg7 ;
-(NSSet *)currentIdentifiers;
-(NSString *)mapProperty;
-(NSSet *)propertiesOfInterest;
-(NSMapTable *)mocToChangesMap;
-(NSMutableSet *)currentObjectIdentifiers;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(void)dealloc;
-(NSManagedObjectContext *)context;
-(NSPredicate *)predicate;
-(id<IMManagedObjectIDMonitorObserver>)observer;
-(NSObject*<OS_dispatch_queue>)sync;
-(NSPersistentStoreCoordinator *)coordinator;
-(NSString *)entityName;
@end

