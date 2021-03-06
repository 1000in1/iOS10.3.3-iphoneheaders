/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, CarrierBundlingEligibilityResponse;

@interface CarrierBundlingEligibilityOperation : ISOperation {

	NSString* _cellularProviderName;
	char _deepLink;
	CarrierBundlingEligibilityResponse* _eligibilityResponse;
	NSString* _mobileSubscriberCountryCode;
	NSString* _mobileSubscriberNetworkCode;
	NSString* _phoneNumber;

}

@property (getter=isDeepLink) char deepLink; 
@property (copy,readonly) NSString * cellularProviderName; 
@property (readonly) CarrierBundlingEligibilityResponse * eligibilityResponse; 
@property (copy,readonly) NSString * mobileSubscriberCountryCode; 
@property (copy,readonly) NSString * mobileSubscriberNetworkCode; 
@property (copy,readonly) NSString * phoneNumber; 
-(NSString *)cellularProviderName;
-(id)_sendPreflightRequest:(id*)arg1 ;
-(void)_sendEnrichmentRequestWithPreflightResponse:(id)arg1 outputBlock:(/*^block*/id)arg2 ;
-(void)_sendSilentSMSRequestWithPreflightResponse:(id)arg1 outputBlock:(/*^block*/id)arg2 ;
-(id)_newDefaultRequestBodyDictionary;
-(char)isDeepLink;
-(void)_finishEnrichmentWithSessionID:(id)arg1 carrierResponse:(id)arg2 URLResponse:(id)arg3 URLError:(id)arg4 outputBlock:(/*^block*/id)arg5 ;
-(char)_sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
-(void)_finishSilentSMSWithSessionID:(id)arg1 outputBlock:(/*^block*/id)arg2 ;
-(void)run;
-(NSString *)phoneNumber;
-(NSString *)mobileSubscriberCountryCode;
-(NSString *)mobileSubscriberNetworkCode;
-(void)setDeepLink:(char)arg1 ;
-(CarrierBundlingEligibilityResponse *)eligibilityResponse;
@end

