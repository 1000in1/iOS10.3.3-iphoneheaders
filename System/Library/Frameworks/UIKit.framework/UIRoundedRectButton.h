/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIBezierPath, UIColor, UIGroupTableViewCellBackground, UIView;

@interface UIRoundedRectButton : UIButton {

	UIBezierPath* _fillPath;
	UIColor* _fillColor;
	UIGroupTableViewCellBackground* _tableViewStyleBackground;
	UIView* _shadowView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_backgroundView;
-(char)_canDrawContent;
-(void)setTintColor:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(int)buttonType;
-(void)_updateState;
-(id)_setupBackgroundView;
-(id)_contentBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 ;
-(void)_commonRoundedRectButtonInit;
-(char)_wantsTableViewStyleBackground;
-(void)_invalidatePaths;
-(void)_invalidateBackingViews;
@end

