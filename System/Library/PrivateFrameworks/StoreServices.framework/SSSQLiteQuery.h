/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreServices/StoreServices-Structs.h>
@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject {

	SSSQLiteDatabase* _database;
	SSSQLiteQueryDescriptor* _descriptor;

}

@property (readonly) SSSQLiteDatabase * database; 
@property (readonly) SSSQLiteQueryDescriptor * queryDescriptor; 
@property (readonly) int countOfEntities; 
-(id)copySelectSQLWithProperties:(const id*)arg1 count:(unsigned)arg2 ;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned)arg2 ;
-(id)copyEntityIdentifiers;
-(char)createTemporaryTableWithName:(id)arg1 properties:(const id*)arg2 count:(unsigned)arg3 ;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(int)countOfEntities;
-(SSSQLiteDatabase *)database;
-(void)enumeratePersistentIDsAndProperties:(const id*)arg1 count:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 descriptor:(id)arg2 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)bindToSelectStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(char)deleteAllEntities;
-(SSSQLiteQueryDescriptor *)queryDescriptor;
@end

