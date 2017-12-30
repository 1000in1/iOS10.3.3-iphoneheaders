/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Helpers/ProtectedCloudKeySyncing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudKeySyncing/PCSIDSMessagingDeviceManager.h>

@protocol PCSDeviceManagerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, PCSDevice, NSObject, NSArray, NSString;

@interface PCSDeviceManager : NSObject <PCSIDSMessagingDeviceManager> {

	id<PCSDeviceManagerDelegate> _delegate;
	NSMutableDictionary* _devices;
	PCSDevice* _activePairedDevice;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (readonly) NSMutableDictionary * devices;                           //@synthesize devices=_devices - In the implementation block
@property (retain) PCSDevice * activePairedDevice;                            //@synthesize activePairedDevice=_activePairedDevice - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (__weak) id<PCSDeviceManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSArray * allDevices; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)updatedIDSDevices:(id)arg1 ;
-(PCSDevice *)activePairedDevice;
-(void)setActivePairedDevice:(PCSDevice *)arg1 ;
-(id)currentActivePairedDevice;
-(id)deviceForIDSIdentifier:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<PCSDeviceManagerDelegate>)arg1 ;
-(id<PCSDeviceManagerDelegate>)delegate;
-(id)deviceForNRDevice:(id)arg1 ;
-(id)deviceForPairingID:(id)arg1 ;
-(NSArray *)allDevices;
-(NSMutableDictionary *)devices;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end
