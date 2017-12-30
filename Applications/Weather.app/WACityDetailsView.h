/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIView.h>

@class WAWeatherCityViewLayoutOptions, NSMutableDictionary;

@interface WACityDetailsView : UIView {

	float _lineHeight;
	unsigned _lastDetailToShow;
	WAWeatherCityViewLayoutOptions* _layoutOptions;
	NSMutableDictionary* _titleLabelsByDetail;
	NSMutableDictionary* _valueLabelsByDetail;

}

@property (nonatomic,readonly) NSMutableDictionary * titleLabelsByDetail;                 //@synthesize titleLabelsByDetail=_titleLabelsByDetail - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * valueLabelsByDetail;                 //@synthesize valueLabelsByDetail=_valueLabelsByDetail - In the implementation block
@property (assign,nonatomic) float lineHeight;                                            //@synthesize lineHeight=_lineHeight - In the implementation block
@property (assign,nonatomic) unsigned lastDetailToShow;                                   //@synthesize lastDetailToShow=_lastDetailToShow - In the implementation block
@property (nonatomic,retain) WAWeatherCityViewLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
+(float)defaultLineHeight;
+(id)_font;
-(NSMutableDictionary *)titleLabelsByDetail;
-(NSMutableDictionary *)valueLabelsByDetail;
-(void)_setTitle:(id)arg1 forDetail:(unsigned)arg2 ;
-(id)valueLabelForDetail:(unsigned)arg1 ;
-(id)titleLabelForDetail:(unsigned)arg1 ;
-(void)clearDetailsTextForDetail:(unsigned)arg1 ;
-(float)_topToFirstBaselinePadding;
-(float)_interGroupPadding;
-(unsigned)lastDetailToShow;
-(float)_baselineOffsetForDetailLabel:(unsigned)arg1 ;
-(float)_lastBaselineToBottomPadding;
-(id)_leadingViewForDetail:(unsigned)arg1 ;
-(id)_trailingViewForDetail:(unsigned)arg1 ;
-(void)setTitle:(id)arg1 value:(id)arg2 forDetail:(unsigned)arg3 ;
-(void)setTitle:(id)arg1 attributedValue:(id)arg2 forDetail:(unsigned)arg3 ;
-(void)clearDetailsText;
-(void)setLastDetailToShow:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)lineHeight;
-(CGSize)intrinsicContentSize;
-(void)setLineHeight:(float)arg1 ;
-(WAWeatherCityViewLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(WAWeatherCityViewLayoutOptions *)arg1 ;
@end

