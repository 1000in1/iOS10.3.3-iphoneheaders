/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsSuggestionsObject.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLLocationManager, CLLocation, NSString;

@interface MapsSuggestionsCurrentLocationUpdater : NSObject <MapsSuggestionsObject, CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	char _running;
	/*^block*/id _block;
	CLLocationManager* _locationManagerForUpdating;
	CLLocationManager* _locationManagerForLeeching;
	CLLocation* _lastBestLocation;

}

@property (nonatomic,copy) id block;                                                      //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) char running;                                                //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManagerForUpdating;              //@synthesize locationManagerForUpdating=_locationManagerForUpdating - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManagerForLeeching;              //@synthesize locationManagerForLeeching=_locationManagerForLeeching - In the implementation block
@property (nonatomic,retain) CLLocation * lastBestLocation;                               //@synthesize lastBestLocation=_lastBestLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(void)load;
-(void)_initLocationManagers;
-(CLLocationManager *)locationManagerForUpdating;
-(void)setLocationManagerForUpdating:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManagerForLeeching;
-(void)setLocationManagerForLeeching:(CLLocationManager *)arg1 ;
-(CLLocation *)lastBestLocation;
-(void)setLastBestLocation:(CLLocation *)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)_start;
-(void)start;
-(NSString *)uniqueName;
-(void)_stop;
-(void)restart;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(char)running;
-(void)setRunning:(char)arg1 ;
@end

