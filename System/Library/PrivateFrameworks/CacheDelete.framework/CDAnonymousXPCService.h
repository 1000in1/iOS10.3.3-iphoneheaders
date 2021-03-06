/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CacheDelete/CDXPCService.h>

@class NSXPCListenerEndpoint, NSXPCConnection;

@interface CDAnonymousXPCService : CDXPCService {

	char _haveCreatedHeartbeat;
	NSXPCListenerEndpoint* _endpoint;
	NSXPCConnection* _heartbeatConnection;

}

@property (nonatomic,retain) NSXPCConnection * heartbeatConnection;              //@synthesize heartbeatConnection=_heartbeatConnection - In the implementation block
@property (assign,nonatomic) char haveCreatedHeartbeat;                          //@synthesize haveCreatedHeartbeat=_haveCreatedHeartbeat - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;                 //@synthesize endpoint=_endpoint - In the implementation block
-(NSXPCListenerEndpoint *)endpoint;
-(void)obtainXPCConnection:(/*^block*/id)arg1 ;
-(void)_servicePing:(/*^block*/id)arg1 ;
-(id)initWithInfo:(id)arg1 endpoint:(id)arg2 ;
-(char)createHeartbeatConnection;
-(NSXPCConnection *)heartbeatConnection;
-(char)haveCreatedHeartbeat;
-(void)setHaveCreatedHeartbeat:(char)arg1 ;
-(void)setHeartbeatConnection:(NSXPCConnection *)arg1 ;
@end

