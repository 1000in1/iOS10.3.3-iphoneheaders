/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupport/CPExclusiveLock.h>

@interface ACAccountMigrationLock : CPExclusiveLock
+(void)signalMigrationFinished;
+(id)_currentSystemVersion;
+(char)migrationFinished;
+(id)createAccountMigrationLock;
+(void)writeMigrationVersionPref;
@end

