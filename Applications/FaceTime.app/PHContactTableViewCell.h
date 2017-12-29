/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UILabel, UIImage, NSString, CNAvatarViewController, UIImageView, NSLayoutConstraint;

@interface PHContactTableViewCell : UITableViewCell {

	char _contentViewLoaded;
	char _contentViewConstraintsLoaded;
	UIView* _avatarContentView;
	UILabel* _contactNameLabel;
	UIImage* _transportImage;
	UILabel* _transportNameLabel;
	NSString* _actionType;
	CNAvatarViewController* _avatarViewController;
	UIImageView* _transportImageView;
	NSLayoutConstraint* _contactNameLabelBaselineLayoutConstraint;
	NSLayoutConstraint* _contentViewBottomLayoutConstraint;
	NSLayoutConstraint* _transportImageViewWidthLayoutConstraint;
	NSLayoutConstraint* _transportNameLabelBaselineLayoutConstraint;
	NSLayoutConstraint* _transportNameLabelLeadingLayoutConstraint;
	NSLayoutConstraint* _transportNameLabelTrailingAnchorLayoutConstraint;

}

@property (assign,getter=isContentViewLoaded,nonatomic) char contentViewLoaded;                                    //@synthesize contentViewLoaded=_contentViewLoaded - In the implementation block
@property (assign,getter=isContentViewConstraintsLoaded,nonatomic) char contentViewConstraintsLoaded;              //@synthesize contentViewConstraintsLoaded=_contentViewConstraintsLoaded - In the implementation block
@property (nonatomic,retain) UILabel * contactNameLabel;                                                           //@synthesize contactNameLabel=_contactNameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * transportImageView;                                                     //@synthesize transportImageView=_transportImageView - In the implementation block
@property (nonatomic,retain) UILabel * transportNameLabel;                                                         //@synthesize transportNameLabel=_transportNameLabel - In the implementation block
@property (nonatomic,readonly) float contactNameLabelBaselineLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * contactNameLabelBaselineLayoutConstraint;                        //@synthesize contactNameLabelBaselineLayoutConstraint=_contactNameLabelBaselineLayoutConstraint - In the implementation block
@property (nonatomic,readonly) float contentViewBottomLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomLayoutConstraint;                               //@synthesize contentViewBottomLayoutConstraint=_contentViewBottomLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * transportImageViewWidthLayoutConstraint;                         //@synthesize transportImageViewWidthLayoutConstraint=_transportImageViewWidthLayoutConstraint - In the implementation block
@property (nonatomic,readonly) float transportNameLabelBaselineLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * transportNameLabelBaselineLayoutConstraint;                      //@synthesize transportNameLabelBaselineLayoutConstraint=_transportNameLabelBaselineLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * transportNameLabelLeadingLayoutConstraint;                       //@synthesize transportNameLabelLeadingLayoutConstraint=_transportNameLabelLeadingLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * transportNameLabelTrailingAnchorLayoutConstraint;                //@synthesize transportNameLabelTrailingAnchorLayoutConstraint=_transportNameLabelTrailingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) UIView * avatarContentView;                                                         //@synthesize avatarContentView=_avatarContentView - In the implementation block
@property (nonatomic,retain) UIImage * transportImage;                                                             //@synthesize transportImage=_transportImage - In the implementation block
@property (nonatomic,copy) NSString * actionType;                                                                  //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * avatarViewController;                                        //@synthesize avatarViewController=_avatarViewController - In the implementation block
+(char)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
+(float)minimumRowHeight;
+(id)imageForActionType:(id)arg1 ;
-(void)loadContentViewConstraints;
-(NSLayoutConstraint *)transportNameLabelTrailingAnchorLayoutConstraint;
-(void)setTransportNameLabelTrailingAnchorLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)transportImageViewWidthLayoutConstraint;
-(NSLayoutConstraint *)contentViewBottomLayoutConstraint;
-(float)contentViewBottomLayoutConstraintConstant;
-(char)isContentViewConstraintsLoaded;
-(void)setContentViewConstraintsLoaded:(char)arg1 ;
-(void)setContentViewBottomLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTransportImageViewWidthLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)commonInit;
-(void)setActionType:(NSString *)arg1 ;
-(void)updateFonts;
-(void)setTransportImage:(UIImage *)arg1 ;
-(UIView *)avatarContentView;
-(UIImageView *)transportImageView;
-(void)updateConstraintsConstants;
-(NSLayoutConstraint *)contactNameLabelBaselineLayoutConstraint;
-(float)contactNameLabelBaselineLayoutConstraintConstant;
-(NSLayoutConstraint *)transportNameLabelBaselineLayoutConstraint;
-(float)transportNameLabelBaselineLayoutConstraintConstant;
-(NSLayoutConstraint *)transportNameLabelLeadingLayoutConstraint;
-(UILabel *)contactNameLabel;
-(UILabel *)transportNameLabel;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setContactNameLabel:(UILabel *)arg1 ;
-(UIImage *)transportImage;
-(void)setTransportNameLabel:(UILabel *)arg1 ;
-(void)setTransportImageView:(UIImageView *)arg1 ;
-(void)setContactNameLabelBaselineLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTransportNameLabelBaselineLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTransportNameLabelLeadingLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(char)isContentViewLoaded;
-(NSString *)actionType;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(void)loadContentView;
-(void)setContentViewLoaded:(char)arg1 ;
@end
