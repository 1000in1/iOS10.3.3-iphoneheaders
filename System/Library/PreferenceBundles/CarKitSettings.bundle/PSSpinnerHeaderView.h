/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface PSSpinnerHeaderView : UIView <PSHeaderFooterView> {

	NSString* _title;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(char)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
@end

