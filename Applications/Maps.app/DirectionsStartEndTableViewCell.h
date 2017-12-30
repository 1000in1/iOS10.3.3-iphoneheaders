/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsThemeTableViewCell.h>

@class UILabel, UIImageView;

@interface DirectionsStartEndTableViewCell : MapsThemeTableViewCell {

	int _identifier;
	UILabel* _overviewLabel;
	UIImageView* _pinView;
	char _isDimmedStep;
	char _isNightMode;
	char _isLightContent;
	char _alignSeparatorWithLeadingText;

}

@property (assign,nonatomic) char isNightMode;                                //@synthesize isNightMode=_isNightMode - In the implementation block
@property (assign,nonatomic) char isLightContent;                             //@synthesize isLightContent=_isLightContent - In the implementation block
@property (assign,nonatomic) char alignSeparatorWithLeadingText;              //@synthesize alignSeparatorWithLeadingText=_alignSeparatorWithLeadingText - In the implementation block
+(id)defaultIconImageName;
+(float)leftMarginWidth;
+(float)rightMarginWidth;
+(/*^block*/id)fontProvider;
+(id)startEndTitle:(id)arg1 isStart:(char)arg2 ;
+(id)defaultFont;
+(id)reuseIdentifier;
+(float)topPadding;
+(float)bottomPadding;
+(unsigned)iconSize;
-(void)_updateStyleValuesFromTheme;
-(void)setIsDimmedStep:(char)arg1 ;
-(void)setIsNightMode:(char)arg1 ;
-(void)setIsLightContent:(char)arg1 ;
-(void)setAlignSeparatorWithLeadingText:(char)arg1 ;
-(char)isNightMode;
-(char)isLightContent;
-(char)alignSeparatorWithLeadingText;
-(void)configureForWaypoint:(id)arg1 isStart:(char)arg2 ;
-(float)heightForText:(id)arg1 width:(float)arg2 ;
-(void)setDirectionsText:(id)arg1 ;
-(CGRect)_stepRect;
-(id)_LabelColor;
-(void)setPinImageForWaypoint:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setBackgroundView:(id)arg1 ;
-(void)prepareForReuse;
-(CGRect)_separatorFrame;
@end

