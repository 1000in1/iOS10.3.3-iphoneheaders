/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIStackView;

@interface RouteCalloutInteriorView : UIView {

	UILabel* _label;
	UIImageView* _leadingImageView;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UILabel * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * leadingImageView;              //@synthesize leadingImageView=_leadingImageView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                     //@synthesize stackView=_stackView - In the implementation block
-(void)_customInit;
-(void)setLeadingImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIStackView *)stackView;
-(UIImageView *)leadingImageView;
-(void)setLeadingImage:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)_setupConstraints;
@end

