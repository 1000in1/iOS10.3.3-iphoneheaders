/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSUKeychainUtils : NSObject
+(char)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 account:(id)arg6 error:(id*)arg7 ;
+(char)lookupGenericItem:(id)arg1 account:(id*)arg2 passphrase:(id*)arg3 error:(id*)arg4 ;
+(char)removeGenericItem:(id)arg1 error:(id*)arg2 ;
+(char)setPassphrase:(id)arg1 forGenericItem:(id)arg2 service:(id)arg3 description:(id)arg4 label:(id)arg5 error:(id*)arg6 ;
+(char)lookupGenericItem:(id)arg1 passphrase:(id*)arg2 error:(id*)arg3 ;
@end

