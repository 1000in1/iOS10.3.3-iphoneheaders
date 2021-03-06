/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSMutableSet, ACAccount, NSSet, NSDate;

@interface ACAccountCredential : NSObject <NSSecureCoding> {

	NSMutableDictionary* _credentialItems;
	NSString* _credentialType;
	NSMutableSet* _dirtyProperties;
	ACAccount* _owningAccount;
	char _requiresTouchID;
	char _dirty;
	char _empty;

}

@property (assign,nonatomic) char requiresTouchID;                    //@synthesize requiresTouchID=_requiresTouchID - In the implementation block
@property (nonatomic,copy) NSString * token; 
@property (nonatomic,copy) NSString * oauthTokenSecret; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * credentialType; 
@property (nonatomic,readonly) NSSet * dirtyProperties;               //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (assign,getter=isDirty,nonatomic) char dirty;               //@synthesize dirty=_dirty - In the implementation block
@property (assign,getter=isEmpty,nonatomic) char empty;               //@synthesize empty=_empty - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenNoSync; 
@property (nonatomic,copy) NSString * oauthRefreshToken; 
@property (nonatomic,retain) NSDate * expiryDate; 
@property (nonatomic,copy) NSString * findMyiPhoneToken; 
@property (nonatomic,copy) NSString * mapsToken; 
@property (nonatomic,copy) NSString * hsaToken; 
@property (nonatomic,copy) NSDate * tokenExpiryDate; 
@property (nonatomic,copy) NSString * oauthToken; 
+(id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
+(char)supportsSecureCoding;
+(id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1 ;
+(id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2 ;
+(id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3 ;
+(id)allSupportedKeys;
+(id)credentialWithPassword:(id)arg1 ;
-(void)_setOwningAccount:(id)arg1 ;
-(id)credentialItems;
-(id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2 ;
-(NSDate *)tokenExpiryDate;
-(void)setTokenExpiryDate:(NSDate *)arg1 ;
-(void)setRequiresTouchID:(char)arg1 ;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isEmpty;
-(void)setDirty:(char)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)mapsToken;
-(id)keysForCredentialItems;
-(NSString *)oauthTokenNoSync;
-(char)requiresTouchID;
-(void)setOauthTokenNoSync:(NSString *)arg1 ;
-(void)_clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg1 ;
-(NSString *)hsaToken;
-(NSString *)findMyiPhoneToken;
-(void)setMapsToken:(NSString *)arg1 ;
-(void)setHsaToken:(NSString *)arg1 ;
-(void)setFindMyiPhoneToken:(NSString *)arg1 ;
-(NSSet *)dirtyProperties;
-(id)credentialItemForKey:(id)arg1 ;
-(void)setCredentialItem:(id)arg1 forKey:(id)arg2 ;
-(void)setOauthRefreshToken:(NSString *)arg1 ;
-(NSString *)oauthTokenSecret;
-(NSString *)oauthToken;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(void)setOauthToken:(NSString *)arg1 ;
-(NSString *)oauthRefreshToken;
-(id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3 ;
-(id)initWithPassword:(id)arg1 ;
-(void)setEmpty:(char)arg1 ;
-(char)isDirty;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)credentialType;
-(void)setCredentialType:(NSString *)arg1 ;
@end

