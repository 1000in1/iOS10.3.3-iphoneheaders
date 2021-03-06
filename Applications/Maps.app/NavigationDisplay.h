/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol NavigationDisplayDelegate, MKAnnotation;
@class MKMapView, UserLocationView, NSMutableArray, GEOStep, CircleAnnotation, MKPolygonRenderer, GEOMapRegion, MNLocation, GEOLocationShifter, NavCameraController, GEORouteMatch, NSString;

@interface NavigationDisplay : NSObject <MKMapViewDelegate> {

	id<NavigationDisplayDelegate> _delegate;
	MKMapView* _mapView;
	int _desiredMapMode;
	UserLocationView* _userLocationAnnotationView;
	id<MKAnnotation> _destinationAnnotation;
	NSMutableArray* _userLocationHistory;
	NSMutableArray* _rawUserLocationHistory;
	NSMutableArray* _matchedUserLocationHistory;
	GEOStep* _currentAnnotatedStep;
	CircleAnnotation* _maneuverStartAnnotation;
	CircleAnnotation* _maneuverEndAnnotation;
	CircleAnnotation* _maneuverFirstAnnounceAnnotation;
	NSMutableArray* _maneuverSubstepAnnotations;
	MKPolygonRenderer* _mapRegionOverlay;
	GEOMapRegion* _destinationMapRegion;
	int _originalMainLoopRate;
	int _sky;
	MNLocation* _matchedLocation;
	GEOLocationShifter* _locationShifter;
	char _onRoute;
	char _pouncing;
	NavCameraController* _cameraController;

}

@property (nonatomic,retain) id<MKAnnotation> destinationAnnotation;                     //@synthesize destinationAnnotation=_destinationAnnotation - In the implementation block
@property (nonatomic,retain) MNLocation * matchedLocation;                               //@synthesize matchedLocation=_matchedLocation - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDisplayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                        //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UserLocationView * userLocationAnnotationView;              //@synthesize userLocationAnnotationView=_userLocationAnnotationView - In the implementation block
@property (assign,nonatomic) char onRoute;                                               //@synthesize onRoute=_onRoute - In the implementation block
@property (assign,nonatomic) int desiredMapMode;                                         //@synthesize desiredMapMode=_desiredMapMode - In the implementation block
@property (nonatomic,retain) GEOMapRegion * destinationMapRegion;                        //@synthesize destinationMapRegion=_destinationMapRegion - In the implementation block
@property (assign,nonatomic) int sky;                                                    //@synthesize sky=_sky - In the implementation block
@property (nonatomic,retain) NavCameraController * cameraController;                     //@synthesize cameraController=_cameraController - In the implementation block
@property (assign,nonatomic) double zoomScale; 
@property (nonatomic,readonly) GEORouteMatch * currentRouteMatch; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNLocation *)matchedLocation;
-(void)setMatchedLocation:(MNLocation *)arg1 ;
-(void)updateSky;
-(void)setSky:(int)arg1 ;
-(void)setUserLocationAnnotationMarker:(id)arg1 ;
-(void)_updateMapRegionOverlay;
-(void)updateRoadDescription:(id)arg1 ;
-(void)setUsingOverviewCamera:(char)arg1 ;
-(void)setOnRoute:(char)arg1 ;
-(void)startMotion:(char)arg1 ;
-(void)stopCameraMotion;
-(void)pauseCameraMotion;
-(void)clearAllAnnotations;
-(void)_clearDebugStepAnnotations;
-(void)clearDebugAnnotations;
-(void)_addLocationAnnotation:(id)arg1 history:(id)arg2 ;
-(void)updateDebugStepAnnotation:(unsigned)arg1 route:(id)arg2 ;
-(void)_addDebugLocationAnnotationMatchedLocation:(id)arg1 ;
-(void)updateWithLocation:(id)arg1 ;
-(GEORouteMatch *)currentRouteMatch;
-(void)setDestinationAnnotation:(id<MKAnnotation>)arg1 ;
-(UserLocationView *)userLocationAnnotationView;
-(void)setUserLocationAnnotationView:(UserLocationView *)arg1 ;
-(int)desiredMapMode;
-(void)setDesiredMapMode:(int)arg1 ;
-(GEOMapRegion *)destinationMapRegion;
-(void)setDestinationMapRegion:(GEOMapRegion *)arg1 ;
-(int)sky;
-(char)onRoute;
-(id)init;
-(void)setDelegate:(id<NavigationDisplayDelegate>)arg1 ;
-(void)dealloc;
-(id<NavigationDisplayDelegate>)delegate;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTrackingCameraShouldHandleGestures:(char)arg1 ;
-(NavCameraController *)cameraController;
-(void)setCameraController:(NavCameraController *)arg1 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(int)arg2 zoomDirection:(int)arg3 didDecelerate:(char)arg4 tiltDirection:(int)arg5 ;
-(void)mapViewDidStopUserInteraction:(id)arg1 ;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)mapViewNavigationCameraHasStoppedPanning:(id)arg1 ;
-(void)mapViewNavigationCameraHasStartedPanning:(id)arg1 ;
-(void)mapView:(id)arg1 canZoomOutDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 canZoomInDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 didBecomePitched:(char)arg2 ;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(char)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(char)arg3 fromTrackingButton:(char)arg4 ;
-(void)setTracePlaybackSpeedMultiplier:(double)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(id<MKAnnotation>)destinationAnnotation;
-(MKMapView *)mapView;
@end

