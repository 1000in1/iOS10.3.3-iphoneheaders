/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Authentication/FacebookAuthenticationPlugin.bundle/FacebookAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSString;

@interface SLFacebookAuthenticator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/id _completionHandler;
	NSString* _machineId;
	int _retryCount;

}
-(id)_machineId;
-(void)signInWithCompletion:(/*^block*/id)arg1 ;
-(id)_fetchMeInfoForAccount:(id)arg1 ;
-(id)_machineIdFromResponseDictionary:(id)arg1 ;
-(id)_errorForErrorCode:(int)arg1 ;
-(id)_sanitizeResponseForLogging:(id)arg1 ;
-(void)_setMachineId:(id)arg1 ;
-(char)_isErrorTemporary:(int)arg1 ;
-(void)_processResponseDictionary:(id)arg1 ;
-(char)_isLoginApprovalRequired:(int)arg1 ;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
@end
