/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <AppleAccountSettings/AAUIInviteViewProtocol.h>

@class UILabel, UIImageView, AAUIFamilySharingFeaturesView, NSString;

@interface AAUIStandardInviteView : UIView <AAUIInviteViewProtocol> {

	UILabel* _titleLabel;
	UIImageView* _familySharingLogo;
	UILabel* _inviteHeaderLabel;
	AAUIFamilySharingFeaturesView* _featuresView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInvite:(id)arg1 hideLocationSharing:(char)arg2 ;
-(id)_labelWithCenteredText:(id)arg1 ;
-(float)_heightForTitle:(id)arg1 width:(float)arg2 ;
-(void)layoutSubviews;
-(float)desiredHeightForWidth:(float)arg1 ;
-(float)_heightForText:(id)arg1 width:(float)arg2 ;
@end

