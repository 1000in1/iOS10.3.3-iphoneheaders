/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/SecondaryCloudCallingSettingsBundle.bundle/SecondaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIScrollView, UILabel;

@interface PHSettingsAboutView : UIView {

	UIScrollView* _scrollView;
	UILabel* _aboutTextLabel;

}

@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * aboutTextLabel;               //@synthesize aboutTextLabel=_aboutTextLabel - In the implementation block
-(void)setAboutTextLabel:(UILabel *)arg1 ;
-(UILabel *)aboutTextLabel;
-(void)layoutSubviews;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)initWithBodyText:(id)arg1 ;
@end

