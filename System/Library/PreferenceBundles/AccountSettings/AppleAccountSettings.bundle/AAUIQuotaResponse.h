/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, NSNumber;

@interface AAUIQuotaResponse : AAResponse {

	NSDictionary* _quotaInfo;
	NSArray* _usage;

}

@property (nonatomic,readonly) NSNumber * availableStorageInBytes; 
@property (nonatomic,readonly) NSNumber * usedStorageInBytes; 
@property (nonatomic,readonly) NSNumber * totalStorageInByes; 
@property (nonatomic,readonly) NSArray * usage; 
-(NSNumber *)availableStorageInBytes;
-(NSNumber *)totalStorageInByes;
-(NSNumber *)usedStorageInBytes;
-(NSArray *)usage;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

