/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface UIPickerContentView : UIView {

	UILabel* _titleLabel;
	UIImageView* _checkView;
	struct {
		unsigned checked : 1;
		unsigned highlighted : 1;
	}  _pickerContentViewFlags;

}

@property (assign,getter=isChecked,nonatomic) char checked; 
@property (nonatomic,readonly) UILabel * titleLabel; 
+(float)_checkmarkOffset;
-(void)layoutSubviews;
-(void)setChecked:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(char)isHighlighted;
-(char)_isSelectable;
-(float)labelWidthForBounds:(CGRect)arg1 ;
-(char)isChecked;
-(id)checkedColor;
@end

