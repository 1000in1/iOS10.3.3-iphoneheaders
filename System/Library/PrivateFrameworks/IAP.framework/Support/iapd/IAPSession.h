/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSMutableDictionary, IAPEAClient;

@interface IAPSession : NSObject {

	NSMutableDictionary* _accessory;
	IAPEAClient* _client;
	unsigned _connectionID;
	unsigned char _protocolID;
	unsigned short _sessionID;
	int _listenSock;
	CFSocketRef _listenSockRef;
	CFRunLoopSourceRef _listenSockRls;
	int _sock;
	CFSocketRef _sockRef;
	CFRunLoopSourceRef _sockRls;
	char _openPipeToAppAfterAccept;
	char _openPipeFromAppAfterAccept;
	char _isWirelessSession;

}

@property (nonatomic,readonly) IAPEAClient * client;                  //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) unsigned connectionID;                 //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,readonly) unsigned short sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) unsigned char protocolID;              //@synthesize protocolID=_protocolID - In the implementation block
+(void)resetSessionIDCounter;
-(char)openPipeFromApp;
-(char)openPipeToApp;
-(unsigned char)protocolID;
-(void)_registerListenSocket;
-(char)closeDataPipes;
-(void)shuttingDownSession;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(void)_acceptSocketCB:(CFSocketRef)arg1 acceptedSock:(int)arg2 ;
-(void)_readSocketCB:(CFSocketRef)arg1 ;
-(void)_writeSocketCB:(CFSocketRef)arg1 ;
-(id)initWithClient:(id)arg1 connectionID:(unsigned)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned)connectionID;
-(unsigned short)sessionID;
-(IAPEAClient *)client;
@end

