/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class NSNumber, NSArray;

@interface SSRentalCheckinRequest : SSRequest {

	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(id)init;
-(void)dealloc;
-(NSArray *)sinfs;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSNumber *)accountIdentifier;
@end

