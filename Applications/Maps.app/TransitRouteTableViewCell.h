/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RouteTableViewCell.h>

@class TransitArtworkListView, NSLayoutConstraint, _MKUILabel;

@interface TransitRouteTableViewCell : RouteTableViewCell {

	char _inRecursiveLayout;
	TransitArtworkListView* _shieldListView;
	NSLayoutConstraint* _topToShieldListViewConstraint;
	_MKUILabel* _badgeLabel;
	NSLayoutConstraint* _badgeLabelTrailingConstraint;
	NSLayoutConstraint* _topShieldViewToBadgeLabelConstraint;
	NSLayoutConstraint* _secondaryLabelBaselineAlignWithBadgeConstraint;
	NSLayoutConstraint* _secondaryLabelTrailingToBadgeLeadingConstraint;
	char _canSpanFullWidth;
	float _leftPadding;

}

@property (nonatomic,readonly) UIEdgeInsets contentHorizontalMargins; 
@property (assign,nonatomic) char canSpanFullWidth;                                //@synthesize canSpanFullWidth=_canSpanFullWidth - In the implementation block
@property (assign,nonatomic) float leftPadding;                                    //@synthesize leftPadding=_leftPadding - In the implementation block
-(void)_updateCellLabels;
-(id)_buttonConstraintsController;
-(id)_autolayoutConstraints;
-(id)_anchorFromWhichToPositionPrimaryLabelFirstBaseline;
-(float)_distanceToPositionPrimaryLabelFirstBaseline;
-(void)setShowDisclosureButton:(char)arg1 ;
-(char)_isShieldListViewOverlappingWithBadge;
-(UIEdgeInsets)contentHorizontalMargins;
-(void)_updateShieldListView;
-(void)_updateRouteBadge;
-(void)_configureRouteBadge;
-(id)_indexedContentSubviewOrNullArray;
-(char)canSpanFullWidth;
-(void)setCanSpanFullWidth:(char)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_createSubviews;
-(void)setLeftPadding:(float)arg1 ;
-(void)_updateConstraintValues;
-(float)leftPadding;
@end

