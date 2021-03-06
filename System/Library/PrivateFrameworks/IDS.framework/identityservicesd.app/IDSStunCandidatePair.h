/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class IDSStunCandidate, NSString, NSData, NSObject;

@interface IDSStunCandidatePair : NSObject {

	unsigned _state;
	IDSStunCandidate* _local;
	IDSStunCandidate* _remote;
	IDSStunCandidate* _relayRemote;
	char _isNominated;
	char _isActive;
	double _lastIncomingPacketTime;
	double _lastOutgoingPacketTime;
	char _hbStarted;
	unsigned short _hbCounter;
	char _linkID;
	NSString* _sessionID;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	unsigned short _channelNumber;
	char _isAcceptedRelaySession;
	char _recvSKEData;
	char _sentSKEData;
	NSObject*<OS_dispatch_source> _sessionConnectedTimer;
	/*^block*/id _sessionConnectedTimeoutBlock;
	char _pendingRealloc;
	NSObject*<OS_dispatch_source> _reallocTimer;
	char _recvDisconnected;
	char _recvDisconnectedAck;

}

@property (assign,nonatomic) unsigned state;                             //@synthesize state=_state - In the implementation block
@property (readonly) IDSStunCandidate * local;                           //@synthesize local=_local - In the implementation block
@property (readonly) IDSStunCandidate * remote;                          //@synthesize remote=_remote - In the implementation block
@property (retain) IDSStunCandidate * relayRemote;                       //@synthesize relayRemote=_relayRemote - In the implementation block
@property (assign,nonatomic) char isNominated;                           //@synthesize isNominated=_isNominated - In the implementation block
@property (assign,nonatomic) char isActive;                              //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) double lastIncomingPacketTime;              //@synthesize lastIncomingPacketTime=_lastIncomingPacketTime - In the implementation block
@property (assign,nonatomic) double lastOutgoingPacketTime;              //@synthesize lastOutgoingPacketTime=_lastOutgoingPacketTime - In the implementation block
@property (assign,nonatomic) char hbStarted;                             //@synthesize hbStarted=_hbStarted - In the implementation block
@property (nonatomic,readonly) unsigned short hbCounter;                 //@synthesize hbCounter=_hbCounter - In the implementation block
@property (assign,nonatomic) char linkID;                                //@synthesize linkID=_linkID - In the implementation block
@property (readonly) NSString * sessionID;                               //@synthesize sessionID=_sessionID - In the implementation block
@property (copy) NSData * relaySessionToken;                             //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (copy) NSData * relaySessionKey;                               //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (assign,nonatomic) unsigned short channelNumber;               //@synthesize channelNumber=_channelNumber - In the implementation block
@property (assign,nonatomic) char isAcceptedRelaySession;                //@synthesize isAcceptedRelaySession=_isAcceptedRelaySession - In the implementation block
@property (assign,nonatomic) char recvSKEData;                           //@synthesize recvSKEData=_recvSKEData - In the implementation block
@property (assign,nonatomic) char sentSKEData;                           //@synthesize sentSKEData=_sentSKEData - In the implementation block
@property (assign,nonatomic) char pendingRealloc;                        //@synthesize pendingRealloc=_pendingRealloc - In the implementation block
@property (assign,nonatomic) char recvDisconnected;                      //@synthesize recvDisconnected=_recvDisconnected - In the implementation block
@property (assign,nonatomic) char recvDisconnectedAck;                   //@synthesize recvDisconnectedAck=_recvDisconnectedAck - In the implementation block
+(id)candidatePairWithLocalCandidate:(id)arg1 remoteCandidate:(id)arg2 sessionID:(id)arg3 ;
-(void)setRelaySessionToken:(NSData *)arg1 ;
-(NSData *)relaySessionKey;
-(void)setRelaySessionKey:(NSData *)arg1 ;
-(NSData *)relaySessionToken;
-(IDSStunCandidate *)local;
-(char)isRelayStunCandidatePair;
-(void)setIsAcceptedRelaySession:(char)arg1 ;
-(void)setLastOutgoingPacketTime:(double)arg1 ;
-(void)setLastIncomingPacketTime:(double)arg1 ;
-(char)isNominated;
-(void)setIsNominated:(char)arg1 ;
-(id)candidatePairToken;
-(void)stopSessionConnectedTimer;
-(void)setLinkID:(char)arg1 ;
-(char)hbStarted;
-(char)pendingRealloc;
-(void)setHbStarted:(char)arg1 ;
-(char)isAcceptedRelaySession;
-(void)startSessionConnectedTimer:(int)arg1 block:(/*^block*/id)arg2 ;
-(void)setPendingRealloc:(char)arg1 ;
-(IDSStunCandidate *)relayRemote;
-(void)setRelayRemote:(IDSStunCandidate *)arg1 ;
-(unsigned short)hbCounter;
-(double)lastIncomingPacketTime;
-(void)setRecvSKEData:(char)arg1 ;
-(char)recvSKEData;
-(void)setRecvDisconnected:(char)arg1 ;
-(void)setRecvDisconnectedAck:(char)arg1 ;
-(char)recvDisconnected;
-(char)recvDisconnectedAck;
-(char)sentSKEData;
-(void)setSentSKEData:(char)arg1 ;
-(id)initWithLocalCandidate:(id)arg1 remoteCandidate:(id)arg2 sessionID:(id)arg3 ;
-(void)_stopReallocTimer;
-(void)_startReallocTimer;
-(void)_handleReallocTimer;
-(void)_handleSessionConnectedtTimer;
-(double)lastOutgoingPacketTime;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)state;
-(char)isActive;
-(void)setState:(unsigned)arg1 ;
-(void)setIsActive:(char)arg1 ;
-(NSString *)sessionID;
-(IDSStunCandidate *)remote;
-(void)setChannelNumber:(unsigned short)arg1 ;
-(unsigned short)channelNumber;
-(char)linkID;
@end

