/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/SoftwareUpdateServicesUIPlugin.servicebundle/SoftwareUpdateServicesUIPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServicesUIPlugin/SUSUIBaseAlertItem.h>

@interface SUSUISetupUpgradeAlertItem : SUSUIBaseAlertItem {

	char _goingToSetup;
	/*^block*/id _acknowledgementBlock;

}
-(char)allowAutoUnlock;
-(id)initWithGoingToSetup:(char)arg1 withAcknowledgementBlock:(/*^block*/id)arg2 ;
-(void)_acknowledge;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)allowLockScreenDismissal;
-(char)shouldShowInLockScreen;
-(char)unlocksScreen;
-(char)allowInSetup;
@end

