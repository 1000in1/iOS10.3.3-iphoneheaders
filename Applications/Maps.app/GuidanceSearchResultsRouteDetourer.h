/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/GuidanceSearchResultsRouteDetouring.h>

@protocol GuidanceSearchResultsRouteInfoProviding, GuidanceSearchResultsRouteInterrupting;
@class MNNavigationService, NSString;

@interface GuidanceSearchResultsRouteDetourer : NSObject <GuidanceSearchResultsRouteDetouring> {

	MNNavigationService* _navigationService;
	id<GuidanceSearchResultsRouteInfoProviding> _routeInfoProvider;
	id<GuidanceSearchResultsRouteInterrupting> _routeInterrupter;

}

@property (nonatomic,readonly) MNNavigationService * navigationService;                                    //@synthesize navigationService=_navigationService - In the implementation block
@property (nonatomic,readonly) id<GuidanceSearchResultsRouteInfoProviding> routeInfoProvider;              //@synthesize routeInfoProvider=_routeInfoProvider - In the implementation block
@property (nonatomic,readonly) id<GuidanceSearchResultsRouteInterrupting> routeInterrupter;                //@synthesize routeInterrupter=_routeInterrupter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)detourRouteToMapItem:(id)arg1 ;
-(id)initWithNavigationService:(id)arg1 routeInfoProvider:(id)arg2 routeInterrupter:(id)arg3 ;
-(MNNavigationService *)navigationService;
-(id<GuidanceSearchResultsRouteInfoProviding>)routeInfoProvider;
-(id<GuidanceSearchResultsRouteInterrupting>)routeInterrupter;
@end
