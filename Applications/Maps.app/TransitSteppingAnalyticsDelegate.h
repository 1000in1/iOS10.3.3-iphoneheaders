/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TransitSteppingAnalyticsDelegate : NSObject
-(void)recordSwipeToNextSignWithRouteDetails:(id)arg1 ;
-(void)recordSwipeToPreviousSignWithRouteDetails:(id)arg1 ;
-(void)recordTapToNextSignWithRouteDetails:(id)arg1 ;
-(void)recordTapToPreviousSignWithRouteDetails:(id)arg1 ;
-(void)recordTapOnTransitStationPOI;
-(void)recordEnterGuidanceWithRouteDetails:(id)arg1 ;
-(void)recordSignAutoAdvanceWithRouteDetails:(id)arg1 ;
-(void)recordOpenRouteClusterActionSheet;
-(void)recordOverviewTapOnTray;
-(void)recordResumeFromOverviewTapOnTray;
-(void)recordDetailsTapOnTray;
-(void)recordEndSteppingTapOnTray;
@end

