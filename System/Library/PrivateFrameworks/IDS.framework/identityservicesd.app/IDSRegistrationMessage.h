/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSArray, NSString, NSDictionary, NSNumber;

@interface IDSRegistrationMessage : FTIDSMessage <NSCopying> {

	NSData* _validationData;
	NSArray* _responseServices;
	NSString* _language;
	NSArray* _services;
	NSString* _hardwareVersion;
	NSString* _osVersion;
	NSString* _softwareVersion;
	NSDictionary* _privateDeviceData;
	NSString* _protocolVersion;
	NSString* _deviceName;
	NSNumber* _responseHBI;

}

@property (copy) NSData * validationData;                       //@synthesize validationData=_validationData - In the implementation block
@property (copy) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (copy) NSString * hardwareVersion;                    //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (copy) NSString * osVersion;                          //@synthesize osVersion=_osVersion - In the implementation block
@property (copy) NSString * softwareVersion;                    //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (copy) NSString * protocolVersion;                    //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (copy) NSDictionary * privateDeviceData;              //@synthesize privateDeviceData=_privateDeviceData - In the implementation block
@property (copy) NSArray * services;                            //@synthesize services=_services - In the implementation block
@property (copy) NSArray * responseServices;                    //@synthesize responseServices=_responseServices - In the implementation block
@property (copy) NSNumber * responseHBI;                        //@synthesize responseHBI=_responseHBI - In the implementation block
-(NSDictionary *)privateDeviceData;
-(void)setPrivateDeviceData:(NSDictionary *)arg1 ;
-(NSArray *)responseServices;
-(void)setResponseServices:(NSArray *)arg1 ;
-(NSNumber *)responseHBI;
-(void)setResponseHBI:(NSNumber *)arg1 ;
-(id)messageBody;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(double)anisetteHeadersTimeout;
-(char)hasRequiredKeys:(id*)arg1 ;
-(id)additionalMessageHeaders;
-(id)nonStandardMessageHeadersForOutgoingPush;
-(NSData *)validationData;
-(void)setValidationData:(NSData *)arg1 ;
-(id)requiredKeys;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
-(NSString *)deviceName;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(NSString *)hardwareVersion;
-(NSString *)softwareVersion;
@end
