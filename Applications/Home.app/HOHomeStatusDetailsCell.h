/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class HUGridLayoutOptions, UILabel, UIImageView, NSLayoutConstraint, NSString;

@interface HOHomeStatusDetailsCell : UITableViewCell {

	HUGridLayoutOptions* _gridLayoutOptions;
	UILabel* _titleLabel;
	UIImageView* _chevronImageView;
	NSLayoutConstraint* _topMarginConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;                        //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topMarginConstraint;              //@synthesize topMarginConstraint=_topMarginConstraint - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) HUGridLayoutOptions * gridLayoutOptions;               //@synthesize gridLayoutOptions=_gridLayoutOptions - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)setTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topMarginConstraint;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)titleTextColor;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(UIImageView *)chevronImageView;
-(HUGridLayoutOptions *)gridLayoutOptions;
-(void)setGridLayoutOptions:(HUGridLayoutOptions *)arg1 ;
@end

