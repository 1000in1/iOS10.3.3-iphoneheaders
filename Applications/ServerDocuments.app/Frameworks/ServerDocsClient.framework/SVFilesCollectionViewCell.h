/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, SVGridProgressView, NSLayoutConstraint;

@interface SVFilesCollectionViewCell : UICollectionViewCell {

	char _enabled;
	UIImageView* _imageView;
	UILabel* _nameLabel;
	UILabel* _detailLabel;
	SVGridProgressView* _downloadProgressView;
	int _itemType;
	NSLayoutConstraint* _imageViewWidthConstraint;
	UIImageView* _badgeImageView;
	NSLayoutConstraint* _badgeImageViewWidthConstraint;
	NSLayoutConstraint* _badgeViewTrailingConstraint;
	NSLayoutConstraint* _badgeViewBottomConstraint;

}

@property (assign,nonatomic,__weak) NSLayoutConstraint * imageViewWidthConstraint;                   //@synthesize imageViewWidthConstraint=_imageViewWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * badgeImageView;                                    //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * badgeImageViewWidthConstraint;              //@synthesize badgeImageViewWidthConstraint=_badgeImageViewWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * badgeViewTrailingConstraint;                //@synthesize badgeViewTrailingConstraint=_badgeViewTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * badgeViewBottomConstraint;                  //@synthesize badgeViewBottomConstraint=_badgeViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * nameLabel;                                             //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * detailLabel;                                           //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) SVGridProgressView * downloadProgressView;                              //@synthesize downloadProgressView=_downloadProgressView - In the implementation block
@property (assign,nonatomic) char enabled;                                                           //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int itemType;                                                           //@synthesize itemType=_itemType - In the implementation block
-(SVGridProgressView *)downloadProgressView;
-(void)setDownloadProgressViewHidden:(char)arg1 animated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setBadgeImage:(id)arg1 animated:(char)arg2 ;
-(NSLayoutConstraint *)imageViewWidthConstraint;
-(void)setImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateBadgeViewConstraints;
-(NSLayoutConstraint *)badgeViewBottomConstraint;
-(NSLayoutConstraint *)badgeViewTrailingConstraint;
-(void)setDownloadProgressView:(SVGridProgressView *)arg1 ;
-(void)setBadgeViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBadgeViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)badgeImageViewWidthConstraint;
-(void)setBadgeImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)layoutSubviews;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)awakeFromNib;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(int)itemType;
-(void)updateFonts;
-(UILabel *)detailLabel;
-(void)setItemType:(int)arg1 ;
-(UIImageView *)badgeImageView;
-(void)setBadgeImageView:(UIImageView *)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
@end

