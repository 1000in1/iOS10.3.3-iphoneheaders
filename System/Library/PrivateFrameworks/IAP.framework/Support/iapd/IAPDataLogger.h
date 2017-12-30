/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IAPDataLogger : NSObject
+(void)PowerlogEASession:(id)arg1 forAccessory:(id)arg2 forProtocolID:(unsigned char)arg3 forPortType:(unsigned char)arg4 isSessionOpen:(char)arg5 ;
+(void)PowerlogAccAttach:(id)arg1 ;
+(void)AggAccAttach:(id)arg1 WithManufacturer:(id)arg2 ;
+(void)PowerlogAccDetach:(id)arg1 AndConnectionTime:(unsigned long)arg2 ;
+(void)AggAccDetach:(id)arg1 WithManufacturer:(id)arg2 AndConnectionTime:(unsigned long)arg3 ;
+(id)sanitizeString:(id)arg1 ;
+(unsigned long)sanitizeData:(unsigned long)arg1 ;
@end

