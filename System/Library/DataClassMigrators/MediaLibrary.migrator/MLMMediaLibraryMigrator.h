/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MediaLibrary.migrator/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class ML3MusicLibrary;

@interface MLMMediaLibraryMigrator : DataClassMigrator {

	ML3MusicLibrary* _library;
	char _migrated;

}
-(float)migrationProgress;
-(id)init;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end

