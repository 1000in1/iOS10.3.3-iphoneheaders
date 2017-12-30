/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:39:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PublishingBundles/PublishToTudou.bundle/PublishToTudou
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PublishToTudou/PublishToTudou-Structs.h>
#import <VideoUpload/VUAuthenticator.h>

@class NSData;

@interface TudouAuthenticator : VUAuthenticator {

	NSData* _base64AuthData;

}
+(id)sharedAuthenticator;
-(CFDictionaryRef)_createKeychainAttributes;
-(id)_authURL;
-(void)_clearStoredCredentials;
-(void)_storeCredentials;
-(void)addAuthenticationHeaderToRequest:(id)arg1 ;
-(id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)authenticateWithUsername:(id)arg1 password:(id)arg2 ;
-(void)loadCredentials;
-(void)invalidateAuthentication;
@end

