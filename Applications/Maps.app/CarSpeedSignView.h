/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>
#import <libobjc.A.dylib/MNNavigationServiceObserver.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class UILabel, GEOMapAccess, GEORoadMatcher, NSString;

@interface CarSpeedSignView : UIView <GEOMapAccessRestrictions, MNNavigationServiceObserver, MKLocationManagerObserver> {

	char _locationFromNavigation;
	char _contentsHidden;
	char _active;
	char _dimmed;
	char _speedLimitIsMPH;
	unsigned _speedLimit;
	UILabel* _speedLimitLabel;
	UILabel* _unitsLabel;
	GEOMapAccess* _mapAccess;
	GEORoadMatcher* _roadMatcher;

}

@property (assign,nonatomic) char contentsHidden;                       //@synthesize contentsHidden=_contentsHidden - In the implementation block
@property (assign,getter=isDimmed,nonatomic) char dimmed;               //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) unsigned speedLimit;                       //@synthesize speedLimit=_speedLimit - In the implementation block
@property (assign,nonatomic) char speedLimitIsMPH;                      //@synthesize speedLimitIsMPH=_speedLimitIsMPH - In the implementation block
@property (nonatomic,retain) UILabel * speedLimitLabel;                 //@synthesize speedLimitLabel=_speedLimitLabel - In the implementation block
@property (nonatomic,retain) UILabel * unitsLabel;                      //@synthesize unitsLabel=_unitsLabel - In the implementation block
@property (nonatomic,retain) GEOMapAccess * mapAccess;                  //@synthesize mapAccess=_mapAccess - In the implementation block
@property (nonatomic,retain) GEORoadMatcher * roadMatcher;              //@synthesize roadMatcher=_roadMatcher - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;               //@synthesize active=_active - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char allowsNetworkTileLoad; 
-(void)setSpeedLimit:(unsigned)arg1 speedLimitIsMPH:(char)arg2 ;
-(UILabel *)speedLimitLabel;
-(void)setSpeedLimitLabel:(UILabel *)arg1 ;
-(void)setMapAccess:(GEOMapAccess *)arg1 ;
-(void)refreshSpeedLimit;
-(void)_updateLabelsWithSpeedLimit:(unsigned)arg1 speedLimitIsMPH:(char)arg2 ;
-(id)_roadForCoordinate:(CLLocationCoordinate2D)arg1 course:(double)arg2 ;
-(void)_refreshColors;
-(void)_tearDownRoadMatching;
-(void)_updateLocationSource;
-(void)_startUsingLocationFromNavigation;
-(void)_startUsingLocationFromLocationManager;
-(GEORoadMatcher *)roadMatcher;
-(UILabel *)unitsLabel;
-(void)setUnitsLabel:(UILabel *)arg1 ;
-(void)setRoadMatcher:(GEORoadMatcher *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)isActive;
-(void)didReceiveMemoryWarning;
-(void)setActive:(char)arg1 ;
-(void)setLocation:(id)arg1 ;
-(void)_deactivate;
-(char)allowsNetworkTileLoad;
-(unsigned)speedLimit;
-(char)speedLimitIsMPH;
-(void)setSpeedLimit:(unsigned)arg1 ;
-(GEOMapAccess *)mapAccess;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(char)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerUpdatedHeading:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(char)contentsHidden;
-(void)setContentsHidden:(char)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)setupConstraints;
-(void)setDimmed:(char)arg1 ;
-(void)_activate;
-(void)setDimmed:(char)arg1 animated:(char)arg2 ;
-(char)isDimmed;
-(void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2 ;
-(void)navigationService:(id)arg1 didChangeFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)setSpeedLimitIsMPH:(char)arg1 ;
@end

