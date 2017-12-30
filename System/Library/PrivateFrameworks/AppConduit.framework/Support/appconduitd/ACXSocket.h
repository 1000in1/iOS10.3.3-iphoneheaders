/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/Support/appconduitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class IDSDeviceConnection, NSObject;

@interface ACXSocket : NSObject {

	char _readSourceIsRunning;
	char _invalidated;
	int _socketFD;
	/*^block*/id _eventHandler;
	IDSDeviceConnection* _deviceConnection;
	id _boostingMessageContext;
	NSObject*<OS_dispatch_queue> _socketQueue;
	NSObject*<OS_dispatch_source> _socketReadSource;

}

@property (readonly) int socketFD;                                                //@synthesize socketFD=_socketFD - In the implementation block
@property (readonly) id eventHandler;                                             //@synthesize eventHandler=_eventHandler - In the implementation block
@property (readonly) IDSDeviceConnection * deviceConnection;                      //@synthesize deviceConnection=_deviceConnection - In the implementation block
@property (readonly) id boostingMessageContext;                                   //@synthesize boostingMessageContext=_boostingMessageContext - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> socketQueue;                    //@synthesize socketQueue=_socketQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_source> socketReadSource;              //@synthesize socketReadSource=_socketReadSource - In the implementation block
@property (assign) char readSourceIsRunning;                                      //@synthesize readSourceIsRunning=_readSourceIsRunning - In the implementation block
@property (assign) char invalidated;                                              //@synthesize invalidated=_invalidated - In the implementation block
-(void)resumeReadSource;
-(char)writePingWithError:(id*)arg1 ;
-(void)suspendReadSource;
-(char)writeShutdownMessageWithError:(id*)arg1 ;
-(char)writeBytes:(const void*)arg1 length:(unsigned long)arg2 error:(id*)arg3 ;
-(char)writeDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithIDSDeviceConnection:(id)arg1 boostingMessageContext:(id)arg2 readEventHandler:(/*^block*/id)arg3 ;
-(void)_setUpSocketReadSource;
-(char)readSourceIsRunning;
-(void)setReadSourceIsRunning:(char)arg1 ;
-(NSObject*<OS_dispatch_source>)socketReadSource;
-(int)socketFD;
-(id)readDataOrDictionaryWithError:(id*)arg1 ;
-(id)initWithSocket:(int)arg1 readEventHandler:(/*^block*/id)arg2 ;
-(id)readDictionaryWithError:(id*)arg1 ;
-(id)boostingMessageContext;
-(void)invalidate;
-(IDSDeviceConnection *)deviceConnection;
-(id)readDataWithError:(id*)arg1 ;
-(id)eventHandler;
-(NSObject*<OS_dispatch_queue>)socketQueue;
-(char)invalidated;
-(void)setInvalidated:(char)arg1 ;
-(char)writeData:(id)arg1 error:(id*)arg2 ;
@end
