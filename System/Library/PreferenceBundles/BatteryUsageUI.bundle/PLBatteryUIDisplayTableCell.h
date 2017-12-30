/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol PLBatteryUIDisplayTableCellDelegate;
@class UILabel, NSString;

@interface PLBatteryUIDisplayTableCell : PSTableCell {

	int _type;
	UILabel* _prevLabel;
	char _interactiveButton;
	char _ttrButton;
	NSString* _IssueDomain;
	NSString* _IssueType;
	NSString* _IssueProcess;
	NSString* _IssueAttachments;
	id<PLBatteryUIDisplayTableCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLBatteryUIDisplayTableCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(int)cellStyle;
-(id)urlEncodedString:(id)arg1 ;
-(void)ttrPressed;
-(void)layoutSubviews;
-(void)setDelegate:(id<PLBatteryUIDisplayTableCellDelegate>)arg1 ;
-(id<PLBatteryUIDisplayTableCellDelegate>)delegate;
-(void)refresh:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(char)canReload;
@end

