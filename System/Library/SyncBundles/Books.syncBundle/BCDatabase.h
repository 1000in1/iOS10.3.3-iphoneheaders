/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPersistentStoreCoordinator, NSPersistentStore, NSString;

@interface BCDatabase : NSObject {

	NSPersistentStoreCoordinator* _psc;
	NSPersistentStore* _ps;
	NSString* _path;

}
-(char)shouldRetryAddingPersistentStoreAfterError:(id)arg1 ;
-(void)dealloc;
-(id)model;
-(id)initWithDatabasePath:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(id)databaseURL;
-(id)newManagedObjectContext;
@end

