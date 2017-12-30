/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyiPhone/FMIPViewController.h>

@class UILabel, UIButton, NSDictionary;

@interface AppDeprecatedViewController : FMIPViewController {

	UILabel* _appDeprecatedTitle;
	UILabel* _appDeprecatedDescription;
	UIButton* _updateAppButton;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) UILabel * appDeprecatedTitle;                    //@synthesize appDeprecatedTitle=_appDeprecatedTitle - In the implementation block
@property (nonatomic,retain) UILabel * appDeprecatedDescription;              //@synthesize appDeprecatedDescription=_appDeprecatedDescription - In the implementation block
@property (nonatomic,retain) UIButton * updateAppButton;                      //@synthesize updateAppButton=_updateAppButton - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
-(char)isTerminalViewController;
-(void)updateApp:(id)arg1 ;
-(UILabel *)appDeprecatedTitle;
-(void)setAppDeprecatedTitle:(UILabel *)arg1 ;
-(UILabel *)appDeprecatedDescription;
-(void)setAppDeprecatedDescription:(UILabel *)arg1 ;
-(UIButton *)updateAppButton;
-(void)setUpdateAppButton:(UIButton *)arg1 ;
-(NSDictionary *)userInfo;
-(void)viewDidLoad;
-(void)setUserInfo:(NSDictionary *)arg1 ;
@end

