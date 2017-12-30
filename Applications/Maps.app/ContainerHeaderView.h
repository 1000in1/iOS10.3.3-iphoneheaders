/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsThemeView.h>
#import <Maps/HeightConstrained.h>

@protocol HeaderViewDelegate;
@class NSLayoutConstraint, HairlineView, UIButton, VibrantView, MapsThemeLabel, UIView, UILayoutGuide, NSString;

@interface ContainerHeaderView : MapsThemeView <HeightConstrained> {

	HairlineView* _hairLineView;
	UIButton* _actionButton;
	VibrantView* _vibrantView;
	float _hairlineMargin;
	MapsThemeLabel* _defaultTitleLabel;
	NSLayoutConstraint* _layoutGuideLeadingConstraint;
	NSLayoutConstraint* _layoutGuideTrailingConstraint;
	NSLayoutConstraint* _layoutGuideTopConstraint;
	NSLayoutConstraint* _layoutGuideBottomConstraint;
	NSLayoutConstraint* _defaultTitleLabelCenterYConstraint;
	NSLayoutConstraint* _buttonAlignToTopConstraint;
	NSLayoutConstraint* _buttonCenterVerticallyConstraint;
	id<HeaderViewDelegate> _delegate;
	unsigned _buttonAction;
	UIView* _titleView;
	float _verticalAlignmentOffset;
	NSLayoutConstraint* _heightConstraint;
	UILayoutGuide* _titleViewLayoutGuide;

}

@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;               //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) UILayoutGuide * titleViewLayoutGuide;                //@synthesize titleViewLayoutGuide=_titleViewLayoutGuide - In the implementation block
@property (assign,nonatomic,__weak) id<HeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned buttonAction;                               //@synthesize buttonAction=_buttonAction - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                  //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets titleViewInsets; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) float hairLineAlpha; 
@property (assign,nonatomic) char shouldCenterButtonVertically; 
@property (assign,nonatomic) float verticalAlignmentOffset;                       //@synthesize verticalAlignmentOffset=_verticalAlignmentOffset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initialConstraints;
-(void)_customInit;
-(void)updateTheme;
-(void)_setMask:(id)arg1 ;
-(id)initWithMargin:(float)arg1 ;
-(void)_attachDefaultTitleView;
-(id)_defaultTitleViewConstraints;
-(void)setHairLineAlpha:(float)arg1 ;
-(float)hairLineAlpha;
-(char)shouldCenterButtonVertically;
-(void)setShouldCenterButtonVertically:(char)arg1 ;
-(void)setVerticalAlignmentOffset:(float)arg1 ;
-(UILayoutGuide *)titleViewLayoutGuide;
-(void)_createLayoutGuideIfNeeded;
-(void)setTitleViewInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)titleViewInsets;
-(float)verticalAlignmentOffset;
-(void)setTitleViewLayoutGuide:(UILayoutGuide *)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<HeaderViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<HeaderViewDelegate>)delegate;
-(NSString *)title;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setButtonAction:(unsigned)arg1 ;
-(unsigned)buttonAction;
-(void)buttonAction:(id)arg1 ;
-(void)tapAction:(id)arg1 ;
@end

