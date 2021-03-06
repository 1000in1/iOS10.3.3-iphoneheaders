/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/PlugIns/FMFTodayWidget.appex/FMFTodayWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol FMFTodayViewCurrentLocationManagerDelegate;
@class CLLocationManager, CLLocation, NSString;

@interface FMFTodayViewCurrentLocationManager : NSObject <CLLocationManagerDelegate> {

	id<FMFTodayViewCurrentLocationManagerDelegate> _delegate;
	CLLocationManager* _locationManager;
	CLLocation* _lastLocation;

}

@property (nonatomic,retain) CLLocationManager * locationManager;                                         //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocation;                                                   //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic,__weak) id<FMFTodayViewCurrentLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isAuthorizedForLocation;
+(id)sharedInstance;
-(void)startMonitoringLocation;
-(void)stopMonitoringLocation;
-(void)setDelegate:(id<FMFTodayViewCurrentLocationManagerDelegate>)arg1 ;
-(id<FMFTodayViewCurrentLocationManagerDelegate>)delegate;
-(id)currentLocation;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
-(void)requestAuthorization;
-(void)requestLocation;
@end

