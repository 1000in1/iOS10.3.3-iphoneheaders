/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MKMapView;


@protocol POIShape <NSObject>
@property (nonatomic,__weak,readonly) MKMapView * mapView; 
@property (nonatomic,readonly) CLLocationCoordinate2D centerCoordinate; 
@required
-(CGRect*)currentFrameInMapView;
-(CLLocationCoordinate2D)centerCoordinate;
-(MKMapView *)mapView;
-(CGSize*)estimatedSize;

@end

