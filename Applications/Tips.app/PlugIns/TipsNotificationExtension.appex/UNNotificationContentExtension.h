/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsNotificationExtension.appex/TipsNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol UNNotificationContentExtension <NSObject>
@property (nonatomic,readonly) unsigned mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
@optional
-(void)didReceiveNotificationResponse:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)mediaPlay;
-(void)mediaPause;
-(unsigned)mediaPlayPauseButtonType;
-(CGRect)mediaPlayPauseButtonFrame;
-(UIColor *)mediaPlayPauseButtonTintColor;

@required
-(void)didReceiveNotification:(id)arg1;

@end

