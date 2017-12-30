/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:17:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/com.apple.ExternalAccessory.WACUI.appex/com.apple.ExternalAccessory.WACUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.ExternalAccessory.WACUI/com.apple.ExternalAccessory.WACUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <ExternalAccessoryWACUIBits/WACUIServiceProtocol.h>
#import <com.apple.ExternalAccessory.WACUI/AirPortAssistantManagerDelegate.h>

@class AirPortAssistantUINavigationController, AirPortAssistantManager, NSString;

@interface WACUIViewController : UIViewController <WACUIServiceProtocol, AirPortAssistantManagerDelegate> {

	BOOL _authorized;
	BOOL _didCheckedEntitlements;
	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	char __debugLog;
	AirPortAssistantUINavigationController* _nav;
	AirPortAssistantManager* _airportAssistantManager;

}

@property (retain) AirPortAssistantUINavigationController * nav;                   //@synthesize nav=_nav - In the implementation block
@property (retain) AirPortAssistantManager * airportAssistantManager;              //@synthesize airportAssistantManager=_airportAssistantManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(AirPortAssistantUINavigationController *)nav;
-(char)hostIsEntitled;
-(void)wacDevicesAdded:(id)arg1 andWACDevicesRemoved:(id)arg2 ;
-(void)airPortAssistantCompleteWithResult:(long)arg1 context:(id)arg2 animated:(char)arg3 ;
-(void)shouldCheckWiFiPowerStatus;
-(void)setNav:(AirPortAssistantUINavigationController *)arg1 ;
-(AirPortAssistantManager *)airportAssistantManager;
-(void)setAirportAssistantManager:(AirPortAssistantManager *)arg1 ;
-(void)backendStartSearch;
-(void)backendStopSearch;
-(void)cancelActiveConfiguration;
-(void)backendConfigureAirPortAssistantWithTargetMACAddress:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)updateState:(int)arg1 ;
@end
