/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, VerticalShadowView;

@interface PedestrianTagView : UIView {

	char _isDimmed;
	UILabel* _titleLabel;
	UILabel* _detailsLabel;
	VerticalShadowView* _shadowView;

}

@property (nonatomic,retain) VerticalShadowView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailsLabel;                       //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (assign,nonatomic) char isDimmed;                                //@synthesize isDimmed=_isDimmed - In the implementation block
-(void)updateStyleForTheme;
-(void)setIsDimmed:(char)arg1 ;
-(void)updateStyleThemeDimmed:(char)arg1 animation:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(VerticalShadowView *)shadowView;
-(void)setShadowView:(VerticalShadowView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDetailsLabel:(UILabel *)arg1 ;
-(UILabel *)detailsLabel;
-(char)isDimmed;
@end
