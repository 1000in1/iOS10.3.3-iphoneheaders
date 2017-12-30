/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UINavigationBar;

@interface UINavBarPrompt : UIView {

	UILabel* _label;
	UINavigationBar* _navBar;

}
-(void)layoutSubviews;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(id)initWithPrompt:(id)arg1 navBar:(id)arg2 ;
-(CGRect)promptBounds;
-(CGRect)_labelFrame;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset_legacy;
@end

