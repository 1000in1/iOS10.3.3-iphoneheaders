/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Setup/Setup-Structs.h>
@interface BuddyWifiAutoJoiner : NSObject {

	WiFiManagerClientRef _wifiManagerRef;

}
+(void)beginAutojoiningWiFiNetworks;
+(void)stopAutojoiningWiFiNetworks;
+(id)_sharedInstance;
-(void)beginAutojoiningWiFiNetworks;
-(void)stopAutojoiningWiFiNetworks;
-(WiFiNetworkRef)createNetworkWithSSID:(id)arg1 ;
-(CFArrayRef)_copyAutoJoinableWiFiNetworks;
-(void)dealloc;
@end

