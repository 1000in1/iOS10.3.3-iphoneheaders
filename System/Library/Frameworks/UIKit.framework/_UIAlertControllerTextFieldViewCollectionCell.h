/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _UIAlertControllerTextFieldView, UITapGestureRecognizer;

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {

	_UIAlertControllerTextFieldView* _textField;
	UITapGestureRecognizer* _selectButtonGesture;

}

@property (nonatomic,readonly) _UIAlertControllerTextFieldView * textField; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredFocusedView;
-(void)focusedViewDidChange;
-(void)prepareForReuse;
-(_UIAlertControllerTextFieldView *)textField;
-(void)_selectButton:(id)arg1 ;
-(void)setTextField:(id)arg1 horizontalMargin:(float)arg2 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
@end

