/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface IDSProfileValidateInvitationContext : IDSProfileMessage <NSCopying> {

	NSString* _basePhoneNumber;
	NSString* _regionID;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;

}

@property (copy) NSString * regionID;                             //@synthesize regionID=_regionID - In the implementation block
@property (copy) NSString * basePhoneNumber;                      //@synthesize basePhoneNumber=_basePhoneNumber - In the implementation block
@property (copy) NSString * responseRegionID;                     //@synthesize responseRegionID=_responseRegionID - In the implementation block
@property (copy) NSString * responseBasePhoneNumber;              //@synthesize responseBasePhoneNumber=_responseBasePhoneNumber - In the implementation block
@property (copy) NSDictionary * responseExtraInfo;                //@synthesize responseExtraInfo=_responseExtraInfo - In the implementation block
-(NSString *)responseBasePhoneNumber;
-(void)setResponseBasePhoneNumber:(NSString *)arg1 ;
-(NSString *)responseRegionID;
-(void)setResponseRegionID:(NSString *)arg1 ;
-(NSDictionary *)responseExtraInfo;
-(void)setResponseExtraInfo:(NSDictionary *)arg1 ;
-(void)setRegionID:(NSString *)arg1 ;
-(void)setBasePhoneNumber:(NSString *)arg1 ;
-(id)messageBody;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)maxTimeoutRetries;
-(char)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(NSString *)regionID;
-(id)requiredKeys;
-(NSString *)basePhoneNumber;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
@end

