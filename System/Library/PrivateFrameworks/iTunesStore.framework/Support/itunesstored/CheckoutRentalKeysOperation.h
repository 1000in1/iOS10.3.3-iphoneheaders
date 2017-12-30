/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, NSArray, SSURLConnectionResponse;

@interface CheckoutRentalKeysOperation : ISOperation {

	NSNumber* _accountIdentifier;
	char _backgroundCheckout;
	NSString* _clientIdentifierHeader;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	SSURLConnectionResponse* _urlResponse;
	NSString* _userAgent;
	char _shouldValidateRentalInfo;
	char _checkoutWithPlay;
	unsigned _checkoutType;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (getter=isBackgroundCheckout) char backgroundCheckout;                               //@synthesize backgroundCheckout=_backgroundCheckout - In the implementation block
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * userAgent; 
@property (assign,nonatomic) char shouldValidateRentalInfo;                                    //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
@property (assign,getter=shouldCheckoutWithPlay,nonatomic) char checkoutWithPlay;              //@synthesize checkoutWithPlay=_checkoutWithPlay - In the implementation block
@property (assign,nonatomic) unsigned checkoutType;                                            //@synthesize checkoutType=_checkoutType - In the implementation block
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(id)_primarySINF;
-(id)_copyAccountIdentifier;
-(id)_copyRentalIdentifier;
-(void)_showErrorDialogForOutput:(id)arg1 ;
-(char)isBackgroundCheckout;
-(char)_performCheckout:(id*)arg1 ;
-(char)_haveValidRentalInformation;
-(id)initWithStoreDownloadSinfs:(id)arg1 ;
-(void)setBackgroundCheckout:(char)arg1 ;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(char)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(char)arg1 ;
-(char)shouldCheckoutWithPlay;
-(void)setCheckoutWithPlay:(char)arg1 ;
-(unsigned)checkoutType;
-(void)setCheckoutType:(unsigned)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_run;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSArray *)sinfs;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(char)_handleResponse:(id)arg1 error:(id*)arg2 ;
-(SSURLConnectionResponse *)URLResponse;
-(NSNumber *)accountIdentifier;
-(id)_bodyData;
@end

