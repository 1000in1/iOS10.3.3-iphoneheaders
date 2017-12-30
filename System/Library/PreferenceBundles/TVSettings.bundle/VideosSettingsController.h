/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/TVSettings.bundle/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSSpecifier, NSString;

@interface VideosSettingsController : PSListController <UIAlertViewDelegate> {

	id _accountChangeNotificationToken;
	PSSpecifier* _homeSharingSignInButtonSpecifier;
	PSSpecifier* _homeSharingSignOutButtonSpecifier;
	PSSpecifier* _homeSharingGroupSpecifier;
	PSSpecifier* _playbackQualityCellularSpecifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)homeSharingSignInButtonAction:(id)arg1 ;
-(void)homeSharingSignOutButtonAction:(id)arg1 ;
-(void)setUseCellularData:(id)arg1 specifier:(id)arg2 ;
-(void)setShowPlaybackQuality:(id)arg1 specifier:(id)arg2 ;
-(void)setShowPlaybackCellularQuality:(id)arg1 specifier:(id)arg2 ;
-(void)_updateHomeSharingSpecifiersAnimated:(char)arg1 shouldUpdateUsingTableView:(char)arg2 ;
-(void)_updateCellularSpecifiersAnimated:(char)arg1 shouldUpdateUsingTableView:(char)arg2 ;
-(void)_updateCellularQualitySpecifiersAnimated:(char)arg1 shouldUpdateUsingTableView:(char)arg2 ;
-(id)init;
-(id)homeSharingAppleID;
-(id)specifiers;
@end
