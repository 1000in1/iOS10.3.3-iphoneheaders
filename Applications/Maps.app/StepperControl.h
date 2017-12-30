/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIControl.h>

@class NSString, UILabel, UIButton;

@interface StepperControl : UIControl {

	unsigned _minValue;
	unsigned _maxValue;
	NSString* _singularValueTitleFormat;
	NSString* _pluralValueTitleFormat;
	unsigned _value;
	UILabel* _titleLabel;
	UIButton* _plusButton;
	UIButton* _minusButton;

}

@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * plusButton;                          //@synthesize plusButton=_plusButton - In the implementation block
@property (nonatomic,retain) UIButton * minusButton;                         //@synthesize minusButton=_minusButton - In the implementation block
@property (assign,nonatomic) unsigned minValue;                              //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) unsigned maxValue;                              //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,copy) NSString * singularValueTitleFormat;              //@synthesize singularValueTitleFormat=_singularValueTitleFormat - In the implementation block
@property (nonatomic,copy) NSString * pluralValueTitleFormat;                //@synthesize pluralValueTitleFormat=_pluralValueTitleFormat - In the implementation block
@property (assign,nonatomic) unsigned value;                                 //@synthesize value=_value - In the implementation block
-(void)minusButtonTapped:(id)arg1 ;
-(void)plusButtonTapped:(id)arg1 ;
-(void)setPluralValueTitleFormat:(NSString *)arg1 ;
-(void)setSingularValueTitleFormat:(NSString *)arg1 ;
-(NSString *)singularValueTitleFormat;
-(NSString *)pluralValueTitleFormat;
-(UIButton *)plusButton;
-(void)setPlusButton:(UIButton *)arg1 ;
-(UIButton *)minusButton;
-(void)setMinusButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(UILabel *)titleLabel;
-(unsigned)minValue;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)updateLabel;
-(void)setupConstraints;
-(unsigned)maxValue;
-(void)setMaxValue:(unsigned)arg1 ;
-(void)setMinValue:(unsigned)arg1 ;
@end

