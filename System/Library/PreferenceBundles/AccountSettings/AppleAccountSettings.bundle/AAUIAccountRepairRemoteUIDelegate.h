/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAUIAccountRepairRemoteUIDelegate <NSObject>
@optional
-(void)accountRepairRemoteUIWillAppear:(id)arg1;
-(void)accountRepairRemoteUIWillDismiss:(id)arg1;
-(void)accountRepairRemoteUI:(id)arg1 didReceiveObjectModel:(id)arg2;
-(void)accountRepairRemoteUI:(id)arg1 willPresentModalNavigationController:(id)arg2;
-(id)accountRepairRemoteUI:(id)arg1 headersForRequest:(id)arg2;

@required
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(char)arg3;

@end

