/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/PrimaryCloudCallingSettingsBundle.bundle/PrimaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <PrimaryCloudCallingSettingsBundle/PHSettingsCloudCallingURLControllerDelegate.h>

@class NSString;

@interface PHSettingsCloudCallingListController : PSListController <PHSettingsCloudCallingURLControllerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1 ;
-(void)showAboutWiFiCalling;
-(void)presentOrUpdateViewController:(id)arg1 ;
-(id)wiFiCallingAboutLinkString;
-(id)showAboutWiFiCallingMethodName;
-(id)aboutCloudCallingDescriptor;
-(id)wiFiCallingAboutTitleString;
-(id)wiFiCallingAboutBodyString;
@end

