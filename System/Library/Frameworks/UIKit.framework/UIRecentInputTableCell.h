/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UITextInputTraits, _UIFloatingContentView;

@interface UIRecentInputTableCell : UITableViewCell {

	UILabel* _floatingLabel;
	int _blurEffectStyle;
	UITextInputTraits* _textInputTraits;

}

@property (nonatomic,retain) UILabel * floatingLabel;                                //@synthesize floatingLabel=_floatingLabel - In the implementation block
@property (assign,nonatomic) int blurEffectStyle;                                    //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (nonatomic,retain) UITextInputTraits * textInputTraits;                    //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,readonly) _UIFloatingContentView * tvFloatingView; 
+(id)focusedTextColorForBlurEffectStyle:(int)arg1 ;
+(id)unfocusedTextColorForBlurEffectStyle:(int)arg1 ;
+(id)backgroundColorForBlurEffectStyle:(int)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(UITextInputTraits *)textInputTraits;
-(void)setTextInputTraits:(UITextInputTraits *)arg1 ;
-(void)setBlurEffectStyle:(int)arg1 ;
-(int)blurEffectStyle;
-(UILabel *)floatingLabel;
-(_UIFloatingContentView *)tvFloatingView;
-(void)setFloatingLabel:(UILabel *)arg1 ;
-(void)_updateAppearance;
-(char)_tvIsDarkMode;
-(void)setInputText:(id)arg1 withBlurStyle:(int)arg2 ;
@end
