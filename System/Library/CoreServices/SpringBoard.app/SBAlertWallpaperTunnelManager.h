/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAlertManagerObserver.h>

@class SBAlertManager, NSMapTable, NSMutableSet, NSString;

@interface SBAlertWallpaperTunnelManager : NSObject <SBAlertManagerObserver> {

	SBAlertManager* _alertManager;
	NSMapTable* _hiderToHideeMap;
	NSMutableSet* _hiddenAlerts;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerAlertManager:(id)arg1 forScreen:(id)arg2 ;
+(id)sharedInstance;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(char)arg3 ;
-(void)pushTunnelToWallpaperForAlert:(id)arg1 ;
-(void)popTunnelToWallpaperForAlert:(id)arg1 ;
-(void)_setAlertManager:(id)arg1 ;
-(void)_hideAlerts:(id)arg1 onBehalfOfAlert:(id)arg2 ;
-(void)_stopHidingAlertsForAlert:(id)arg1 ;
-(void)_adjustHiddenAlerts;
-(id)dumpTunnelState;
-(id)init;
-(void)dealloc;
-(void)_showAlert:(id)arg1 ;
-(void)_hideAlert:(id)arg1 ;
@end

