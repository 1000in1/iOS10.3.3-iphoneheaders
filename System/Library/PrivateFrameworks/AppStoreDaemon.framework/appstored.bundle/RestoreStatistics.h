/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <appstored/appstored-Structs.h>
@interface RestoreStatistics : NSObject
+(void)addAccountWithAccountID:(id)arg1 ;
+(void)addStoreFrontWithStoreFrontID:(id)arg1 ;
+(void)addItemsWithKind:(id)arg1 count:(int)arg2 ;
+(void)addHardFailureWithKind:(id)arg1 error:(id)arg2 ;
+(void)addSoftFailureWithKind:(id)arg1 error:(id)arg2 ;
+(void)_addUniqueValue:(id)arg1 withDefaultsKey:(CFStringRef)arg2 aggregateKey:(id)arg3 ;
+(void)_addFailureWithKind:(id)arg1 downloadKind:(id)arg2 error:(id)arg3 ;
+(void)addDataRestoreFailureWithKind:(id)arg1 error:(id)arg2 ;
+(void)addInstallFailureWithKind:(id)arg1 error:(id)arg2 ;
+(void)addSuccessfulRestoreWithKind:(id)arg1 ;
+(void)addTransferFailureWithKind:(id)arg1 error:(id)arg2 ;
+(void)_addScalarValue:(long long)arg1 forKey:(id)arg2 ;
@end

