/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCVPNPayloadBase.h>

@class NSString, NSArray;

@interface MCAppLayerVPNPayload : MCVPNPayloadBase {

	NSString* _VPNUUID;
	NSArray* _SafariDomains;

}

@property (nonatomic,retain) NSString * VPNUUID;                                       //@synthesize VPNUUID=_VPNUUID - In the implementation block
@property (setter=afariDomains,nonatomic,retain) NSArray * SafariDomains;              //@synthesize SafariDomains=_SafariDomains - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSString *)VPNUUID;
-(NSArray *)SafariDomains;
-(void)setVPNUUID:(NSString *)arg1 ;
-(void)setSafariDomains:(NSArray *)arg1 ;
-(id)description;
@end

