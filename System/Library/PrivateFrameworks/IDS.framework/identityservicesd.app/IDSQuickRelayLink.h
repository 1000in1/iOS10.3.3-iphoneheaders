/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/IDSLinkDelegate.h>

@protocol IDSLinkDelegate;
@class NSString, IDSUDPLink, NSData, NSMutableDictionary;

@interface IDSQuickRelayLink : NSObject <IDSLink, IDSLinkDelegate> {

	IDSUDPLink* _udpLink;
	id<IDSLinkDelegate> _delegate;
	id<IDSLinkDelegate> _alternateDelegate;
	/*^block*/id _connectReadyHandler;
	/*^block*/id _disconnectCompletionHandler;
	unsigned _sourceInterfaceIndex;
	sockaddr_storage _sourceAddress;
	sockaddr_storage _relayServerAddress;
	NSData* _relaySessionID;
	NSData* _relaySessionKey;
	NSData* _relaySessionToken;
	unsigned short _internalRelaySessionID;
	unsigned short _channelDataHeader;
	NSMutableDictionary* _stunReqToTransID;
	double _bindStartTime;
	double _unbindStartTime;
	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	unsigned _headerOverhead;
	unsigned _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;

}

@property (nonatomic,copy) id disconnectCompletionHandler;                         //@synthesize disconnectCompletionHandler=_disconnectCompletionHandler - In the implementation block
@property (nonatomic,copy) NSData * relaySessionID;                                //@synthesize relaySessionID=_relaySessionID - In the implementation block
@property (nonatomic,copy) NSData * relaySessionKey;                               //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (nonatomic,copy) NSData * relaySessionToken;                             //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (assign) unsigned short internalRelaySessionID;                          //@synthesize internalRelaySessionID=_internalRelaySessionID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * cbuuid;                                              //@synthesize cbuuid=_cbuuid - In the implementation block
@property (retain) NSString * deviceUniqueID;                                      //@synthesize deviceUniqueID=_deviceUniqueID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned headerOverhead;                                      //@synthesize headerOverhead=_headerOverhead - In the implementation block
@property (__weak) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<IDSLinkDelegate> alternateDelegate;                          //@synthesize alternateDelegate=_alternateDelegate - In the implementation block
-(NSString *)cbuuid;
-(void)setCbuuid:(NSString *)arg1 ;
-(NSString *)deviceUniqueID;
-(id)copyLinkStatsDict;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(char)link:(id)arg1 didReceivePacket:(SCD_Struct_ID11*)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4 ;
-(unsigned)sendPacketBuffer:(SCD_Struct_ID11*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 ;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 ;
-(char)_hasMatchRequest:(id)arg1 ;
-(char)_processQRBindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(char)_processQRUnbindResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(char)_processQRErrorResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(void)_sendQRMessageBuffer:(SCD_Struct_ID11*)arg1 ;
-(void)_sendQRBindRequest;
-(void)_sendQRUnbindRequest;
-(void)_sendTestQRChannelData:(unsigned short)arg1 ;
-(void)setRelaySessionToken:(NSData *)arg1 ;
-(void)setDisconnectCompletionHandler:(id)arg1 ;
-(char)_processStunPacket:(SCD_Struct_ID11*)arg1 fromDevice:(id)arg2 arrivalTime:(double)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(char)arg2 ;
-(NSString *)linkTypeString;
-(unsigned)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)connectWithSessionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)remoteHostAwake;
-(NSData *)relaySessionID;
-(void)setRelaySessionID:(NSData *)arg1 ;
-(NSData *)relaySessionKey;
-(void)setRelaySessionKey:(NSData *)arg1 ;
-(NSData *)relaySessionToken;
-(id)disconnectCompletionHandler;
-(unsigned short)internalRelaySessionID;
-(void)setInternalRelaySessionID:(unsigned short)arg1 ;
-(void)invalidate;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned)state;
-(void)setDeviceUniqueID:(NSString *)arg1 ;
-(void)disconnectWithCompletionHandler:(/*^block*/id)arg1 ;
@end

