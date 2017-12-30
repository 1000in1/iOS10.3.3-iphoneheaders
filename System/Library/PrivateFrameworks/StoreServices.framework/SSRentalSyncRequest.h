/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSNumber, NSString;

@interface SSRentalSyncRequest : SSRequest <SSXPCCoding> {

	NSArray* _sinfs;
	NSNumber* _accountIdentifier;
	NSNumber* _rentalKeyIdentifier;

}

@property (readonly) NSArray * sinfs;                               //@synthesize sinfs=_sinfs - In the implementation block
@property (readonly) NSNumber * accountIdentifier;                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (readonly) NSNumber * rentalKeyIdentifier;                //@synthesize rentalKeyIdentifier=_rentalKeyIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(NSArray *)sinfs;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(NSNumber *)accountIdentifier;
@end

