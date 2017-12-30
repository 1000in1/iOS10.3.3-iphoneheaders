/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Authentication/DAAccountAuthenticator.bundle/DAAccountAuthenticator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAAccountAuthenticator/DAAccountAuthenticator-Structs.h>
#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>
#import <DAAccountAuthenticator/DAValidityCheckConsumer.h>

@class NSMutableDictionary, NSString;

@interface DAAccountAuthenticator : NSObject <ACDAccountAuthenticationPlugin, DAValidityCheckConsumer> {

	NSMutableDictionary* _accountIDToVerificationHandler;
	NSMutableDictionary* _accountIDToAccount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parkBackgroundThread:(id)arg1 ;
-(void)invokeAndReleaseBlock:(/*^block*/id)arg1 ;
-(id)backgroundThread;
-(char)_isExchangeOAuthAccount:(id)arg1 ;
-(void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(char)arg5 handler:(/*^block*/id)arg6 ;
-(void)_refreshTokenForAccount:(id)arg1 store:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)_isTransientNetworkError:(id)arg1 ;
-(char)_shouldUpgradeAccountToOAuth2:(id)arg1 withCredential:(id)arg2 ;
-(id)appIdsForPromptingForDAAccount:(id)arg1 ;
-(void)_handlePasswordNotification:(CFUserNotificationRef)arg1 response:(unsigned long)arg2 callback:(/*^block*/id)arg3 account:(id)arg4 accountStore:(id)arg5 resetAuthenticatedOnAlertFailure:(char)arg6 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(id)init;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)isPushSupportedForAccount:(id)arg1 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
@end

