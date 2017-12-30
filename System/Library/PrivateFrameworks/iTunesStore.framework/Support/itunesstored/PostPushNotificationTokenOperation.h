/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, NSString, NSData;

@interface PostPushNotificationTokenOperation : ISOperation <ISStoreURLOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSString* _environmentName;
	NSData* _tokenData;

}

@property (readonly) NSString * environmentName; 
@property (readonly) NSData * tokenData; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEnvironmentName:(id)arg1 tokenData:(id)arg2 ;
-(char)_postTokenToURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)run;
-(NSData *)tokenData;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(NSString *)environmentName;
@end

