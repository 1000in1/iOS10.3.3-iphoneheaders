/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSMS.app/PlugIns/MessagesNotificationExtension.appex/MessagesNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UNNotificationContentExtensionLegacy <UNNotificationContentExtension>
@property (assign,nonatomic,__weak) id<_UNNotificationContentExtensionLegacyDelegate> legacyDelegate; 
@optional
-(id)audioAccessoryViewForNotification:(id)arg1;

@required
-(id<_UNNotificationContentExtensionLegacyDelegate>)legacyDelegate;
-(void)setLegacyDelegate:(id)arg1;

@end
