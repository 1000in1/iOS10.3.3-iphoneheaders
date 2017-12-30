/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATSocket.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_tcp_connection, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSString, NSObject;

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate> {

	char _connected;
	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSString* _hostname;
	unsigned short _port;
	NSObject*<OS_tcp_connection> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSObject*<OS_dispatch_source> _source;
	char _readBuffer[65536];
	char _enableTLS;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) char enableTLS;                        //@synthesize enableTLS=_enableTLS - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)open;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(char)enableTLS;
-(void)setEnableTLS:(char)arg1 ;
-(void)closeDescriptor;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(char)_connect;
@end

