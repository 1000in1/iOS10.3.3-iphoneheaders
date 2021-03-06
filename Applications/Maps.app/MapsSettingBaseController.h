/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface MapsSettingBaseController : PSListController {

	char _canLocalizeLabels;
	char _supportsNavigation;

}

@property (readonly) char canLocalizeLabels;               //@synthesize canLocalizeLabels=_canLocalizeLabels - In the implementation block
@property (readonly) char supportsNavigation;              //@synthesize supportsNavigation=_supportsNavigation - In the implementation block
-(void)synchronizeSettingsUpdateViews:(id)arg1 ;
-(id)valueForDefaultsKey:(id)arg1 bundleID:(id)arg2 ;
-(id)valueForDefaultsKey:(id)arg1 bundleID:(id)arg2 defaultValue:(id)arg3 ;
-(void)setValue:(id)arg1 forDefaultsKey:(id)arg2 bundleID:(id)arg3 syncToNano:(char)arg4 ;
-(void)_synchronizeNanoDefaultsForDomain:(id)arg1 key:(id)arg2 container:(id)arg3 ;
-(void)_updateSettingsFromCurrentGeoCountryConfiguration;
-(void)contryConfigurationDidChange:(id)arg1 ;
-(char)canLocalizeLabels;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)supportsNavigation;
@end

