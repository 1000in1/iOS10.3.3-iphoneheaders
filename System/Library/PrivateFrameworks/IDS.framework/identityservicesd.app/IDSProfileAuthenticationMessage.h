/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSProfileAuthenticationMessage : IDSProfileMessage <NSCopying> {

	NSString* _username;
	NSString* _password;
	NSString* _responseProfileID;
	NSString* _responseAuthToken;
	NSString* _responseSelfHandle;

}

@property (copy) NSString * username;                                //@synthesize username=_username - In the implementation block
@property (copy) NSString * password;                                //@synthesize password=_password - In the implementation block
@property (copy) NSString * responseProfileID;                       //@synthesize responseProfileID=_responseProfileID - In the implementation block
@property (copy) NSString * responseAuthorizationToken;              //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseSelfHandle;                      //@synthesize responseSelfHandle=_responseSelfHandle - In the implementation block
-(NSString *)responseProfileID;
-(void)setResponseProfileID:(NSString *)arg1 ;
-(NSString *)responseAuthorizationToken;
-(void)setResponseAuthorizationToken:(NSString *)arg1 ;
-(NSString *)responseSelfHandle;
-(void)setResponseSelfHandle:(NSString *)arg1 ;
-(id)messageBody;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)anisetteHeadersTimeout;
-(char)payloadCanBeLogged;
-(char)hasRequiredKeys:(id*)arg1 ;
-(id)additionalMessageHeaders;
-(id)additionalMessageHeadersForOutgoingPush;
-(id)requiredKeys;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

