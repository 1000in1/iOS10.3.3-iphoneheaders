/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIColor, NSString;

@interface CHFriendDetailGoalCell : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIColor* _keyColor;
	NSString* _metricString;
	NSString* _unitString;

}
+(float)preferredHeight;
-(void)setCurrentValue:(id)arg1 unitString:(id)arg2 ;
-(void)setCurrentValue:(id)arg1 goalValue:(id)arg2 unitString:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
-(void)_setupCell;
-(void)setKeyColor:(id)arg1 ;
@end

