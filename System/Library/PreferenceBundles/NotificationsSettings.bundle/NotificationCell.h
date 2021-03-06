/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/NotificationsSettings.bundle/NotificationsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIImageView, NSString;

@interface NotificationCell : PSTableCell {

	UIImageView* _appIcon;
	NSString* _bundlePath;

}

@property (nonatomic,copy) NSString * bundlePath;              //@synthesize bundlePath=_bundlePath - In the implementation block
+(float)defaultCellHeight;
+(int)cellStyle;
-(void)setNotificationTypes:(id)arg1 ;
-(void)dealloc;
-(NSString *)bundlePath;
-(void)setAppIcon:(id)arg1 ;
-(id)getLazyIcon;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setAppName:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(char)canReload;
@end

