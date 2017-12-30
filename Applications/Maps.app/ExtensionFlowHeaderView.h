/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/MKViewWithHairline.h>

@protocol ExtensionFlowHeaderViewDelegate;
@class UIButton, UIView, UILabel, UIImageView, NSLayoutConstraint, UIImage, NSString;

@interface ExtensionFlowHeaderView : MKViewWithHairline {

	char _fillSuperview;
	unsigned _dismissButtonType;
	id<ExtensionFlowHeaderViewDelegate> _delegate;
	UIButton* _dismissButtonX;
	UIButton* _dismissButtonDone;
	UIView* _closeButtonBackgroundView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIImageView* _iconImageView;
	UIImageView* _bannerImageView;
	NSLayoutConstraint* _iconImageViewLeadingConstraint;
	NSLayoutConstraint* _titleVerticalConstraintDetailNotPresent;
	NSLayoutConstraint* _titleVerticalConstraintDetailPresent;

}

@property (nonatomic,readonly) UIButton * dismissButtonX;                                               //@synthesize dismissButtonX=_dismissButtonX - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButtonDone;                                            //@synthesize dismissButtonDone=_dismissButtonDone - In the implementation block
@property (nonatomic,retain) UIView * closeButtonBackgroundView;                                        //@synthesize closeButtonBackgroundView=_closeButtonBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                                   //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * bannerImageView;                                             //@synthesize bannerImageView=_bannerImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconImageViewLeadingConstraint;                       //@synthesize iconImageViewLeadingConstraint=_iconImageViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleVerticalConstraintDetailNotPresent;              //@synthesize titleVerticalConstraintDetailNotPresent=_titleVerticalConstraintDetailNotPresent - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleVerticalConstraintDetailPresent;                 //@synthesize titleVerticalConstraintDetailPresent=_titleVerticalConstraintDetailPresent - In the implementation block
@property (nonatomic,retain) UIImage * bannerImage; 
@property (nonatomic,retain) UIImage * iconImage; 
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * detailText; 
@property (assign,nonatomic) unsigned dismissButtonType;                                                //@synthesize dismissButtonType=_dismissButtonType - In the implementation block
@property (assign,nonatomic,__weak) id<ExtensionFlowHeaderViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char fillSuperview;                                                        //@synthesize fillSuperview=_fillSuperview - In the implementation block
-(void)dismissButtonTapped:(id)arg1 ;
-(void)updateTheme;
-(void)configureDismissButton;
-(void)configureImages;
-(void)setDismissButtonType:(unsigned)arg1 ;
-(unsigned)dismissButtonType;
-(char)fillSuperview;
-(void)setFillSuperview:(char)arg1 ;
-(UIButton *)dismissButtonX;
-(UIButton *)dismissButtonDone;
-(UIView *)closeButtonBackgroundView;
-(void)setCloseButtonBackgroundView:(UIView *)arg1 ;
-(NSLayoutConstraint *)iconImageViewLeadingConstraint;
-(void)setIconImageViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleVerticalConstraintDetailNotPresent;
-(void)setTitleVerticalConstraintDetailNotPresent:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleVerticalConstraintDetailPresent;
-(void)setTitleVerticalConstraintDetailPresent:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<ExtensionFlowHeaderViewDelegate>)arg1 ;
-(id<ExtensionFlowHeaderViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UIImage *)iconImage;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setBannerImage:(UIImage *)arg1 ;
-(UIImage *)bannerImage;
-(UILabel *)detailLabel;
-(void)setupConstraints;
-(void)setIconImage:(UIImage *)arg1 ;
-(UIImageView *)bannerImageView;
-(void)setBannerImageView:(UIImageView *)arg1 ;
@end

