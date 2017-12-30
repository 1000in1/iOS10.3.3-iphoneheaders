/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class CloudStorageGroupController, NSMutableArray, PSSpecifier;

@interface UsageController : PSListController {

	CloudStorageGroupController* _cloudGroup;
	NSMutableArray* _storageSpecifiers;
	PSSpecifier* _storageUsedSpecifier;
	PSSpecifier* _storageAvailableSpecifier;

}
-(id)usageStorageSpecifiers;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)specifiers;
@end

