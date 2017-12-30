/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NavigationDisplayDelegate <NSObject>
@optional
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
-(void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;
-(void)mapViewNavigationCameraHasStartedPanning:(id)arg1;
-(char)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;

@required
-(void)navigationDisplay:(id)arg1 didChangeUserTrackingMode:(int)arg2;
-(void)mapView:(id)arg1 canZoomOutDidChange:(char)arg2;
-(void)mapView:(id)arg1 canZoomInDidChange:(char)arg2;
-(void)mapView:(id)arg1 didBecomePitched:(char)arg2;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2;

@end

