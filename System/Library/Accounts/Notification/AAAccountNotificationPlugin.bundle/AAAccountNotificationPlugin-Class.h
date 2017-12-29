/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/Notification/AAAccountNotificationPlugin.bundle/AAAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@class NSString;

@interface AAAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_secondaryAccountTypes;
-(void)addFMFChildAccountToAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_notifyIDSProxyOfAccount:(id)arg1 store:(id)arg2 withCommand:(id)arg3 ;
-(void)_dismissFollowUpWithIdentifier:(id)arg1 ;
-(void)_postFollowUpWithIdentifier:(id)arg1 ;
-(void)_postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)_saveOptionsForProxiedDeviceAuth;
-(void)_showRedirectToBridgeAlertForAccount:(id)arg1 ;
-(void)addFMIPChildAccountToAccount:(id)arg1 inStore:(id)arg2 ;
-(char)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end
