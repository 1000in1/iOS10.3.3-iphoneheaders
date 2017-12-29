/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RouteExtensionRidesList, RouteExtensionsUICoordinatorDelegate;
@class MKMapItem;

@interface RouteExtensionsUICoordinator : NSObject {

	MKMapItem* _origin;
	MKMapItem* _destination;
	id<RouteExtensionRidesList> _ridesList;
	id<RouteExtensionsUICoordinatorDelegate> _delegate;

}

@property (nonatomic,readonly) id<RouteExtensionRidesList> ridesList;                               //@synthesize ridesList=_ridesList - In the implementation block
@property (assign,nonatomic,__weak) id<RouteExtensionsUICoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<RouteExtensionRidesList>)ridesList;
-(id)init;
-(void)setDelegate:(id<RouteExtensionsUICoordinatorDelegate>)arg1 ;
-(id<RouteExtensionsUICoordinatorDelegate>)delegate;
-(id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2 ;
@end
