/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, MicroPaymentClient, NSSet, NSData, NSDate, NSNumber;

@interface MicroPayment : NSManagedObject {

	NSString* _temporaryIdentifier;
	char _transientFailed;

}

@property (getter=isReady,nonatomic,readonly) char ready; 
@property (assign,getter=isTransientFailed,nonatomic) char transientFailed;              //@synthesize transientFailed=_transientFailed - In the implementation block
@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (nonatomic,retain) NSString * actionParams; 
@property (nonatomic,retain) NSString * applicationUsername; 
@property (nonatomic,retain) NSString * askPermissionRequestIdentifier; 
@property (nonatomic,retain) MicroPaymentClient * client; 
@property (nonatomic,retain) NSSet * downloads; 
@property (nonatomic,retain) NSData * errorData; 
@property (nonatomic,retain) NSDate * insertDate; 
@property (nonatomic,retain) NSDate * originalPurchaseDate; 
@property (nonatomic,retain) NSString * originalTransactionIdentifier; 
@property (nonatomic,retain) NSString * partnerIdentifier; 
@property (nonatomic,retain) NSString * partnerTransactionIdentifier; 
@property (nonatomic,retain) NSString * productIdentifier; 
@property (nonatomic,retain) NSDate * purchaseDate; 
@property (nonatomic,retain) NSNumber * quantity; 
@property (nonatomic,retain) NSData * receiptData; 
@property (nonatomic,retain) NSData * requestData; 
@property (nonatomic,retain) NSNumber * simulatesAskToBuyInSandbox; 
@property (nonatomic,retain) NSNumber * state; 
@property (nonatomic,retain) NSNumber * supportsDeferredPayment; 
@property (nonatomic,retain) NSString * transactionIdentifier; 
@property (nonatomic,retain) NSNumber * userDSID; 
+(id)paymentEntityFromContext:(id)arg1 ;
+(char)responseIsValid:(id)arg1 ;
-(char)isEqualToResponse:(id)arg1 compareAllFields:(char)arg2 ;
-(void)mergeValuesFromResponse:(id)arg1 ;
-(int)_clientStateForServerState:(int)arg1 ;
-(id)_temporaryIdentifier;
-(void)_updateDownloadsFromResponse:(id)arg1 ;
-(int)_serverStateForClientState:(int)arg1 ;
-(id)copyPaymentTransaction;
-(void)setValuesWithPaymentTransaction:(id)arg1 ;
-(char)isTransientFailed;
-(void)setTransientFailed:(char)arg1 ;
-(void)dealloc;
-(void)awakeFromInsert;
-(NSString *)matchingIdentifier;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setFailedWithError:(id)arg1 ;
-(char)isReady;
@end

