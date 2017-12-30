/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MKMapView, NSMutableDictionary, NSMutableArray;

@interface NavDebugLocationManager : NSObject {

	MKMapView* _mapView;
	NSMutableDictionary* _overlays;
	NSMutableArray* _annotations;

}

@property (nonatomic,retain) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addLocation:(id)arg1 ;
-(id)rendererForOverlay:(id)arg1 ;
-(id)viewForAnnotation:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
@end

