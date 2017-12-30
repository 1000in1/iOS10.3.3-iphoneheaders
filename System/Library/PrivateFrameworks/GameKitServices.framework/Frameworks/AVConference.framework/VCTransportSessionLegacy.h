/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:50 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCTransportSession.h>
#import <libobjc.A.dylib/LoopbackSocketTunnelDelegate.h>
#import <libobjc.A.dylib/InterfaceListenerDelegate.h>
#import <libobjc.A.dylib/VCConnectionManagerDelegate.h>

@protocol OS_dispatch_source, VideoConferenceRealTimeChannel, VCConnectionProtocol, VCTransportSessionLegacyDelegate;
@class NSObject, VCTransport, NSMutableDictionary, NSDictionary, NSData, NSString, TCPTunnelClient, LoopbackSocketTunnel, NSCondition, GKInterfaceListener;

@interface VCTransportSessionLegacy : VCTransportSession <LoopbackSocketTunnelDelegate, InterfaceListenerDelegate, VCConnectionManagerDelegate> {

	unsigned char _localU8Version;
	int relayState;
	int pendingRelayCount;
	float callerPreEmptiveTimeoutInSecs;
	unsigned _connectionSetupRTTEstimate;
	char allowsRelay;
	char initialSecondaryRelaySetupDone;
	char requestedTimeoutRelay;
	char _isCaller;
	char _didReceivePiggybackBlob;
	char _useLoopback;
	char _isRemoteOSPreLion;
	char _isStarted;
	NSObject*<OS_dispatch_source> relaySetupTimer;
	VCTransport* transport;
	unsigned long _callID;
	unsigned long _remoteCallID;
	int _NATType;
	NSMutableDictionary* _localRelayRequestResponse;
	NSDictionary* _localRelayUpdate;
	NSMutableDictionary* _remoteRelayRequestResponse;
	NSDictionary* _remoteRelayUpdate;
	NSData* _localConnectionData;
	NSData* _localRelayConnectionData;
	NSData* _remoteConnectionData;
	NSData* _remoteRelayConnectionData;
	NSString* _localParticipantID;
	NSString* _remoteParticipantID;
	NSString* _sessionID;
	SecIdentityRef _identity;
	TCPTunnelClient* _tcpTunnelClient;
	NSObject*<VideoConferenceRealTimeChannel> rtChannel;
	LoopbackSocketTunnel* _tunnel;
	id<VCConnectionProtocol> _loopbackConnection;
	NSCondition* _connectionDataTimeoutCondVar;
	GKInterfaceListener* _interfaceListener;
	id<VCTransportSessionLegacyDelegate> _delegate;

}

