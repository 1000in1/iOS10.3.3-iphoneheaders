/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface SSVPlaybackLeaseConfiguration : NSObject <NSCopying> {

	NSURL* _beginLeaseURL;
	NSURL* _getAssetURL;
	int _leaseType;
	NSURL* _provisionMachineURL;
	NSURL* _refreshLeaseURL;
	NSString* _storeFrontSuffix;
	NSURL* _syncMachineURL;
	NSURL* _certificateURL;
	NSURL* _pastisCertificateURL;
	NSURL* _pastisKeyServerURL;

}

@property (nonatomic,readonly) int leaseType;                         //@synthesize leaseType=_leaseType - In the implementation block
@property (nonatomic,copy) NSURL * beginLeaseURL;                     //@synthesize beginLeaseURL=_beginLeaseURL - In the implementation block
@property (nonatomic,copy) NSURL * certificateURL;                    //@synthesize certificateURL=_certificateURL - In the implementation block
@property (nonatomic,copy) NSURL * getAssetURL;                       //@synthesize getAssetURL=_getAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * refreshLeaseURL;                   //@synthesize refreshLeaseURL=_refreshLeaseURL - In the implementation block
@property (nonatomic,copy) NSURL * pastisCertificateURL;              //@synthesize pastisCertificateURL=_pastisCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * pastisKeyServerURL;                //@synthesize pastisKeyServerURL=_pastisKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * provisionMachineURL;               //@synthesize provisionMachineURL=_provisionMachineURL - In the implementation block
@property (nonatomic,copy) NSURL * syncMachineURL;                    //@synthesize syncMachineURL=_syncMachineURL - In the implementation block
@property (nonatomic,copy) NSString * storeFrontSuffix;               //@synthesize storeFrontSuffix=_storeFrontSuffix - In the implementation block
-(int)leaseType;
-(NSURL *)beginLeaseURL;
-(NSURL *)refreshLeaseURL;
-(id)initWithURLBagDictionary:(id)arg1 leaseType:(int)arg2 ;
-(void)setBeginLeaseURL:(NSURL *)arg1 ;
-(void)setProvisionMachineURL:(NSURL *)arg1 ;
-(void)setRefreshLeaseURL:(NSURL *)arg1 ;
-(void)setSyncMachineURL:(NSURL *)arg1 ;
-(void)setPastisKeyServerURL:(NSURL *)arg1 ;
-(void)setPastisCertificateURL:(NSURL *)arg1 ;
-(NSURL *)provisionMachineURL;
-(NSURL *)syncMachineURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeFrontSuffix;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(NSURL *)pastisKeyServerURL;
-(NSURL *)pastisCertificateURL;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(void)setGetAssetURL:(NSURL *)arg1 ;
-(NSURL *)getAssetURL;
@end

