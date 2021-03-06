/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class WeatherLocationDataProvider;

@interface WeatherMapPanningCoordinator : NSObject {

	WeatherLocationDataProvider* _weatherLocationDataProvider;
	float _lastZoomLevel;
	float _minZoomLevelThreshold;
	CLLocationCoordinate2D _lastCenterCoordinate;

}

@property (nonatomic,retain) WeatherLocationDataProvider * weatherLocationDataProvider;              //@synthesize weatherLocationDataProvider=_weatherLocationDataProvider - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D lastCenterCoordinate;                            //@synthesize lastCenterCoordinate=_lastCenterCoordinate - In the implementation block
@property (assign,nonatomic) float lastZoomLevel;                                                    //@synthesize lastZoomLevel=_lastZoomLevel - In the implementation block
@property (assign,nonatomic) float minZoomLevelThreshold;                                            //@synthesize minZoomLevelThreshold=_minZoomLevelThreshold - In the implementation block
-(void)handleMapViewRegionDidChange:(id)arg1 ;
-(id)initWithWeatherLocationDataProvider:(id)arg1 ;
-(WeatherLocationDataProvider *)weatherLocationDataProvider;
-(void)setWeatherLocationDataProvider:(WeatherLocationDataProvider *)arg1 ;
-(void)_updateWeatherConditions;
-(CLLocationCoordinate2D)lastCenterCoordinate;
-(void)setLastCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(float)lastZoomLevel;
-(void)setLastZoomLevel:(float)arg1 ;
-(float)minZoomLevelThreshold;
-(void)setMinZoomLevelThreshold:(float)arg1 ;
@end

