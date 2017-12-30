/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACDKeychain : NSObject
+(char)canAccessPasswordsWithPolicy:(id)arg1 ;
+(id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id*)arg6 ;
+(void)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)keychainDeletedAccounts;
+(void)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id*)arg5 ;
+(void)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(void)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(void)updateSyncItemForServiceName:(id)arg1 hostname:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(void)addSyncItemWithServiceName:(id)arg1 hostname:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id*)arg6 ;
+(id)_knownMissingKeychainItems;
+(id)_missingKeychainItemSpecifierForService:(id)arg1 username:(id)arg2 ;
+(void)_migrateKeychainItemIfNecessary:(id)arg1 ;
+(id)_knownMigratedKeychainItems;
+(char)_isKnownMigratedKeychainItem:(id)arg1 ;
+(void)_addKnownMigratedKeychainItem:(id)arg1 ;
@end

