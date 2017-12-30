/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CommonUtilities-Structs.h>
#import <libobjc.A.dylib/CUTPowerMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSRecursiveLock, NSHashTable, NSDictionary, NSThread, NSRunLoop, NSObject, NSNumber, NSString;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate> {

	char _shouldAutoAssociateAsForeground;
	char _isHostingHotSpot;
	char _isWifiEnabled;
	char _isWakeOnWiFiEnabled;
	char _isWakeOnWiFiSupported;
	char _isPrimaryCellularCached;
	NSMutableSet* _wiFiAutoAssociationTokens;
	NSRecursiveLock* _lock;
	NSHashTable* _delegateMap;
	NSHashTable* _wowClients;
	void* _currentNetwork;
	int _linkToken;
	void* _wifiManager;
	void* _wifiDevice;
	void* _dynamicStore;
	NSDictionary* _lastWiFiPowerInfo;
	NSThread* _wifiThread;
	CFRunLoopSourceRef _runLoopSource;
	NSRunLoop* _wifiRunLoop;
	NSObject*<OS_dispatch_queue> _scUpdateQueue;

}

@property (nonatomic,retain) NSRecursiveLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSThread * wifiThread;                                   //@synthesize wifiThread=_wifiThread - In the implementation block
@property (nonatomic,retain) NSRunLoop * wifiRunLoop;                                 //@synthesize wifiRunLoop=_wifiRunLoop - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource;                        //@synthesize runLoopSource=_runLoopSource - In the implementation block
@property (assign,nonatomic) void* wifiManager;                                       //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) void* wifiDevice;                                        //@synthesize wifiDevice=_wifiDevice - In the implementation block
@property (assign,nonatomic) void* currentNetwork;                                    //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign,nonatomic) void* dynamicStore;                                      //@synthesize dynamicStore=_dynamicStore - In the implementation block
@property (assign,nonatomic) int linkToken;                                           //@synthesize linkToken=_linkToken - In the implementation block
@property (nonatomic,retain) NSHashTable * delegateMap;                               //@synthesize delegateMap=_delegateMap - In the implementation block
@property (nonatomic,retain) NSHashTable * wowClients;                                //@synthesize wowClients=_wowClients - In the implementation block
@property (nonatomic,copy) NSDictionary * lastWiFiPowerInfo;                          //@synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * wiFiAutoAssociationTokens;                //@synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> scUpdateQueue;              //@synthesize scUpdateQueue=_scUpdateQueue - In the implementation block
@property (assign) char isPrimaryCellularCached;                                      //@synthesize isPrimaryCellularCached=_isPrimaryCellularCached - In the implementation block
@property (nonatomic,readonly) char isWiFiEnabled;                                    //@synthesize isWifiEnabled=_isWifiEnabled - In the implementation block
@property (nonatomic,readonly) char isWiFiAssociated; 
@property (nonatomic,readonly) char isWiFiCaptive; 
@property (nonatomic,readonly) char isHostingWiFiHotSpot;                             //@synthesize isHostingHotSpot=_isHostingHotSpot - In the implementation block
@property (nonatomic,readonly) char isWoWSupported;                                   //@synthesize isWakeOnWiFiSupported=_isWakeOnWiFiSupported - In the implementation block
@property (nonatomic,readonly) char isWoWEnabled;                                     //@synthesize isWakeOnWiFiEnabled=_isWakeOnWiFiEnabled - In the implementation block
@property (nonatomic,readonly) char willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) char willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,retain,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,retain,readonly) NSString * currentSSID; 
@property (assign,nonatomic) char autoAssociateWiFiAsForegroundClient;                //@synthesize shouldAutoAssociateAsForeground=_shouldAutoAssociateAsForeground - In the implementation block
@property (nonatomic,readonly) char autoAssociateWiFi; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_createWiFiManager;
-(void)_createDynamicStore;
-(void)_updateIsWiFiAssociatedAsync:(char)arg1 ;
-(void)_threadedMain;
-(void)_performBackgroundInit;
-(void)_handlePotentialDeviceChange:(WiFiDeviceClientRef)arg1 ;
-(void)_adjustWoWState;
-(void)_performDeviceBlock:(/*^block*/id)arg1 useCache:(char)arg2 ;
-(id)_ssidFromNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 withDevice:(WiFiDeviceClientRef)arg2 async:(char)arg3 ;
-(void)setCurrentNetwork:(void*)arg1 ;
-(void)_performDeviceBlock:(/*^block*/id)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 withDevice:(WiFiDeviceClientRef)arg2 ;
-(void)_updateIsWiFiEnabled;
-(void)currentWiFiNetworkPowerUsageWithCompletion:(/*^block*/id)arg1 ;
-(double)_wifiMeasurementErrorForInterval:(double)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 ;
-(char)_isPrimaryCellular;
-(char)autoAssociateWiFiAsForegroundClient;
-(void)_handleDevicePowerCallback;
-(void)_handleDeviceAttachedCallback;
-(void)_setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performPowerReading;
-(NSString *)currentSSID;
-(char)isWoWEnabled;
-(void)setAutoAssociateWiFiAsForegroundClient:(char)arg1 ;
-(NSHashTable *)delegateMap;
-(void)setDelegateMap:(NSHashTable *)arg1 ;
-(NSHashTable *)wowClients;
-(void)setWowClients:(NSHashTable *)arg1 ;
-(int)linkToken;
-(void)setLinkToken:(int)arg1 ;
-(void*)dynamicStore;
-(void)setDynamicStore:(void*)arg1 ;
-(NSDictionary *)lastWiFiPowerInfo;
-(void)setLastWiFiPowerInfo:(NSDictionary *)arg1 ;
-(NSThread *)wifiThread;
-(void)setWifiThread:(NSThread *)arg1 ;
-(NSRunLoop *)wifiRunLoop;
-(void)setWifiRunLoop:(NSRunLoop *)arg1 ;
-(NSObject*<OS_dispatch_queue>)scUpdateQueue;
-(void)setScUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)isPrimaryCellularCached;
-(void)setIsPrimaryCellularCached:(char)arg1 ;
-(char)isWoWSupported;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_adjustWiFiAutoAssociation;
-(char)hasWiFiAutoAssociationClientToken:(id)arg1 ;
-(char)hasWoWClient:(id)arg1 ;
-(void)addWoWClient:(id)arg1 ;
-(void)removeWoWClient:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSRecursiveLock *)lock;
-(char)isHostingWiFiHotSpot;
-(char)willTryToAutoAssociateWiFiNetwork;
-(char)willTryToSearchForWiFiNetwork;
-(NSNumber *)wiFiSignalStrength;
-(NSNumber *)wiFiScaledRSSI;
-(NSNumber *)wiFiScaledRate;
-(char)isWiFiAssociated;
-(char)isWiFiCaptive;
-(char)autoAssociateWiFi;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)showNetworkOptions;
-(NSMutableSet *)wiFiAutoAssociationTokens;
-(void)setWiFiAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(CFRunLoopSourceRef)runLoopSource;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(char)isWiFiEnabled;
-(void*)wifiManager;
-(void*)wifiDevice;
-(void)setWifiDevice:(void*)arg1 ;
-(void)setWifiManager:(void*)arg1 ;
-(void*)currentNetwork;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end

