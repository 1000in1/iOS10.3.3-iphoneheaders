/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/TV-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface VideosBadge : UIView {

	UILabel* _badgeLabel;

}

@property (nonatomic,readonly) UILabel * badgeLabel;              //@synthesize badgeLabel=_badgeLabel - In the implementation block
-(UILabel *)badgeLabel;
-(void)setBadgeText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
@end

