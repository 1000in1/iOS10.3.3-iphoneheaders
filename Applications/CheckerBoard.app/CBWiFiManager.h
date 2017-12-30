/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CheckerBoard/CheckerBoard-Structs.h>
@class NSString, NSTimer, NSMutableArray, NSMutableDictionary;

@interface CBWiFiManager : NSObject {

	char _wifiPoweredOn;
	char _scanning;
	char _postedDidAssociateToEncryptedNetworkNotification;
	NSMutableArray* _filteredWiFiScanResults;
	NSMutableArray* _previousScanFilteredWiFiScanResults;
	NSMutableDictionary* _filteredNetworksDictionary;
	NSMutableDictionary* _previousScanFilteredNetworksDictionary;
	NSString* _currentNetworkSSID;
	int _signalStrengthBars;
	int _signalStrengthRSSI;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	int _rssiThreshold;
	NSTimer* _scanTimer;

}

@property (nonatomic,retain) NSMutableArray * filteredWiFiScanResults;                                  //@synthesize filteredWiFiScanResults=_filteredWiFiScanResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * previousScanFilteredWiFiScanResults;                      //@synthesize previousScanFilteredWiFiScanResults=_previousScanFilteredWiFiScanResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filteredNetworksDictionary;                          //@synthesize filteredNetworksDictionary=_filteredNetworksDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * previousScanFilteredNetworksDictionary;              //@synthesize previousScanFilteredNetworksDictionary=_previousScanFilteredNetworksDictionary - In the implementation block
@property (nonatomic,retain) NSString * currentNetworkSSID;                                             //@synthesize currentNetworkSSID=_currentNetworkSSID - In the implementation block
@property (assign,nonatomic) int signalStrengthBars;                                                    //@synthesize signalStrengthBars=_signalStrengthBars - In the implementation block
@property (assign,nonatomic) int signalStrengthRSSI;                                                    //@synthesize signalStrengthRSSI=_signalStrengthRSSI - In the implementation block
@property (assign,getter=isWiFiPoweredOn,nonatomic) char wifiPoweredOn;                                 //@synthesize wifiPoweredOn=_wifiPoweredOn - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef manager;                                              //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef device;                                                //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) int rssiThreshold;                                                         //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (nonatomic,retain) NSTimer * scanTimer;                                                       //@synthesize scanTimer=_scanTimer - In the implementation block
@property (assign,nonatomic) char scanning;                                                             //@synthesize scanning=_scanning - In the implementation block
@property (assign,nonatomic) char postedDidAssociateToEncryptedNetworkNotification;                     //@synthesize postedDidAssociateToEncryptedNetworkNotification=_postedDidAssociateToEncryptedNetworkNotification - In the implementation block
+(id)networkScaledRSSIKey;
+(id)sharedInstance;
-(char)isAssociatedToNetwork;
-(int)signalStrengthBars;
-(int)signalStrengthRSSI;
-(void)startWiFiNetworkScan;
-(void)stopWiFiNetworkScan;
-(char)isWiFiPoweredOn;
-(NSMutableArray *)previousScanFilteredWiFiScanResults;
-(NSMutableDictionary *)filteredNetworksDictionary;
-(NSMutableArray *)filteredWiFiScanResults;
-(NSMutableDictionary *)previousScanFilteredNetworksDictionary;
-(char)attemptingToAssociateToCurrentNetworkByIndex:(int)arg1 ;
-(void)associateToNetworkByIndex:(int)arg1 ;
-(NSString *)currentNetworkSSID;
-(WiFiManagerClientRef)_WiFiManager;
-(void)_updateWiFiDevice;
-(void)_setWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)_deregisterWiFiNotifications;
-(void)_powerStateDidChange;
-(void)_forceWiFiOnIfNecessary;
-(void)_registerWiFiNotifications;
-(void)_updateCurrentNetwork;
-(void)_updateSignalStrength;
-(void)setCurrentNetworkSSID:(NSString *)arg1 ;
-(char)_shouldIncludeNetwork:(WiFiNetworkRef)arg1 ;
-(void)_addNetwork:(WiFiNetworkRef)arg1 toLookup:(NSMutableDictionary*)arg2 ;
-(id)_securityTypeFromNetwork:(WiFiNetworkRef)arg1 ;
-(void)_dedupNetworkToHighestRSSI:(WiFiNetworkRef)arg1 withInfo:(id)arg2 toLookup:(NSMutableDictionary*)arg3 ;
-(void)setWifiPoweredOn:(char)arg1 ;
-(void)_updateWiFiState;
-(id)_scanDictForNetworkSSID:(id)arg1 ;
-(void)_restartWiFiNetworkScan;
-(NSMutableDictionary*)_filteredLookupWithNetworks:(CFArrayRef)arg1 ;
-(void)setFilteredNetworksDictionary:(NSMutableDictionary *)arg1 ;
-(void)setFilteredWiFiScanResults:(NSMutableArray *)arg1 ;
-(void)_sortWiFiScanResultsAlphabetically:(NSMutableArray*)arg1 ;
-(void)_setTimeForNextScan:(double)arg1 ;
-(void)_associateToHiddenUnencryptedNetwork:(WiFiNetworkRef)arg1 ;
-(void)setPreviousScanFilteredWiFiScanResults:(NSMutableArray *)arg1 ;
-(void)setPreviousScanFilteredNetworksDictionary:(NSMutableDictionary *)arg1 ;
-(void)_associateToNetworkWithInfo:(id)arg1 ;
-(void)_associateToUnencryptedNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performDirectedScanForNetworkSSID:(id)arg1 ;
-(void)_performDirectedScan:(char)arg1 AndAssociateToNetworkWithName:(id)arg2 password:(id)arg3 securityType:(id)arg4 ;
-(void)setPostedDidAssociateToEncryptedNetworkNotification:(char)arg1 ;
-(int)_performDirectedScan:(Apple80211Ref)arg1 forNetworkSSID:(id)arg2 ;
-(int)_associateToNetwork:(Apple80211Ref)arg1 withSSID:(id)arg2 password:(id)arg3 encryption:(int)arg4 apMode:(int)arg5 joinBSSID:(id)arg6 ;
-(void)_addWiFiEncryption:(int)arg1 toAssociationDict:(id)arg2 ;
-(void)_postDidAssociateToEncryptedNetworkNotificationWithError:(int)arg1 ;
-(void)_updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2 ;
-(void)setSignalStrengthBars:(int)arg1 ;
-(void)setSignalStrengthRSSI:(int)arg1 ;
-(char)postedDidAssociateToEncryptedNetworkNotification;
-(void)_wifiScanCompleted:(CFArrayRef)arg1 ;
-(void)_wifiDirectedScanCompleted:(CFArrayRef)arg1 ;
-(void)associateToNetworkBySSID:(id)arg1 ;
-(void)associateToHiddenUnencryptedNetworkWithName:(id)arg1 ;
-(void)associateToEncryptedNetworkWithName:(id)arg1 password:(id)arg2 securityType:(id)arg3 ;
-(void)associateToHiddenEncryptedNetworkWithName:(id)arg1 password:(id)arg2 securityType:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(WiFiManagerClientRef)manager;
-(void)setManager:(WiFiManagerClientRef)arg1 ;
-(void)setPowered:(char)arg1 ;
-(void)setScanning:(char)arg1 ;
-(void)setRssiThreshold:(int)arg1 ;
-(int)rssiThreshold;
-(char)scanning;
-(WiFiDeviceClientRef)device;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setScanTimer:(NSTimer *)arg1 ;
-(NSTimer *)scanTimer;
@end

