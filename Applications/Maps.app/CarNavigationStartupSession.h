/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/DirectionsManagerObserver.h>

@protocol CarNavigationStartupDelegate;
@class DirectionsWaypoint, GEOURLRouteHandle, NSString;

@interface CarNavigationStartupSession : NSObject <DirectionsManagerObserver> {

	char _started;
	char _ended;
	DirectionsWaypoint* _destination;
	GEOURLRouteHandle* _routeHandle;
	char _startWithETAOnly;
	id<CarNavigationStartupDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CarNavigationStartupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char startWithETAOnly;                                         //@synthesize startWithETAOnly=_startWithETAOnly - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigationTimedOutAlertUserInfo;
+(id)nonNavigableRouteAlertUserInfo;
+(void)_removeSessionFromRunningSessions:(id)arg1 ;
+(void)_addSessionToRunningSessions:(id)arg1 ;
+(id)_runningSessions;
+(char)isStartingNavigation;
+(id)sessionWithAddressDestination:(id)arg1 ;
+(id)sessionWithSearchResultDestination:(id)arg1 routeHandle:(id)arg2 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)directionsManagerDidFailToLoadInitialRoutes:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidFailToLoadMoreRoutes:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidCancelLoad:(id)arg1 ;
-(id)initWithDestinationWaypoint:(id)arg1 routeHandle:(id)arg2 ;
-(void)_endWithError:(id)arg1 ;
-(char)_shouldPresentError:(id)arg1 ;
-(void)_presentErrorIfPossible:(id)arg1 ;
-(char)startWithETAOnly;
-(void)setStartWithETAOnly:(char)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<CarNavigationStartupDelegate>)arg1 ;
-(void)dealloc;
-(id<CarNavigationStartupDelegate>)delegate;
-(void)start;
@end

