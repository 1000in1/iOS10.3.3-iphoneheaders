/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/CloudRecentsMigrator.migrator/CloudRecentsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface CloudRecentsMigrator : DataClassMigrator
-(char)migrateABRecentsData;
-(id)recentsExportPath;
-(unsigned long long)recentsExportDataSize;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(char)performMigration;
@end

