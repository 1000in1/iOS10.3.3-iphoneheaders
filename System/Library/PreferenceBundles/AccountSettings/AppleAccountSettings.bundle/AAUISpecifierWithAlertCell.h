/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface AAUISpecifierWithAlertCell : PSTableCell {

	UILabel* alertTitle;
	UILabel* alertSubtitle;

}
+(int)cellStyle;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

