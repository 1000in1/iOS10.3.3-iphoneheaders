/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RAPNotification : NSObject
+(id)generateNotificationID;
+(char)isValidNotificationID:(id)arg1 ;
+(id)filenameForNotificationID:(id)arg1 ;
+(id)notificationCachePath;
+(char)shouldDeleteNotificationWithID:(id)arg1 ;
+(char)deleteNotificationWithID:(id)arg1 ;
+(char)deleteNotificationWithID:(id)arg1 error:(id*)arg2 ;
+(id)errorDomain;
@end
