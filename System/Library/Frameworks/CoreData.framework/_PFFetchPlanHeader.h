/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSFetchRequest, NSSQLiteStatement, NSPersistentStore, NSSQLModel, NSSQLEntity, NSManagedObjectContext, NSSQLRowCache;

@interface _PFFetchPlanHeader : NSObject {

	NSFetchRequest* fetch_request;
	NSSQLiteStatement* cached_sql_statement;
	unsigned requested_batch_size;
	NSPersistentStore* sql_core;
	NSSQLModel* sql_model;
	NSSQLEntity* statement_entity;
	NSManagedObjectContext* current_context;
	NSSQLRowCache* row_cache;
	/*function pointer*/void* entity_for_ek_funptr;
	struct {
		unsigned principal_entity_has_subentities : 1;
		unsigned fetch_only_primary_keys : 1;
		unsigned fetch_results_style : 3;
		unsigned use_clean_memory : 1;
		unsigned _reserved : 26;
	}  flags;

}
@end

