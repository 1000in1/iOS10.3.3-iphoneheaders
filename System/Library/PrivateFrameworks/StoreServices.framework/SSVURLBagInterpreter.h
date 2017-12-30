/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray, SSVSAPSignaturePolicy, NSURL, NSDictionary, NSString;

@interface SSVURLBagInterpreter : NSObject <NSCopying> {

	NSMutableDictionary* _cachedBagValues;
	NSArray* _subscriptionSignedActions;
	SSVSAPSignaturePolicy* _subscriptionSignaturePolicy;
	NSURL* _mescalPrimingURL;

}

@property (nonatomic,copy,readonly) NSArray * AMDDomains; 
@property (nonatomic,copy,readonly) NSURL * mescalCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * mescalSetupURL; 
@property (nonatomic,copy,readonly) NSURL * mescalPrimingURL;                          //@synthesize mescalPrimingURL=_mescalPrimingURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedActions; 
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedRequests; 
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedResponses; 
@property (nonatomic,copy,readonly) NSURL * pastisCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * pastisKeyServerURL; 
@property (nonatomic,copy,readonly) NSString * storeFrontSuffix; 
-(id)_valueForKey:(id)arg1 withClass:(Class)arg2 ;
-(id)URLForURLBagKey:(id)arg1 ;
-(NSDictionary *)mescalSignedRequests;
-(NSDictionary *)mescalSignedActions;
-(NSDictionary *)mescalSignedResponses;
-(NSArray *)AMDDomains;
-(id)valueForURLBagKey:(id)arg1 ;
-(id)mescalSignaturePolicyForRequestURL:(id)arg1 ;
-(id)mescalSignaturePolicyForResponseURL:(id)arg1 ;
-(char)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeFrontSuffix;
-(id)initWithURLBag:(id)arg1 ;
-(NSURL *)mescalCertificateURL;
-(NSURL *)mescalPrimingURL;
-(NSURL *)mescalSetupURL;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(NSURL *)pastisKeyServerURL;
-(NSURL *)pastisCertificateURL;
@end

