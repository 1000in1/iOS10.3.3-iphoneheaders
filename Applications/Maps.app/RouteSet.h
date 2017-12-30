/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NSArray, GEORouteSet, Route, NSTimeZone;

@interface RouteSet : NSObject {

	NSArray* _routesAndContingencies;
	GEORouteSet* _geoRouteSet;
	Route* _currentRoute;
	NSArray* _routes;
	NSArray* _routesAndGaps;
	Route* _drivingRouteEquivalentToWalkingRoute;
	NSArray* _trafficIncidentsOffRoutes;

}

@property (nonatomic,readonly) GEORouteSet * geoRouteSet;                                                       //@synthesize geoRouteSet=_geoRouteSet - In the implementation block
@property (nonatomic,retain) Route * currentRoute;                                                              //@synthesize currentRoute=_currentRoute - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                                                //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndGaps;                                                         //@synthesize routesAndGaps=_routesAndGaps - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndContingencies;                                                //@synthesize routesAndContingencies=_routesAndContingencies - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone; 
@property (nonatomic,readonly) NSTimeZone * endTimeZone; 
@property (nonatomic,__weak,readonly) Route * drivingRouteEquivalentToWalkingRoute;                             //@synthesize drivingRouteEquivalentToWalkingRoute=_drivingRouteEquivalentToWalkingRoute - In the implementation block
@property (nonatomic,readonly) NSArray * trafficIncidentsOffRoutes;                                             //@synthesize trafficIncidentsOffRoutes=_trafficIncidentsOffRoutes - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage; 
@property (nonatomic,readonly) char allTransitRoutesBlockedByIncident; 
@property (nonatomic,readonly) char hasScheduledDepartures; 
@property (nonatomic,readonly) char containsOnlyWalkingRoutes; 
@property (nonatomic,readonly) char transitModePreferencesIgnored; 
-(void)setCurrentRoute:(Route *)arg1 ;
-(void)addRoutesFromRouteSet:(id)arg1 ;
-(char)hasScheduledDepartures;
-(void)_createRoutesForRouteSet:(id)arg1 ;
-(void)_createRoutesAndGapsForRouteSet:(id)arg1 ;
-(void)_createContingencyRoutesForRouteSet:(id)arg1 ;
-(CLLocationCoordinate2D)_mapPointForRoute:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_conflateWalkingAndDrivingRoutes;
-(void)_createTrafficIncidents;
-(void)_populateTrafficIncidentsFromETARoute:(id)arg1 ;
-(id)trafficIncidentsUsingSelectedRoute:(id)arg1 includeUnselectedRoutes:(char)arg2 ;
-(id)routeForComposedRoute:(id)arg1 ;
-(id)_routeInArray:(id)arg1 matchingComposedRoute:(id)arg2 ;
-(id)routeForGEORoute:(id)arg1 ;
-(char)containsOnlyWalkingRoutes;
-(GEORouteSet *)geoRouteSet;
-(Route *)drivingRouteEquivalentToWalkingRoute;
-(NSArray *)trafficIncidentsOffRoutes;
-(id)description;
-(NSArray *)routes;
-(id<GEOTransitRoutingIncidentMessage>)transitRoutingIncidentMessage;
-(char)transitModePreferencesIgnored;
-(char)allTransitRoutesBlockedByIncident;
-(NSArray *)routesAndContingencies;
-(NSArray *)routesAndGaps;
-(id)initWithRouteSet:(id)arg1 ;
-(Route *)currentRoute;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
@end

