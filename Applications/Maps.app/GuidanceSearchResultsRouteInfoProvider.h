/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/GuidanceSearchResultsRouteInfoProviding.h>

@class DirectionsManager, DirectionsController, NSString;

@interface GuidanceSearchResultsRouteInfoProvider : NSObject <GuidanceSearchResultsRouteInfoProviding> {

	DirectionsManager* _directionsManager;
	DirectionsController* _directionsController;

}

@property (nonatomic,readonly) DirectionsManager * directionsManager;                    //@synthesize directionsManager=_directionsManager - In the implementation block
@property (nonatomic,readonly) DirectionsController * directionsController;              //@synthesize directionsController=_directionsController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DirectionsManager *)directionsManager;
-(DirectionsController *)directionsController;
-(id)routeZilchPoints;
-(id)historyEntryRoute;
-(id)initWithDirectionsManager:(id)arg1 directionsController:(id)arg2 ;
-(id)_composedRoute;
-(id)sessionState;
-(id)routeId;
@end

