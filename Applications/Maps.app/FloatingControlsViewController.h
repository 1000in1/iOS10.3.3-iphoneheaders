/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PassThroughViewController.h>
#import <Maps/RefreshViewDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <Maps/FloatingControlsPresentation.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol FloatingControlsViewControllerActionCoordination;
@class MKMapView, NSString, ButtonsContainerViewController, _MKUserTrackingButton, UIButton, WeatherStackViewController, WeatherLocationDataProvider, WeatherMapPanningCoordinator, RefreshButtonViewController, NSLayoutXAxisAnchor;

@interface FloatingControlsViewController : PassThroughViewController <RefreshViewDelegate, GEOLogContextDelegate, FloatingControlsPresentation, MKMapViewDelegate> {

	char _hasReceivedLocationUpdate;
	char _visible;
	char _isObservingLocationAuthorization;
	id<FloatingControlsViewControllerActionCoordination> _actionCoordinator;
	int _visibleControls;
	MKMapView* _mapView;
	NSString* _blurGroupName;
	ButtonsContainerViewController* _buttonsContainerViewController;
	_MKUserTrackingButton* _userLocationButton;
	UIButton* _settingsButton;
	UIButton* _mode2DButton;
	UIButton* _mode3DButton;
	WeatherStackViewController* _weatherStackViewController;
	WeatherLocationDataProvider* _weatherLocationDataProvider;
	WeatherMapPanningCoordinator* _weatherMapPanningCoordinator;
	RefreshButtonViewController* _refreshButtonViewController;

}

@property (assign,nonatomic) char hasReceivedLocationUpdate;                                                             //@synthesize hasReceivedLocationUpdate=_hasReceivedLocationUpdate - In the implementation block
@property (assign,nonatomic) char visible;                                                                               //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) char isObservingLocationAuthorization;                                                      //@synthesize isObservingLocationAuthorization=_isObservingLocationAuthorization - In the implementation block
@property (nonatomic,retain) ButtonsContainerViewController * buttonsContainerViewController;                            //@synthesize buttonsContainerViewController=_buttonsContainerViewController - In the implementation block
@property (nonatomic,retain) _MKUserTrackingButton * userLocationButton;                                                 //@synthesize userLocationButton=_userLocationButton - In the implementation block
@property (nonatomic,retain) UIButton * settingsButton;                                                                  //@synthesize settingsButton=_settingsButton - In the implementation block
@property (nonatomic,retain) UIButton * mode2DButton;                                                                    //@synthesize mode2DButton=_mode2DButton - In the implementation block
@property (nonatomic,retain) UIButton * mode3DButton;                                                                    //@synthesize mode3DButton=_mode3DButton - In the implementation block
@property (nonatomic,retain) WeatherStackViewController * weatherStackViewController;                                    //@synthesize weatherStackViewController=_weatherStackViewController - In the implementation block
@property (nonatomic,retain) WeatherLocationDataProvider * weatherLocationDataProvider;                                  //@synthesize weatherLocationDataProvider=_weatherLocationDataProvider - In the implementation block
@property (nonatomic,retain) WeatherMapPanningCoordinator * weatherMapPanningCoordinator;                                //@synthesize weatherMapPanningCoordinator=_weatherMapPanningCoordinator - In the implementation block
@property (nonatomic,retain) RefreshButtonViewController * refreshButtonViewController;                                  //@synthesize refreshButtonViewController=_refreshButtonViewController - In the implementation block
@property (assign,nonatomic) int visibleControls;                                                                        //@synthesize visibleControls=_visibleControls - In the implementation block
@property (assign,nonatomic,__weak) id<FloatingControlsViewControllerActionCoordination> actionCoordinator;              //@synthesize actionCoordinator=_actionCoordinator - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView;                                                                 //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) NSLayoutXAxisAnchor * floatingButtonLeadingGuide; 
@property (nonatomic,readonly) CGRect floatingButtonsFrame; 
@property (nonatomic,copy) NSString * blurGroupName;                                                                     //@synthesize blurGroupName=_blurGroupName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_locationAuthorizationDidChange:(id)arg1 ;
-(NSString *)blurGroupName;
-(void)updateTheme;
-(void)setBlurGroupName:(NSString *)arg1 ;
-(void)setVisibleControls:(int)arg1 ;
-(id<FloatingControlsViewControllerActionCoordination>)actionCoordinator;
-(void)setActionCoordinator:(id<FloatingControlsViewControllerActionCoordination>)arg1 ;
-(void)setSearchSession:(id)arg1 ;
-(void)showControlsIfNeeded:(int)arg1 ;
-(void)hideControlsIfNeeded:(int)arg1 ;
-(void)refreshViewSelected:(id)arg1 ;
-(NSLayoutXAxisAnchor *)floatingButtonLeadingGuide;
-(CGRect)floatingButtonsFrame;
-(char)_pointContainedInWeatherView:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)shouldHide:(int)arg1 withControlOptions:(int)arg2 ;
-(char)shouldShow:(int)arg1 withControlOptions:(int)arg2 ;
-(int)_sanitizedControlsFromControls:(int)arg1 ;
-(void)_addSubview:(id)arg1 withConstraints:(id)arg2 ;
-(void)setRefreshViewEnable:(char)arg1 ;
-(RefreshButtonViewController *)refreshButtonViewController;
-(id)_refreshButtonConstraints;
-(void)_presentSettings;
-(void)_requestLocationServicesAuthorizationIfNeeded;
-(UIButton *)mode2DButton;
-(UIButton *)mode3DButton;
-(WeatherStackViewController *)weatherStackViewController;
-(id)_weatherViewConstraints;
-(int)visibleControls;
-(char)hasReceivedLocationUpdate;
-(void)setHasReceivedLocationUpdate:(char)arg1 ;
-(char)isObservingLocationAuthorization;
-(void)setIsObservingLocationAuthorization:(char)arg1 ;
-(ButtonsContainerViewController *)buttonsContainerViewController;
-(void)setButtonsContainerViewController:(ButtonsContainerViewController *)arg1 ;
-(void)setSettingsButton:(UIButton *)arg1 ;
-(void)setMode2DButton:(UIButton *)arg1 ;
-(void)setMode3DButton:(UIButton *)arg1 ;
-(void)setWeatherStackViewController:(WeatherStackViewController *)arg1 ;
-(WeatherLocationDataProvider *)weatherLocationDataProvider;
-(void)setWeatherLocationDataProvider:(WeatherLocationDataProvider *)arg1 ;
-(WeatherMapPanningCoordinator *)weatherMapPanningCoordinator;
-(void)setWeatherMapPanningCoordinator:(WeatherMapPanningCoordinator *)arg1 ;
-(void)setRefreshButtonViewController:(RefreshButtonViewController *)arg1 ;
-(char)visible;
-(void)setVisible:(char)arg1 ;
-(void)viewDidLoad;
-(void)updateLayout;
-(void)setVisible:(char)arg1 animated:(char)arg2 ;
-(float)margin;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(MKMapView *)mapView;
-(UIButton *)settingsButton;
-(_MKUserTrackingButton *)userLocationButton;
-(void)setUserLocationButton:(_MKUserTrackingButton *)arg1 ;
@end

