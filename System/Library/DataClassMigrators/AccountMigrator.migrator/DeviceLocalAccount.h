/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountMigrator/BasicAccount.h>
#import <AccountMigrator/AccountCreationProtocol.h>

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>
+(id)_identifier;
+(id)accountWithBasicAccount:(id)arg1 ;
+(id)basicAccountProperties;
+(id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(char)arg2 ;
+(id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1 ;
+(char)isTetheredSyncingDataclass:(id)arg1 ;
+(id)tetheredSourceForDataClass:(id)arg1 ;
+(id)typeString;
-(id)identifier;
-(id)displayName;
-(id)syncStoreIdentifier;
@end

