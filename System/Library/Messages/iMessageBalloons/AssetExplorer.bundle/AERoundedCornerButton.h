/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class UILabel, UIImageView;

@interface AERoundedCornerButton : UIControl {

	int __layoutStyle;
	int __buttonType;
	UILabel* __label;
	UIImageView* __imageView;

}

@property (assign,setter=_setLayoutStyle:,nonatomic) int _layoutStyle;                    //@synthesize _layoutStyle=__layoutStyle - In the implementation block
@property (nonatomic,readonly) int _buttonType;                                           //@synthesize _buttonType=__buttonType - In the implementation block
@property (setter=_setLabel:,nonatomic,retain) UILabel * _label;                          //@synthesize _label=__label - In the implementation block
@property (setter=_setImageView:,nonatomic,retain) UIImageView * _imageView;              //@synthesize _imageView=__imageView - In the implementation block
+(id)roundedCornerButtonWithStyle:(int)arg1 buttonType:(int)arg2 ;
-(float)_interpolatedGlyphHorizontalInset;
-(float)_interpolatedGlyphTopInset;
-(void)_commonAERoundedCornerButtonInitializationWithStyle:(int)arg1 buttonType:(int)arg2 ;
-(void)layoutSubviews;
-(int)_buttonType;
-(UIImageView *)_imageView;
-(void)_setLayoutStyle:(int)arg1 ;
-(void)_setImageView:(id)arg1 ;
-(UILabel *)_label;
-(void)_setLabel:(id)arg1 ;
-(int)_layoutStyle;
@end

