/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol HourlyScrollerBeltDelegate;
@class WFTemperatureFormatter, NSArray, NSString;

@interface HourlyScrollerBeltView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource> {

	id<HourlyScrollerBeltDelegate> _hourlyScrollerDelegate;
	WFTemperatureFormatter* _temperatureFormatter;
	NSArray* _forecasts;

}

@property (nonatomic,copy) NSArray * forecasts;                                                         //@synthesize forecasts=_forecasts - In the implementation block
@property (assign,nonatomic,__weak) id<HourlyScrollerBeltDelegate> hourlyScrollerDelegate;              //@synthesize hourlyScrollerDelegate=_hourlyScrollerDelegate - In the implementation block
@property (nonatomic,retain) WFTemperatureFormatter * temperatureFormatter;                             //@synthesize temperatureFormatter=_temperatureFormatter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nts_formattedTemperatureStringCache;
+(id)formattedTemperatureStringFromCache:(id)arg1 ;
+(void)cacheFormattedTemperatureString:(id)arg1 forTemperatureString:(id)arg2 ;
+(id)nts_formattedTimeStringCache;
+(id)formattedTimeStringFromCache:(id)arg1 ;
+(void)cacheFormattedTimeString:(id)arg1 forTimeString:(id)arg2 ;
+(float)height;
-(void)setHourlyScrollerDelegate:(id<HourlyScrollerBeltDelegate>)arg1 ;
-(void)updateForecasts:(id)arg1 ;
-(void)resetScrollerOffsets;
-(void)_temperatureUnitDidChange;
-(void)userTextSizeDidChange;
-(id)condensedTimeInRegionFormatForString:(id)arg1 ;
-(id)formattedTemperatureForTemperature:(id)arg1 ;
-(int)_temperatureUnit;
-(void)setTemperatureFormatter:(WFTemperatureFormatter *)arg1 ;
-(id)formattedTemperatureForString:(id)arg1 ;
-(id<HourlyScrollerBeltDelegate>)hourlyScrollerDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)prepareForReuse;
-(void)resetLocale;
-(void)clearCaches;
-(void)setForecasts:(NSArray *)arg1 ;
-(NSArray *)forecasts;
-(WFTemperatureFormatter *)temperatureFormatter;
@end

