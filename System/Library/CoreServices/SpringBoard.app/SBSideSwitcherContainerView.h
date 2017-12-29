/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementContainerView.h>

@class SBOrientationTransformWrapperView, UIView;

@interface SBSideSwitcherContainerView : SBLayoutElementContainerView {

	SBOrientationTransformWrapperView* _backgroundWrapperView;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView; 
-(CGRect)contentRectForLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOrientation:(int)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
@end
