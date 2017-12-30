/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PCSDevice, PCSIDSTransport, NSData, PCSKeyClient;

@interface PCSPeerSyncing : NSObject {

	BOOL _pendingRequest;
	PCSDevice* _device;
	PCSIDSTransport* _transport;
	NSData* _keys;
	int _clientVersion;
	PCSKeyClient* _client;

}

@property (retain) PCSDevice * device;                       //@synthesize device=_device - In the implementation block
@property (retain) PCSIDSTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (retain) NSData * keys;                            //@synthesize keys=_keys - In the implementation block
@property (assign) BOOL pendingRequest;                      //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (assign) int clientVersion;                        //@synthesize clientVersion=_clientVersion - In the implementation block
@property (retain) PCSKeyClient * client;                    //@synthesize client=_client - In the implementation block
-(void)updateLastSeen;
-(void)checkSyncing:(BOOL)arg1 ;
-(double)checkRatelimit:(double)arg1 ;
-(double)timeUntilSyncing;
-(BOOL)checkHashWithRateLimit:(id)arg1 ;
-(BOOL)ratelimitClientSyncing;
-(void)keyFailure:(id)arg1 ;
-(void)haveKeys:(id)arg1 ;
-(void)sendKeys;
-(void)sendCommand:(unsigned)arg1 data:(id)arg2 dsid:(id)arg3 handleReply:(/*^block*/id)arg4 ;
-(NSData *)keys;
-(void)setKeys:(NSData *)arg1 ;
-(id)uuid;
-(void)setClientVersion:(int)arg1 ;
-(int)clientVersion;
-(PCSKeyClient *)client;
-(void)handleIncomingMessage:(id)arg1 ;
-(void)setPendingRequest:(BOOL)arg1 ;
-(BOOL)pendingRequest;
-(PCSDevice *)device;
-(void)setClient:(PCSKeyClient *)arg1 ;
-(PCSIDSTransport *)transport;
-(void)setDevice:(PCSDevice *)arg1 ;
-(void)setTransport:(PCSIDSTransport *)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end

