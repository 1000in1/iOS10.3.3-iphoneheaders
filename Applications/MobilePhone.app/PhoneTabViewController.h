/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PhoneTabViewController <NSObject,PhoneBadgeable>
@optional
+(int)tabBarSystemItem;
+(id)tabBarIconImage;
+(id)tabBarIconImageSelected;
+(id)tabBarIconImageName;
+(char)requiresNavigationControllerContainer;
-(char)tabBarControllerShouldSelectViewController:(id)arg1;
-(void)handleURL:(id)arg1;

@required
+(id)tabBarIconName;
+(int)tabViewType;
+(id)defaultPNGName;
-(void)prepareForSnapshot;
-(char)shouldSnapshot;

@end

