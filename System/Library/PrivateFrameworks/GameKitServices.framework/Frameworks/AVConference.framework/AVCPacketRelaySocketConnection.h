/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCPacketRelayConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class AVCPacketFilter, NSObject;

@interface AVCPacketRelaySocketConnection : NSObject <AVCPacketRelayConnectionProtocol> {

	unsigned char _type;
	char _isDemuxNeeded;
	int _unixSocket;
	char _isConnectedSocket;
	sockaddr _remoteIPPort;
	unsigned _remoteIPPortLength;
	NSObject*<OS_dispatch_queue> _queue;
	char* dataBuffer;
	/*^block*/id _readHandler;
	AVCPacketFilter* _packetFilter;

}

@property (readonly) unsigned char type;                        //@synthesize type=_type - In the implementation block
@property (assign) char isDemuxNeeded;                          //@synthesize isDemuxNeeded=_isDemuxNeeded - In the implementation block
@property (copy) id readHandler;                                //@synthesize readHandler=_readHandler - In the implementation block
@property (retain) AVCPacketFilter * packetFilter;              //@synthesize packetFilter=_packetFilter - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned char)type;
-(long)stop;
-(long)start;
-(void)setReadHandler:(id)arg1 ;
-(id)readHandler;
-(void)readyToRead;
-(void)setPacketFilter:(AVCPacketFilter *)arg1 ;
-(void)receiveDataOnSocket:(unsigned short)arg1 ;
-(char)sendData:(const void*)arg1 size:(unsigned)arg2 error:(id*)arg3 ;
-(char)isDemuxNeeded;
-(void)setIsDemuxNeeded:(char)arg1 ;
-(AVCPacketFilter *)packetFilter;
-(id)initWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3 ;
@end

