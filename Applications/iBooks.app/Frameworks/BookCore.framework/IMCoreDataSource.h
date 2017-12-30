/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSPersistentStoreCoordinator, NSManagedObjectModel, NSPersistentStore, NSMutableDictionary;

@interface IMCoreDataSource : NSObject {

	char _metadataDictionaryDirty;
	NSURL* _persistentStoreURL;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStore* _persistentStore;
	NSMutableDictionary* _metadataDictionary;

}

@property (retain) NSManagedObjectModel * managedObjectModel;                                        //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (retain) NSPersistentStore * persistentStore;                                              //@synthesize persistentStore=_persistentStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadataDictionary;                               //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (assign) char metadataDictionaryDirty;                                                     //@synthesize metadataDictionaryDirty=_metadataDictionaryDirty - In the implementation block
@property (nonatomic,readonly) NSURL * persistentStoreURL;                                           //@synthesize persistentStoreURL=_persistentStoreURL - In the implementation block
+(id)persistentStoreNameSeed;
+(id)persistentStoreVersion;
+(id)persistentStoreExtension;
+(id)persistentStoreName;
-(void)loadCoreData;
-(id)generationValue:(id)arg1 ;
-(void)setGenerationValue:(id)arg1 forKey:(id)arg2 ;
-(void)incrementGeneration:(id)arg1 ;
-(id)metadataObjectForKey:(id)arg1 ;
-(void)setMetadataObject:(id)arg1 forKey:(id)arg2 ;
-(char)metadataDictionaryDirty;
-(void)setMetadataDictionaryDirty:(char)arg1 ;
-(void)loadManagedObjectModel;
-(void)loadPersistentStoreCoordinator;
-(void)cacheMetadataDictionary;
-(id)initWithPersistentStoreURL:(id)arg1 ;
-(void)saveManagedObjectContext:(id)arg1 ;
-(id)newManagedObjectContextWithClass:(Class)arg1 ;
-(void)loadPersistentStore;
-(id)bundleForManagedObjectModel;
-(void)_loadPersistentStoreAndRetryIfNeeded:(char)arg1 ;
-(id)copyMaxSortValue:(id)arg1 forEntityName:(id)arg2 ;
-(id)copyNextSortValue:(id)arg1 forKey:(id)arg2 forEntityName:(id)arg3 ;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)saveMetaData;
-(NSURL *)persistentStoreURL;
-(id)newManagedObjectContext;
-(void)setMetadataDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metadataDictionary;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSPersistentStore *)persistentStore;
-(void)setPersistentStore:(NSPersistentStore *)arg1 ;
@end

