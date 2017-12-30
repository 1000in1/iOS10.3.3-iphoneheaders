/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MCUIAppSigner : NSObject {

	char _appsRequireTrust;
	char _appsRequireVerification;
	char _hasFreeDeveloperProvisioningProfile;
	char _hasUniversalProvisioningProfile;
	char _appsRequireVerificationSoon;
	NSString* _displayName;
	NSString* _identity;
	NSArray* _applications;
	NSArray* _profiles;
	int _numberOfAppsRequiringVerification;
	int _numberOfAppsRequiringVerificationSoon;

}

@property (nonatomic,retain) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identity;                                    //@synthesize identity=_identity - In the implementation block
@property (nonatomic,retain) NSArray * applications;                                 //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSArray * profiles;                                     //@synthesize profiles=_profiles - In the implementation block
@property (assign,nonatomic) char hasFreeDeveloperProvisioningProfile;               //@synthesize hasFreeDeveloperProvisioningProfile=_hasFreeDeveloperProvisioningProfile - In the implementation block
@property (assign,nonatomic) char hasUniversalProvisioningProfile;                   //@synthesize hasUniversalProvisioningProfile=_hasUniversalProvisioningProfile - In the implementation block
@property (assign,nonatomic) char appsRequireTrust;                                  //@synthesize appsRequireTrust=_appsRequireTrust - In the implementation block
@property (assign,nonatomic) char appsRequireVerification;                           //@synthesize appsRequireVerification=_appsRequireVerification - In the implementation block
@property (assign,nonatomic) char appsRequireVerificationSoon;                       //@synthesize appsRequireVerificationSoon=_appsRequireVerificationSoon - In the implementation block
@property (assign,nonatomic) int numberOfAppsRequiringVerification;                  //@synthesize numberOfAppsRequiringVerification=_numberOfAppsRequiringVerification - In the implementation block
@property (assign,nonatomic) int numberOfAppsRequiringVerificationSoon;              //@synthesize numberOfAppsRequiringVerificationSoon=_numberOfAppsRequiringVerificationSoon - In the implementation block
+(id)enterpriseAppSignersWithOutDeveloperAppSigners:(id*)arg1 ;
+(id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id*)arg1 ;
+(void)_addProfile:(id)arg1 toSignerIdentity:(id)arg2 inDictionary:(id)arg3 ;
-(void)addApplication:(id)arg1 ;
-(void)removeApplication:(id)arg1 ;
-(char)isTrusted;
-(NSString *)displayName;
-(NSString *)identity;
-(void)setIdentity:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)hasFreeDeveloperProvisioningProfile;
-(char)hasUniversalProvisioningProfile;
-(id)_displayNameFromIdentity:(id)arg1 hasFreeDev:(char)arg2 hasUPP:(char)arg3 ;
-(char)_isTrustRequiredForBundleIDs:(id)arg1 outNotVerifiedAppCount:(int*)arg2 outExpiringSoonAppCount:(int*)arg3 ;
-(void)setAppsRequireTrust:(char)arg1 ;
-(void)setAppsRequireVerification:(char)arg1 ;
-(void)setAppsRequireVerificationSoon:(char)arg1 ;
-(void)setNumberOfAppsRequiringVerification:(int)arg1 ;
-(void)setNumberOfAppsRequiringVerificationSoon:(int)arg1 ;
-(void)refreshApplications;
-(id)initWithIdentity:(id)arg1 applications:(id)arg2 profiles:(id)arg3 hasUPP:(char)arg4 hasFreeDeveloper:(char)arg5 ;
-(void)removeApplications:(id)arg1 ;
-(void)setProfiles:(NSArray *)arg1 ;
-(char)appsRequireTrust;
-(char)appsRequireVerification;
-(int)numberOfAppsRequiringVerification;
-(void)setHasFreeDeveloperProvisioningProfile:(char)arg1 ;
-(void)setHasUniversalProvisioningProfile:(char)arg1 ;
-(char)appsRequireVerificationSoon;
-(int)numberOfAppsRequiringVerificationSoon;
-(NSArray *)profiles;
-(NSArray *)applications;
-(void)setApplications:(NSArray *)arg1 ;
@end

