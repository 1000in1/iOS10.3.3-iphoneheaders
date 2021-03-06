/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/SSRequestDelegate.h>

@protocol VideosRentalDataProtocol;
@class NSLock, NSError, NSNumber, NSString;

@interface VideosRentalDataBaseOperation : NSOperation <SSRequestDelegate> {

	NSLock* _lock;
	id<VideosRentalDataProtocol> _rentalData;
	NSError* _storeError;

}

@property (nonatomic,copy,readonly) NSNumber * accountID; 
@property (nonatomic,copy,readonly) NSNumber * rentalID; 
@property (readonly) id<VideosRentalDataProtocol> rentalData; 
@property (readonly) NSError * storeError;                                 //@synthesize storeError=_storeError - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRentalData:(id)arg1 ;
-(id<VideosRentalDataProtocol>)rentalData;
-(NSError *)storeError;
-(NSNumber *)rentalID;
-(NSNumber *)accountID;
@end

