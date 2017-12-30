/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, UILabel, UIImageView, NSLayoutConstraint, UIView;

@interface _UILocationResultsTableViewCell : UITableViewCell {

	int _locationImageType;
	UIImage* _customLocationImage;
	UILabel* _searchTextLabel;
	UILabel* _searchDetailTextLabel;
	UIImageView* _searchImageView;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _interLabelSpaceConstraint;
	NSLayoutConstraint* _bottomMarginConstraint;
	UIView* _cellHeightStrut;
	float _additionalLeftSidePadding;

}

@property (nonatomic,retain) UILabel * searchTextLabel;                                   //@synthesize searchTextLabel=_searchTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * searchDetailTextLabel;                             //@synthesize searchDetailTextLabel=_searchDetailTextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * searchImageView;                               //@synthesize searchImageView=_searchImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topMarginConstraint;                    //@synthesize topMarginConstraint=_topMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * interLabelSpaceConstraint;              //@synthesize interLabelSpaceConstraint=_interLabelSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomMarginConstraint;                 //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
@property (nonatomic,retain) UIView * cellHeightStrut;                                    //@synthesize cellHeightStrut=_cellHeightStrut - In the implementation block
@property (assign,nonatomic) float additionalLeftSidePadding;                             //@synthesize additionalLeftSidePadding=_additionalLeftSidePadding - In the implementation block
@property (assign,nonatomic) int locationImageType;                                       //@synthesize locationImageType=_locationImageType - In the implementation block
@property (nonatomic,copy) UIImage * customLocationImage;                                 //@synthesize customLocationImage=_customLocationImage - In the implementation block
-(void)layoutSubviews;
-(id)contentView;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(id)textLabel;
-(id)detailTextLabel;
-(id)imageView;
-(id)_searchImageView;
-(int)locationImageType;
-(float)_defaultCellTopMargin;
-(void)setTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(float)_defaultCellBottomMargin;
-(void)setBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(float)_subtitleCellTopMargin;
-(void)_applyLeftAndRightAlignmentConstraints:(id)arg1 ;
-(float)_subtitleCellBottomMargin;
-(float)_subtitleCellInterLabelSpace;
-(void)setInterLabelSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateLabelFontsAndConstraints;
-(void)setLocationImageType:(int)arg1 ;
-(void)setCustomLocationImage:(UIImage *)arg1 ;
-(UIImage *)customLocationImage;
-(UILabel *)searchTextLabel;
-(void)setSearchTextLabel:(UILabel *)arg1 ;
-(UILabel *)searchDetailTextLabel;
-(void)setSearchDetailTextLabel:(UILabel *)arg1 ;
-(UIImageView *)searchImageView;
-(void)setSearchImageView:(UIImageView *)arg1 ;
-(NSLayoutConstraint *)topMarginConstraint;
-(NSLayoutConstraint *)interLabelSpaceConstraint;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(UIView *)cellHeightStrut;
-(void)setCellHeightStrut:(UIView *)arg1 ;
-(float)additionalLeftSidePadding;
-(void)setAdditionalLeftSidePadding:(float)arg1 ;
@end

