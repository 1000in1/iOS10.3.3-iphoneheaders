/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:28 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/PlugIns/com.apple.CloudDocsUI.CloudSharing.appex/com.apple.CloudDocsUI.CloudSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <com.apple.CloudDocsUI.CloudSharing/_UIShareTableValueCell.h>

@class NSArray, UILayoutGuide, BRShareParticipantCellValue, CNAvatarViewController, UILabel, NSString;

@interface BRShareParticipantCell : UITableViewCell <_UIShareTableValueCell> {

	NSArray* _avatarConstraints;
	NSArray* _textConstraints;
	UILayoutGuide* _textCenterLayoutGuide;
	BRShareParticipantCellValue* _representedValue;
	CNAvatarViewController* _avatarViewController;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) CNAvatarViewController * avatarViewController;               //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                     //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) BRShareParticipantCellValue * representedValue;              //@synthesize representedValue=_representedValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRepresentedValue:(BRShareParticipantCellValue *)arg1 ;
-(void)_setupWithAvatar:(char)arg1 subtitle:(char)arg2 ;
-(BRShareParticipantCellValue *)representedValue;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
@end

