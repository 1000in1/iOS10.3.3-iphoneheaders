/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/PreferencesAssistant.assistantBundle/PreferencesAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetPowerSavingMode.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface PreferencesAssistantSetLowPowerMode : SASettingSetPowerSavingMode <AFServiceCommand>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isLowPowerModeSupported;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

