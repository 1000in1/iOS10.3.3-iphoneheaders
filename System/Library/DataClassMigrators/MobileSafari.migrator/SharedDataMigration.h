/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SharedDataMigration : NSObject
+(void)migratePersistentStorageDefaults;
+(char)migrateRecentSearches;
+(char)migrateThumbnails;
+(id)_userCachesDirectoryPath;
+(char)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(char)arg3 ;
@end

