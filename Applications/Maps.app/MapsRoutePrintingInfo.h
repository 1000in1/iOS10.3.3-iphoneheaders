/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsPrintingInfo.h>

@class NSArray;

@interface MapsRoutePrintingInfo : MapsPrintingInfo {

	NSArray* _routeStepCells;
	NSArray* _routeStepCalloutCells;

}

@property (nonatomic,readonly) NSArray * routeStepCells;                     //@synthesize routeStepCells=_routeStepCells - In the implementation block
@property (nonatomic,readonly) NSArray * routeStepCalloutCells;              //@synthesize routeStepCalloutCells=_routeStepCalloutCells - In the implementation block
-(id)initWithNumberOfPages:(int)arg1 routeStepCells:(id)arg2 routeStepCalloutCells:(id)arg3 ;
-(NSArray *)routeStepCells;
-(NSArray *)routeStepCalloutCells;
@end

