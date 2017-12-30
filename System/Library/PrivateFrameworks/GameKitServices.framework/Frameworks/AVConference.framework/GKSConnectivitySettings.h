/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:49 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface GKSConnectivitySettings : NSObject
+(void)initialize;
+(tagIPPORT*)getIPPortForService:(id)arg1 ;
+(id)getClientOption:(id)arg1 ;
+(id)getAddressForService:(id)arg1 ;
+(int)getNATTypeFromCarrierBundle;
+(int)getKeepAliveTimeoutFromCarrierBundle;
+(id)getAllSettings;
+(void)setAddress:(id)arg1 forService:(id)arg2 ;
+(void)setServerAddresses:(id)arg1 ;
+(void)setClientOptions:(id)arg1 ;
+(tagIPPORT*)getCachedIPPort;
+(char)supportiRATRecommendation;
-(id)init;
-(void)dealloc;
@end

