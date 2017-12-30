/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsAppTest.h>

@interface MapsAppTestRoute : MapsAppTest {

	unsigned _numWaypointsLoaded;

}

@property (nonatomic,readonly) unsigned numWaypointsLoaded;              //@synthesize numWaypointsLoaded=_numWaypointsLoaded - In the implementation block
-(char)runTest;
-(void)registerGEOSubtestsForRouting;
-(void)tapOnSearchBar;
-(void)_showDirectionSearchView:(id)arg1 ;
-(void)willResolveWaypointsForRouting:(id)arg1 ;
-(void)didResolveWaypointsForRouting:(id)arg1 ;
-(void)willBeginGEOPPTTest_PlaceRequest:(id)arg1 ;
-(void)didEndGEOPPTTest_PlaceRequest:(id)arg1 ;
-(void)willBeginGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1 ;
-(void)didEndGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1 ;
-(void)willBeginGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1 ;
-(void)didEndGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1 ;
-(void)willBeginGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1 ;
-(void)didEndGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan:(id)arg1 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan:(id)arg1 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1 ;
-(void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1 ;
-(void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1 ;
-(void)willBeginMapsPPTTest_ComposeWaypoint:(id)arg1 ;
-(void)didEndMapsPPTTest_ComposeWaypoint:(id)arg1 ;
-(void)willBeginGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1 ;
-(void)didEndGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1 ;
-(void)didDisplayRoutes:(id)arg1 ;
-(void)doAfterSubTestForDisplayingRoutes;
-(unsigned)numWaypointsLoaded;
@end

