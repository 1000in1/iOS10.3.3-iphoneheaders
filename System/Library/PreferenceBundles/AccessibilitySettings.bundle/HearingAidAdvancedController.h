/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityListController.h>

@class AXRemoteHearingAidDevice;

@interface HearingAidAdvancedController : AccessibilityListController {

	AXRemoteHearingAidDevice* _device;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(id)connection:(id)arg1 ;
-(id)HIID:(id)arg1 ;
-(id)firmwareVersion:(id)arg1 ;
-(id)hardwareVersion:(id)arg1 ;
-(id)specifiersForEar:(int)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSpecifier:(id)arg1 ;
-(AXRemoteHearingAidDevice *)device;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(id)specifiers;
@end

