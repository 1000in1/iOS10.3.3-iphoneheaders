/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSString, NSNumber, NSData, NSDictionary;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	NSString* _emailAddress;
	NSNumber* _mailNumberOfPastDaysToSync;
	NSData* _embeddedCertificate;
	NSString* _embeddedCertificateName;
	NSString* _embeddedCertificatePassword;
	NSString* _certificateUUID;
	NSString* _accountPersistentUUID;
	NSData* _certificatePersistentID;
	char _syncDefaultFoldersOnly;
	NSNumber* _useSSL;
	NSDictionary* _communicationServiceRules;
	NSNumber* _syncDefaultFoldersOnlyNum;

}

@property (nonatomic,readonly) NSNumber * syncDefaultFoldersOnlyNum;                      //@synthesize syncDefaultFoldersOnlyNum=_syncDefaultFoldersOnlyNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountDescription;                      //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                                //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                           //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                       //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSNumber * useSSL;                                           //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * mailNumberOfPastDaysToSync;              //@synthesize mailNumberOfPastDaysToSync=_mailNumberOfPastDaysToSync - In the implementation block
@property (nonatomic,retain,readonly) NSData * embeddedCertificate;                       //@synthesize embeddedCertificate=_embeddedCertificate - In the implementation block
@property (nonatomic,retain,readonly) NSString * embeddedCertificateName;                 //@synthesize embeddedCertificateName=_embeddedCertificateName - In the implementation block
@property (nonatomic,copy) NSString * embeddedCertificatePassword;                        //@synthesize embeddedCertificatePassword=_embeddedCertificatePassword - In the implementation block
@property (nonatomic,retain,readonly) NSString * certificateUUID;                         //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (nonatomic,readonly) char hasCertificate; 
@property (nonatomic,readonly) NSDictionary * communicationServiceRules;                  //@synthesize communicationServiceRules=_communicationServiceRules - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                              //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;                            //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (assign,nonatomic) char syncDefaultFoldersOnly;                                 //@synthesize syncDefaultFoldersOnly=_syncDefaultFoldersOnly - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSData *)certificatePersistentID;
-(char)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setCertificatePersistentID:(NSData *)arg1 ;
-(NSDictionary *)communicationServiceRules;
-(NSString *)certificateUUID;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSData *)embeddedCertificate;
-(NSString *)embeddedCertificateName;
-(NSString *)embeddedCertificatePassword;
-(void)setEmbeddedCertificatePassword:(NSString *)arg1 ;
-(char)syncDefaultFoldersOnly;
-(void)setSyncDefaultFoldersOnly:(char)arg1 ;
-(void)setUseSSL:(NSNumber *)arg1 ;
-(NSNumber *)syncDefaultFoldersOnlyNum;
-(id)description;
-(id)title;
-(id)restrictions;
-(NSNumber *)mailNumberOfPastDaysToSync;
-(NSString *)hostname;
-(NSNumber *)useSSL;
-(NSString *)emailAddress;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)accountDescription;
-(NSString *)username;
-(void)setEmailAddress:(NSString *)arg1 ;
-(char)hasCertificate;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