@property (assign,nonatomic) int pendingRelayCount; 
@property (assign,nonatomic) char initialSecondaryRelaySetupDone; 
@property (nonatomic,retain) NSDictionary * localRelayUpdate;                               //@synthesize localRelayUpdate=_localRelayUpdate - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteRelayUpdate;                              //@synthesize remoteRelayUpdate=_remoteRelayUpdate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteRelayRequestResponse;              //@synthesize remoteRelayRequestResponse=_remoteRelayRequestResponse - In the implementation block
@property (nonatomic,retain) NSData * remoteRelayConnectionData;                            //@synthesize remoteRelayConnectionData=_remoteRelayConnectionData - In the implementation block
@property (retain) NSMutableDictionary * localRelayRequestResponse;                         //@synthesize localRelayRequestResponse=_localRelayRequestResponse - In the implementation block
@property (retain) NSData * localConnectionData;                                            //@synthesize localConnectionData=_localConnectionData - In the implementation block
@property (retain) NSData * localRelayConnectionData;                                       //@synthesize localRelayConnectionData=_localRelayConnectionData - In the implementation block
@property (assign) char allowsRelay; 
@property (assign) char isCaller;                                                           //@synthesize isCaller=_isCaller - In the implementation block
@property (assign) unsigned long remoteCallID;                                              //@synthesize remoteCallID=_remoteCallID - In the implementation block
@property (assign) id<VCTransportSessionLegacyDelegate> delegate; 
@property (copy) NSString * localParticipantID;                                             //@synthesize localParticipantID=_localParticipantID - In the implementation block
@property (copy) NSString * remoteParticipantID;                                            //@synthesize remoteParticipantID=_remoteParticipantID - In the implementation block
@property (copy) NSString * sessionID;                                                      //@synthesize sessionID=_sessionID - In the implementation block
@property (retain) NSData * remoteConnectionData;                                           //@synthesize remoteConnectionData=_remoteConnectionData - In the implementation block
@property (assign) int NATType;                                                             //@synthesize NATType=_NATType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<VCTransportSessionLegacyDelegate>)arg1 ;
-(void)dealloc;
-(id<VCTransportSessionLegacyDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)setIdentity:(SecIdentityRef)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)triggerInterfaceChange;
-(void)networkStateDidChange;
-(id)initWithCallID:(unsigned long)arg1 ;
-(void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(tagIPPORT*)arg3 ;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)connectionCallback:(id)arg1 isInitialConnection:(char)arg2 ;
-(void)didEnableDuplication:(char)arg1 activeConnection:(id)arg2 ;
-(char)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(long)getSignalStrength:(int*)arg1 signalRaw:(int*)arg2 signalGrade:(int*)arg3 ;
-(long)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2 ;
-(long)updateQualityIndicator:(int)arg1 isIPv6:(char)arg2 ;
-(long)registerBasebandNotificationsForConnection:(id)arg1 ;
-(void)deregisterBasebandNotifications;
-(char)isCaller;
-(int)detailedErrorCode;
-(void)reportNetworkConditionsDegraded;
-(void)setIsCaller:(char)arg1 ;
-(void)processRemoteIPChange:(id)arg1 ;
-(void)processRelayRequestResponse:(id)arg1 didOriginateRequest:(char)arg2 ;
-(void)processRelayUpdate:(id)arg1 didOriginateRequest:(char)arg2 ;
-(char)isRemoteOSPreLion;
-(NSString *)remoteParticipantID;
-(NSString *)localParticipantID;
-(void)handleConnectionSetupDataChangeMessageDelivered;
-(void)handleMediaReceivedOverPeerToPeerLink;
-(void)handleMediaReceivedOverRelayLink;
-(void)setForceRelay;
-(void)setAllowsRelay:(char)arg1 ;
-(void)setLocalParticipantID:(NSString *)arg1 ;
-(void)setRemoteParticipantID:(NSString *)arg1 ;
-(void)setRemoteCallID:(unsigned long)arg1 ;
-(void)setRemoteConnectionData:(NSData *)arg1 ;
-(void)setNATType:(int)arg1 ;
-(char)isHandoverSupported;
-(void)setupTransport;
-(void)initiateRelayRequest;
-(NSData *)remoteConnectionData;
-(char)startConnectionWithBlob:(id)arg1 useRelay:(char)arg2 isInitialRelay:(char)arg3 error:(id*)arg4 ;
-(NSDictionary *)remoteRelayUpdate;
-(double)iceTimeoutInSeconds:(char)arg1 ;
-(void)stopLoopback;
-(void)setLocalRelayRequestResponse:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)localRelayRequestResponse;
-(void)setRemoteRelayRequestResponse:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)remoteRelayRequestResponse;
-(void)deleteTCPTunnel;
-(char)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(char)arg3 relayType:(unsigned char)arg4 error:(id*)arg5 ;
-(void)resetICETimeoutToLongTimeout;
-(id)createRelayUpdateDictionary:(id)arg1 ;
-(void)setLocalRelayUpdate:(NSDictionary *)arg1 ;
-(NSDictionary *)localRelayUpdate;
-(void)setRemoteRelayConnectionData:(NSData *)arg1 ;
-(NSData *)remoteRelayConnectionData;
-(void)getConnectionDataUsingRelay:(char)arg1 isInitialRelay:(char)arg2 nonCellularCandidateTimeout:(double)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setRemoteRelayUpdate:(NSDictionary *)arg1 ;
-(void)destroySecondaryRelayDispatchTimer;
-(void)setupSecondaryRelayForCall:(unsigned long)arg1 callerRequired:(char)arg2 ;
-(void)notifyDelegateToCancelRelay;
-(char)isConnectedAndAllowAdditionalConnection;
-(id)createInitiateRelayDictionaryForCall:(unsigned long)arg1 primaryConnection:(tagCONNRESULT*)arg2 ;
-(id)createInitiateRelayDictionary;
-(NSData *)localConnectionData;
-(tagIPPORT)IPPortForPrimaryConnectionOnLocalInterface:(char)arg1 ;
-(void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned long)arg2 callerRequired:(char)arg3 ;
-(void)processRemoteIPChange:(char*)arg1 dataLength:(int)arg2 remoteCandidateVersion:(unsigned short)arg3 ;
-(char)handleExchangedKey:(id)arg1 result:(int)arg2 ;
-(unsigned)connectionTypeForConnectionResult:(tagCONNRESULT*)arg1 ;
-(void)setupPendingSecondaryRelayWithNewPrimary:(id)arg1 ;
-(void)resetLoopback;
-(void)setLocalRelayConnectionData:(NSData *)arg1 ;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)setupLoopbackWithConnectionType:(unsigned)arg1 ;
-(void)stopLoopbackProc:(id)arg1 ;
-(NSData *)localRelayConnectionData;
-(id)connectionDataUsingRelay:(char)arg1 isInitialRelay:(char)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id*)arg4 ;
-(long)generateConnectionData:(char**)arg1 forCallID:(unsigned long)arg2 connectionDataSize:(int*)arg3 nonCellularCandidateTimeout:(double)arg4 ;
-(void)setLocalConnectionData:(NSData *)arg1 ;
-(void)connectionResultCallback:(tagCONNRESULT*)arg1 didReceiveICEPacket:(char)arg2 didUseRelay:(char)arg3 secretKey:(id)arg4 skeResult:(int)arg5 ;
-(void)handleNewCandidates:(id)arg1 version:(unsigned short)arg2 ;
-(void)setupInitialSecondaryRelayWithCallbackRelayFlag:(char)arg1 callID:(unsigned long)arg2 ;
-(int)pendingRelayCount;
-(void)setPendingRelayCount:(int)arg1 ;
-(char)initialSecondaryRelaySetupDone;
-(void)setInitialSecondaryRelaySetupDone:(char)arg1 ;
-(char)allowsRelay;
-(unsigned long)remoteCallID;
-(unsigned)connectionSetupRTTEstimate;
-(int)NATType;
@end

