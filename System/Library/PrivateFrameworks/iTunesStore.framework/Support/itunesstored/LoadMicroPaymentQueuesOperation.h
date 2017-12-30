/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class StoreKitClientIdentity, NSDate, MicroPaymentQueueResponse, NSArray;

@interface LoadMicroPaymentQueuesOperation : ISOperation {

	StoreKitClientIdentity* _clientIdentity;
	NSDate* _lastQueueCheckDate;
	int _reason;
	MicroPaymentQueueResponse* _paymentsResponse;
	NSArray* _userDSIDs;

}

@property (retain) MicroPaymentQueueResponse * paymentsResponse;              //@synthesize paymentsResponse=_paymentsResponse - In the implementation block
@property (copy) StoreKitClientIdentity * clientIdentity; 
@property (copy) NSDate * lastQueueCheckDate; 
@property (assign) int reason;                                                //@synthesize reason=_reason - In the implementation block
@property (copy) NSArray * userDSIDs;                                         //@synthesize userDSIDs=_userDSIDs - In the implementation block
-(NSDate *)lastQueueCheckDate;
-(void)setLastQueueCheckDate:(NSDate *)arg1 ;
-(char)_appendNormalQueueToResponse:(id)arg1 error:(id*)arg2 ;
-(char)_shouldCheckAutoRenewQueue;
-(char)_appendAutoRenewQueueToResponse:(id)arg1 error:(id*)arg2 ;
-(void)setPaymentsResponse:(MicroPaymentQueueResponse *)arg1 ;
-(char)_appendToResponse:(id)arg1 usingOperation:(id)arg2 error:(id*)arg3 ;
-(NSArray *)userDSIDs;
-(MicroPaymentQueueResponse *)paymentsResponse;
-(void)setUserDSIDs:(NSArray *)arg1 ;
-(id)_URLBagContext;
-(void)run;
-(int)reason;
-(void)setReason:(int)arg1 ;
-(void)setClientIdentity:(StoreKitClientIdentity *)arg1 ;
-(StoreKitClientIdentity *)clientIdentity;
@end

