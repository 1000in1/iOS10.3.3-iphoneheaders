/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIControl.h>

@class UILayoutGuide, NSArray, UILabel, UIButton, NSString;

@interface NavContainerResumeRouteControl : UIControl {

	UILayoutGuide* _contentLayoutGuide;
	NSArray* _contentLayoutGuideConstraints;
	UILabel* _titleLabel;
	UIButton* _closeButton;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,readonly) UILayoutGuide * contentLayoutGuide;                 //@synthesize contentLayoutGuide=_contentLayoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * contentLayoutGuideConstraints;              //@synthesize contentLayoutGuideConstraints=_contentLayoutGuideConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                             //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                       //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(void)updateTheme;
-(void)_closeButtonAction;
-(void)_updateContentEdgeInsets;
-(NSArray *)contentLayoutGuideConstraints;
-(void)setContentLayoutGuideConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(UILayoutGuide *)contentLayoutGuide;
-(UIButton *)closeButton;
-(void)_updateBackgroundColor;
@end

