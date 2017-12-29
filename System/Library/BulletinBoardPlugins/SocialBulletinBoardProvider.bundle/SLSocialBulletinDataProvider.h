/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBDataProvider.h>

@class NSMutableSet, NSSet, NSBundle, NSString;

@interface SLSocialBulletinDataProvider : NSObject <BBDataProvider> {

	NSMutableSet* _bulletins;
	unsigned _bulletinCounter;
	NSSet* _uploadServices;
	NSBundle* _socialBundle;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)sortDescriptors;
-(void)_registerForNotifications;
-(void)_removeNotifications;
-(id)_uploadServices;
-(id)_supportedNotifications;
-(id)_uploadServiceForNotificationName:(id)arg1 ;
-(id)_notificationMessageMap;
-(void)_addBulletinWithTitle:(id)arg1 message:(id)arg2 forUploadService:(id)arg3 ;
-(id)_socialBundle;
-(void)_configureSectionSubtypeParameters:(id)arg1 forUploadService:(id)arg2 ;
-(void)_createBulletinsForUploadInfoDicts:(id)arg1 uploadService:(id)arg2 ;
-(id)sectionIdentifier;
-(id)defaultSectionInfo;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)sectionDisplayName;
-(id)sectionIconData;
@end
