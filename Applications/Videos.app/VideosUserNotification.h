/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Videos/Videos-Structs.h>
@class NSObject, NSString;

@interface VideosUserNotification : NSObject {

	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CFDictionaryRef _notificationDictionary;
	CFUserNotificationRef _userNotification;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) id completionHandler; 
-(void)_setValue:(id)arg1 forUserNotificationKey:(CFStringRef)arg2 ;
-(void)_redisplayIfNeeded;
-(void)_dismissWithResponseDictionary:(id)arg1 flags:(unsigned long)arg2 ;
-(id)buttonTitleForKey:(CFStringRef)arg1 ;
-(void)setButtonTitle:(id)arg1 forKey:(CFStringRef)arg2 ;
-(id)init;
-(void)cancel;
-(void)show;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)_cancelUserNotification;
@end

