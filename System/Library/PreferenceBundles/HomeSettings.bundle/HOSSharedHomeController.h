/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class HMHome;

@interface HOSSharedHomeController : PSListController {

	HMHome* _home;

}

@property (nonatomic,retain) HMHome * home;              //@synthesize home=_home - In the implementation block
-(void)leaveHome:(id)arg1 ;
-(id)leaveSpecifiers;
-(id)adminSpecifiers;
-(void)_reallyLeaveHome;
-(void)didTapUser:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)specifiers;
@end
