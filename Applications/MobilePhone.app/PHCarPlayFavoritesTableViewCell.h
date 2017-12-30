/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/PHCarPlayGenericTableViewCell.h>

@class CNAvatarView, UILabel;

@interface PHCarPlayFavoritesTableViewCell : PHCarPlayGenericTableViewCell {

	CNAvatarView* _avatarView;
	UILabel* _nameLabel;
	UILabel* _phoneNumberTypeLabel;

}

@property (nonatomic,retain) CNAvatarView * avatarView;                   //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * phoneNumberTypeLabel;              //@synthesize phoneNumberTypeLabel=_phoneNumberTypeLabel - In the implementation block
-(UILabel *)phoneNumberTypeLabel;
-(void)setPhoneNumberTypeLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

