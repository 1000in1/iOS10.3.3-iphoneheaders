/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Authentication/GoogleAuthenticationPlugin.bundle/GoogleAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDAccountAuthenticationPlugin <NSObject>
@optional
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(char)isPushSupportedForAccount:(id)arg1;
-(void)discoverPropertiesForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(id)credentialForAccount:(id)arg1 client:(id)arg2;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3;
-(void)verifyCredentialsForAccount:(id)arg1 client:(id)arg2 withHandler:(/*^block*/id)arg3;
-(id)renewalIDsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3;
-(id)renewalIDForAccount:(id)arg1;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4;

@end

