/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITextView.h>

@class UILabel;

@interface TextViewWithPlaceholderText : UITextView {

	UILabel* _placeholderLabel;

}

@property (nonatomic,readonly) UILabel * placeholderLabel;              //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)_updatePlaceholderVisibility;
-(UILabel *)placeholderLabel;
@end

