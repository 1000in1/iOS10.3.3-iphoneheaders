/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/SoftwareUpdateServicesUIPlugin.servicebundle/SoftwareUpdateServicesUIPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUAutoInstallOperationDelegate <NSObject>
@required
-(void)autoInstallOperationDidConsent:(id)arg1;
-(void)autoInstallOperationWasCancelled:(id)arg1;
-(void)autoInstallOperationDidExpire:(id)arg1;
-(void)autoInstallOperationIsReadyToInstall:(id)arg1 withResponse:(/*^block*/id)arg2;

@end

