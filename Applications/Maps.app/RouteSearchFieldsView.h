/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>
#import <Maps/MapsTheming.h>

@class RouteSearchTextField, UIButton, UIView, BlurDarkeningBackgroundView, NSString;

@interface RouteSearchFieldsView : NUIContainerStackView <MapsTheming> {

	RouteSearchTextField* _fromField;
	RouteSearchTextField* _toField;
	UIButton* _swapButton;
	UIView* _fieldSeparator;
	BlurDarkeningBackgroundView* _blurBackgroundView;

}

@property (nonatomic,retain) UIView * fieldSeparator;                                       //@synthesize fieldSeparator=_fieldSeparator - In the implementation block
@property (nonatomic,retain) BlurDarkeningBackgroundView * blurBackgroundView;              //@synthesize blurBackgroundView=_blurBackgroundView - In the implementation block
@property (nonatomic,retain) RouteSearchTextField * fromField;                              //@synthesize fromField=_fromField - In the implementation block
@property (nonatomic,retain) RouteSearchTextField * toField;                                //@synthesize toField=_toField - In the implementation block
@property (nonatomic,retain) UIButton * swapButton;                                         //@synthesize swapButton=_swapButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_customInit;
-(void)updateTheme;
-(void)_refreshFont;
-(void)setFromField:(RouteSearchTextField *)arg1 ;
-(UIButton *)swapButton;
-(void)setSwapButton:(UIButton *)arg1 ;
-(void)setFieldSeparator:(UIView *)arg1 ;
-(BlurDarkeningBackgroundView *)blurBackgroundView;
-(void)setBlurBackgroundView:(BlurDarkeningBackgroundView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_createSubviews;
-(UIView *)fieldSeparator;
-(RouteSearchTextField *)fromField;
-(RouteSearchTextField *)toField;
-(void)setToField:(RouteSearchTextField *)arg1 ;
@end

