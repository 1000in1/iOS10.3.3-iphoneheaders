/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier, UIAlertView, NSMutableArray, WiFiNetwork, WiFiManager, NSString;

@interface APSettingsController : PSListController {

	NSArray* _forgetGroupSpecifiers;
	NSArray* _manageGroupSpecifiers;
	NSArray* _autoJoinGroupSpecifiers;
	NSArray* _autoJoinForgetNetworkGroupSpecifiers;
	NSArray* _autoJoinAutoLoginForgetNetworkGroupSpecifiers;
	NSArray* _segmentGroupSpecifiers;
	NSArray* _configGroupSpecifiers;
	NSArray* _renewGroupSpecifiers;
	NSArray* _renewClientGroupSpecifiers;
	NSArray* _proxySegmentSpecifiers;
	NSArray* _proxyManualSpecifiers;
	NSArray* _proxyAuthSpecifiers;
	NSArray* _proxyPacSpecifiers;
	NSArray* _ipv6GroupSpecifiers;
	PSSpecifier* _joinButtonSpecifier;
	PSSpecifier* _renewGroupSpecifier;
	PSSpecifier* _proxyGroupSpecifier;
	PSSpecifier* _forgetNetworkButtonSpecifier;
	UIAlertView* _forgetNetworkAlertView;
	NSMutableArray* _currentConfigSpecifiers;
	PSSpecifier* _searchDomainSpecifier;
	PSSpecifier* _clientIDSpecifier;
	WiFiNetwork* _network;
	char _canForget;
	char _canSetAutoJoin;
	char _canSetAutoLogin;
	char _justForgot;
	char _isCarplayOnlyNetwork;
	char _ignoreNetworkNotifications;
	WiFiManager* _manager;
	int _setupMode;
	int _oldSetupMode;
	NSString* _manualIP;
	NSString* _manualSubnetMask;
	NSString* _manualRouter;
	NSString* _manualDNSServers;
	NSString* _manualSearchDomains;
	int _proxyType;

}
-(id)init;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)willResignActive;
-(void)join:(id)arg1 ;
-(void)networkChanged:(id)arg1 ;
-(BOOL)isValidIpAddress:(id)arg1 checkValue:(char)arg2 ;
-(void)forgetNetwork:(id)arg1 ;
-(void)__updateSettings;
-(void)scrollToEnd;
-(id)proxyUsesAuthentication:(id)arg1 ;
-(void)showForgetNetworkAlert:(id)arg1 ;
-(id)configType:(id)arg1 ;
-(id)formatDHCPLeaseExpiration:(id)arg1 ;
-(id)proxyType:(id)arg1 ;
-(char)isEditableInNonManualMode:(int)arg1 ;
-(void)settingsChanged:(id)arg1 ;
-(BOOL)validManualSettings;
-(char)validProxySettings;
-(id)autoLogin:(id)arg1 ;
-(void)manageButton:(id)arg1 ;
-(void)renewDHCPLease:(id)arg1 ;
-(void)setConfigType:(id)arg1 specifier:(id)arg2 ;
-(void)setIPAddress:(id)arg1 specifier:(id)arg2 ;
-(id)IPAddress:(id)arg1 ;
-(void)setSubnetMask:(id)arg1 specifier:(id)arg2 ;
-(id)subnetMask:(id)arg1 ;
-(void)setRouter:(id)arg1 specifier:(id)arg2 ;
-(id)router:(id)arg1 ;
-(void)setDNSServers:(id)arg1 specifier:(id)arg2 ;
-(id)DNSServers:(id)arg1 ;
-(void)setSearchDomains:(id)arg1 specifier:(id)arg2 ;
-(id)searchDomains:(id)arg1 ;
-(void)setDHCPClientID:(id)arg1 specifier:(id)arg2 ;
-(id)DHCPClientID:(id)arg1 ;
-(id)IPv6Router:(id)arg1 ;
-(id)IPv6Address:(id)arg1 ;
-(void)setProxyServer:(id)arg1 specifier:(id)arg2 ;
-(id)proxyServer:(id)arg1 ;
-(void)setProxyPort:(id)arg1 specifier:(id)arg2 ;
-(id)proxyPort:(id)arg1 ;
-(void)setProxyUsesAuthentication:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyUsername:(id)arg1 specifier:(id)arg2 ;
-(id)proxyUsername:(id)arg1 ;
-(void)setProxyPassword:(id)arg1 specifier:(id)arg2 ;
-(id)proxyPassword:(id)arg1 ;
-(void)setProxyType:(id)arg1 specifier:(id)arg2 ;
-(id)proxyPacFile:(id)arg1 ;
-(void)setProxyPacFile:(id)arg1 specifier:(id)arg2 ;
-(void)showHealthLink;
-(void)setAutoJoin:(id)arg1 specifier:(id)arg2 ;
-(id)autoJoin:(id)arg1 ;
-(void)setAutoLogin:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
-(char)canBeShownFromSuspendedState;
@end

