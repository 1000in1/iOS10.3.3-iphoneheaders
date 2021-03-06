/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACMToken.h>
#import <Feedback Assistant iOS/ACCSSOTokenProtocol.h>

@class ACFPrincipal, NSDate, NSString, NSNumber, ACFMessage, NSDictionary;

@interface ACMSSOToken : ACMToken <ACCSSOTokenProtocol> {

	char _longLiveSession;
	ACFMessage* _initialRequest;
	NSString* _sessionToken;
	NSDate* _recentAuthenticationDate;
	NSNumber* _personID;
	NSDate* _recentUnlockDate;
	NSString* _clientSecret;
	NSNumber* _clientSecretCreationTimestamp;

}

@property (readonly) NSDictionary * tokenDictionary; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ACFPrincipal * principal; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSString * nonce; 
@property (nonatomic,retain) NSString * sessionToken;                               //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSDate * recentAuthenticationDate;                     //@synthesize recentAuthenticationDate=_recentAuthenticationDate - In the implementation block
@property (nonatomic,retain) NSNumber * personID;                                   //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSNumber * isTwoStepVerificationRequired; 
@property (nonatomic,retain) ACFMessage * initialRequest;                           //@synthesize initialRequest=_initialRequest - In the implementation block
@property (nonatomic,retain) NSString * userPreferences; 
@property (nonatomic,retain) NSDate * recentUnlockDate;                             //@synthesize recentUnlockDate=_recentUnlockDate - In the implementation block
@property (nonatomic,retain) NSString * clientSecret;                               //@synthesize clientSecret=_clientSecret - In the implementation block
@property (nonatomic,retain) NSNumber * clientSecretCreationTimestamp;              //@synthesize clientSecretCreationTimestamp=_clientSecretCreationTimestamp - In the implementation block
@property (nonatomic,retain) NSNumber * isUserEnrolledFor2SV; 
@property (assign,nonatomic) char longLiveSession;                                  //@synthesize longLiveSession=_longLiveSession - In the implementation block
+(id)tokenWithKeychainTokenInfo:(id)arg1 ;
+(id)tokenWithToken:(id)arg1 data:(id)arg2 ;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(void)dealloc;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(NSString *)clientSecret;
-(ACFMessage *)initialRequest;
-(NSDate *)recentAuthenticationDate;
-(void)setRecentAuthenticationDate:(NSDate *)arg1 ;
-(NSDate *)recentUnlockDate;
-(void)setRecentUnlockDate:(NSDate *)arg1 ;
-(void)setInitialRequest:(ACFMessage *)arg1 ;
-(void)setClientSecretCreationTimestamp:(NSNumber *)arg1 ;
-(char)longLiveSession;
-(void)setLongLiveSession:(char)arg1 ;
-(NSDictionary *)tokenDictionary;
-(void)setClientSecret:(NSString *)arg1 ;
-(NSNumber *)clientSecretCreationTimestamp;
@end

