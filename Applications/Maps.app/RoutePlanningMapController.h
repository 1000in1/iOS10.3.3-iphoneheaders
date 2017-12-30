/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/POIShapeLoadingObserver.h>
#import <Maps/RoutePlanningDataObservation.h>
#import <Maps/MapViewResponderHandling.h>

@protocol ActionCoordination, RoutePlanningDataCoordination;
@class NSNumber, NSString;

@interface RoutePlanningMapController : NSObject <POIShapeLoadingObserver, RoutePlanningDataObservation, MapViewResponderHandling> {

	char _selectCurrentRoute;
	id<ActionCoordination> _actionCoordinator;
	id<RoutePlanningDataCoordination> _dataCoordinator;
	NSNumber* _originalViewMode;

}

@property (nonatomic,retain) NSNumber * originalViewMode;                                           //@synthesize originalViewMode=_originalViewMode - In the implementation block
@property (assign,nonatomic,__weak) id<ActionCoordination> actionCoordinator;                       //@synthesize actionCoordinator=_actionCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<RoutePlanningDataCoordination> dataCoordinator;              //@synthesize dataCoordinator=_dataCoordinator - In the implementation block
@property (assign,getter=selectsCurrentRoute,nonatomic) char selectCurrentRoute;                    //@synthesize selectCurrentRoute=_selectCurrentRoute - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int observedRoutePlanningData; 
-(void)didTapMapView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id<ActionCoordination>)actionCoordinator;
-(void)setActionCoordinator:(id<ActionCoordination>)arg1 ;
-(void)poiShapeLoader:(id)arg1 didLoadStartPOIShape:(id)arg2 endPOIShape:(id)arg3 ;
-(void)routePlanningDataCoordinator:(id)arg1 didUpdateWaypointsWithOrigin:(id)arg2 destination:(id)arg3 ;
-(void)routePlanningDataCoordinator:(id)arg1 didUpdateTransportType:(int)arg2 ;
-(void)routePlanningDataCoordinator:(id)arg1 didUpdateCurrentRouteDisplayedStepIndex:(int)arg2 ;
-(void)routePlanningDataCoordinator:(id)arg1 didUpdateCurrentRoute:(id)arg2 ;
-(void)routePlanningDataCoordinator:(id)arg1 didUpdateRouteSet:(id)arg2 ;
-(int)observedRoutePlanningData;
-(id<RoutePlanningDataCoordination>)dataCoordinator;
-(void)setDataCoordinator:(id<RoutePlanningDataCoordination>)arg1 ;
-(void)setSelectCurrentRoute:(char)arg1 ;
-(void)clearMapState:(char)arg1 ;
-(void)restoreOriginalMapViewMode:(char)arg1 ;
-(void)saveOriginalMapViewModeAs:(int)arg1 ;
-(void)_updateSearchPinsManagerIfPossible;
-(void)_updateDirectionsAnnotationsManager;
-(void)_updateCameraIfPossible;
-(void)_updateCameraIfPossibleWithRefinmentOnCompletionIfNeeded:(char)arg1 ;
-(char)selectsCurrentRoute;
-(NSNumber *)originalViewMode;
-(void)setOriginalViewMode:(NSNumber *)arg1 ;
@end

