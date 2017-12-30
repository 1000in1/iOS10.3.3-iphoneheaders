/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudKeySyncing/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction, PCSIDSMessagingDelegate, PCSIDSMessagingDeviceManager;
@class NSMutableDictionary, NSObject, IDSService, NRDevice, NSString;

@interface PCSIDSTransport : NSObject <IDSServiceDelegate> {

	char _serviceDelegateSet;
	NSMutableDictionary* _pendingReplies;
	NSObject*<OS_dispatch_queue> _internalQueue;
	IDSService* _service;
	NRDevice* _activePairedDevice;
	NSObject*<OS_os_transaction> _transaction;
	id<PCSIDSMessagingDelegate> _delegate;
	id<PCSIDSMessagingDeviceManager> _deviceManager;

}

@property (readonly) NSMutableDictionary * pendingReplies;                                       //@synthesize pendingReplies=_pendingReplies - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> internalQueue;                                 //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) IDSService * service;                                                       //@synthesize service=_service - In the implementation block
@property (retain) NRDevice * activePairedDevice;                                                //@synthesize activePairedDevice=_activePairedDevice - In the implementation block
@property (assign) char serviceDelegateSet;                                                      //@synthesize serviceDelegateSet=_serviceDelegateSet - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;                                     //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic,__weak) id<PCSIDSMessagingDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PCSIDSMessagingDeviceManager> deviceManager;              //@synthesize deviceManager=_deviceManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transportWithIDSServiceName:(id)arg1 ;
-(char)serviceDelegateSet;
-(void)setServiceDelegateSet:(char)arg1 ;
-(NSMutableDictionary *)pendingReplies;
-(void)setDeviceManager:(id)arg1 delegate:(id)arg2 ;
-(void)sendMessage:(id)arg1 toDevice:(id)arg2 withPriority:(int)arg3 timeout:(double)arg4 logDescription:(id)arg5 handleReply:(/*^block*/id)arg6 ;
-(void)sendResponse:(id)arg1 toMessage:(id)arg2 withPriority:(int)arg3 timeout:(double)arg4 logDescription:(id)arg5 ;
-(id)copyLocalPairedDevices;
-(NRDevice *)activePairedDevice;
-(void)setActivePairedDevice:(NRDevice *)arg1 ;
-(void)setDelegate:(id<PCSIDSMessagingDelegate>)arg1 ;
-(id<PCSIDSMessagingDelegate>)delegate;
-(id)initWithServiceName:(id)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(IDSService *)service;
-(id<PCSIDSMessagingDeviceManager>)deviceManager;
-(void)setDeviceManager:(id<PCSIDSMessagingDeviceManager>)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end

