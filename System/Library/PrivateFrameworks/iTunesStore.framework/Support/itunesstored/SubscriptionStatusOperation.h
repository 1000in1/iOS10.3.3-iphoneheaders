/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSString;

@interface SubscriptionStatusOperation : ISOperation {

	char _authenticatesIfNecessary;
	SSAuthenticationContext* _authenticationContext;
	int _carrierBundleProvisioningStyle;
	NSString* _localizedAuthenticationReason;
	NSString* _reason;
	/*^block*/id _statusBlock;

}

@property (assign) char authenticatesIfNecessary; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) int carrierBundleProvisioningStyle; 
@property (copy) NSString * localizedAuthenticationReason; 
@property (copy) NSString * reason; 
@property (copy) id statusBlock; 
-(id)_getInitialStatus:(id*)arg1 ;
-(void)_cacheAccountEligibilityWithStatus:(id)arg1 ;
-(char)_carrierBundleStatusIsValidForCachedStatus:(id)arg1 ;
-(id)_loadStatusOnce:(id*)arg1 ;
-(void)setAuthenticatesIfNecessary:(char)arg1 ;
-(void)setCarrierBundleProvisioningStyle:(int)arg1 ;
-(void)setLocalizedAuthenticationReason:(NSString *)arg1 ;
-(char)authenticatesIfNecessary;
-(int)carrierBundleProvisioningStyle;
-(NSString *)localizedAuthenticationReason;
-(void)run;
-(NSString *)reason;
-(id)statusBlock;
-(void)setStatusBlock:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end

