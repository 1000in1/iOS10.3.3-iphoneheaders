/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface COSHealthActivityMoveGoalView : UIView {

	UILabel* _goalLabel;
	UIButton* _incrementButton;
	UIButton* _decrementButton;
	UILabel* _energyUnitLabel;

}

@property (nonatomic,readonly) UILabel * goalLabel;                     //@synthesize goalLabel=_goalLabel - In the implementation block
@property (nonatomic,readonly) UIButton * incrementButton;              //@synthesize incrementButton=_incrementButton - In the implementation block
@property (nonatomic,readonly) UIButton * decrementButton;              //@synthesize decrementButton=_decrementButton - In the implementation block
@property (nonatomic,readonly) UILabel * energyUnitLabel;               //@synthesize energyUnitLabel=_energyUnitLabel - In the implementation block
-(UILabel *)goalLabel;
-(UILabel *)energyUnitLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)decrementButton;
-(UIButton *)incrementButton;
@end

