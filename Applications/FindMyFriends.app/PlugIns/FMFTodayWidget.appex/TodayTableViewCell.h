/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/PlugIns/FMFTodayWidget.appex/FMFTodayWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, CNAvatarViewController, FMFDistanceBadge, UILabel, NSLayoutConstraint;

@interface TodayTableViewCell : UITableViewCell {

	char _isSecureVail;
	char _isDeviceLocked;
	UIView* _avatarViewContainer;
	CNAvatarViewController* _avatarViewController;
	FMFDistanceBadge* _distanceBadgeView;
	UILabel* _nameLabel;
	UILabel* _locationLabel;
	UILabel* _ageLabel;
	unsigned _contactHash;
	NSLayoutConstraint* _distanceBadgeWidthConstraint;

}

@property (nonatomic,retain) UIView * avatarViewContainer;                                          //@synthesize avatarViewContainer=_avatarViewContainer - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * avatarViewController;                         //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) FMFDistanceBadge * distanceBadgeView;                                  //@synthesize distanceBadgeView=_distanceBadgeView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                   //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                               //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UILabel * ageLabel;                                                    //@synthesize ageLabel=_ageLabel - In the implementation block
@property (assign,nonatomic) unsigned contactHash;                                                  //@synthesize contactHash=_contactHash - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * distanceBadgeWidthConstraint;              //@synthesize distanceBadgeWidthConstraint=_distanceBadgeWidthConstraint - In the implementation block
@property (assign,nonatomic) char isSecureVail;                                                     //@synthesize isSecureVail=_isSecureVail - In the implementation block
@property (assign,nonatomic) char isDeviceLocked;                                                   //@synthesize isDeviceLocked=_isDeviceLocked - In the implementation block
-(void)setAvatarViewContainer:(UIView *)arg1 ;
-(void)setIsSecureVail:(char)arg1 ;
-(char)isSecureVail;
-(void)setIsDeviceLocked:(char)arg1 ;
-(void)updateViewsWithHandle:(id)arg1 location:(id)arg2 ;
-(UILabel *)ageLabel;
-(void)setDistanceBadgeHidden:(char)arg1 ;
-(unsigned)contactHash;
-(void)setContactHash:(unsigned)arg1 ;
-(FMFDistanceBadge *)distanceBadgeView;
-(NSLayoutConstraint *)distanceBadgeWidthConstraint;
-(void)setDistanceBadgeView:(FMFDistanceBadge *)arg1 ;
-(void)setAgeLabel:(UILabel *)arg1 ;
-(void)setDistanceBadgeWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(char)isDeviceLocked;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(UIView *)avatarViewContainer;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(id)displayNameForContact:(id)arg1 andHandle:(id)arg2 ;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(id)formatPhoneNumber:(id)arg1 ;
-(void)hideSeparator;
@end
