/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVCNetworkAddress : NSObject {

	NSString* ip;
	NSString* interfaceName;
	unsigned short port;
	char isIPv6;

}

@property (nonatomic,copy) NSString * ip; 
@property (assign,nonatomic) unsigned short port; 
@property (assign,nonatomic) char isIPv6; 
@property (nonatomic,copy) NSString * interfaceName; 
-(id)init;
-(void)dealloc;
-(unsigned short)port;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(NSString *)ip;
-(char)isIPv6;
-(void)setIp:(NSString *)arg1 ;
-(void)setIsIPv6:(char)arg1 ;
-(void)setPort:(unsigned short)arg1 ;
@end

