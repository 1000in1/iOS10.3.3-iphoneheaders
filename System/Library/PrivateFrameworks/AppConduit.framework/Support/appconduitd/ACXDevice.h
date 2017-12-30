/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/Support/appconduitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NRDevice, NSString, NSHashTable, NSObject, NSUUID;

@interface ACXDevice : NSObject {

	char _isActivePairedDevice;
	char _isConnected;
	char _isTombstone;
	char _syncingIsRestricted;
	NRDevice* _nrDevice;
	NSString* _idsDeviceIdentifier;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (assign) char isConnected;                                          //@synthesize isConnected=_isConnected - In the implementation block
@property (assign) char isActivePairedDevice;                                 //@synthesize isActivePairedDevice=_isActivePairedDevice - In the implementation block
@property (assign) char isTombstone;                                          //@synthesize isTombstone=_isTombstone - In the implementation block
@property (readonly) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) NRDevice * nrDevice;                                     //@synthesize nrDevice=_nrDevice - In the implementation block
@property (readonly) NSString * idsDeviceIdentifier;                          //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (readonly) NSUUID * pairingID; 
@property (readonly) char supportsAppConduitSync; 
@property (readonly) char isReachable; 
@property (readonly) NSString * model; 
@property (readonly) NSString * productType; 
@property (readonly) NSString * watchSize; 
@property (readonly) NSString * osVersion; 
@property (readonly) NSString * osBuildVersion; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * UUID; 
@property (assign) char syncingIsRestricted;                                  //@synthesize syncingIsRestricted=_syncingIsRestricted - In the implementation block
-(void)setSyncingIsRestricted:(char)arg1 ;
-(char)supportsAppConduitSync;
-(NSString *)idsDeviceIdentifier;
-(char)isActivePairedDevice;
-(char)syncingIsRestricted;
-(void)updateIDSDevice:(id)arg1 ;
-(char)_onQueue_isReachable;
-(void)setIsActivePairedDevice:(char)arg1 ;
-(void)setIsTombstone:(char)arg1 ;
-(char)isTombstone;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)UUID;
-(NSString *)model;
-(NSHashTable *)observers;
-(NSString *)osVersion;
-(void)setIsConnected:(char)arg1 ;
-(char)isConnected;
-(NSString *)serialNumber;
-(NSString *)watchSize;
-(NRDevice *)nrDevice;
-(NSString *)productType;
-(char)isReachable;
-(id)initWithIDSDevice:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(NSUUID *)pairingID;
-(NSString *)osBuildVersion;
@end
