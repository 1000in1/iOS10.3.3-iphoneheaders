/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/PlugIns/setoken.appex/setoken
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKTokenDriver.h>
#import <libobjc.A.dylib/TKTokenDriverDelegate.h>

@class NSString;

@interface SETokenDriver : TKTokenDriver <TKTokenDriverDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getTokenWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

