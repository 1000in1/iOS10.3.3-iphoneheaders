/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, GEOMapsTransitWidget, MWTransitIncidentsViewController;

@interface MWTransitIncidentsAnalyticsDelegate : NSObject {

	NSDate* _sessionStartDate;
	GEOMapsTransitWidget* _analyticsData;
	MWTransitIncidentsViewController* _transitIncidentsViewController;

}

@property (assign,nonatomic,__weak) MWTransitIncidentsViewController * transitIncidentsViewController;              //@synthesize transitIncidentsViewController=_transitIncidentsViewController - In the implementation block
-(id)initWithTransitIncidentsViewController:(id)arg1 ;
-(void)startSessionIfNeeded;
-(void)recordCloseSessionSwiping;
-(void)_closeSessionWithEndState:(int)arg1 ;
-(void)recordWidgetChangeDisplayMode:(int)arg1 ;
-(void)recordInfoForLines:(id)arg1 incidentDisplayed:(id)arg2 incidentsToLineMapping:(id)arg3 ;
-(int)_messageTypeForIncidentCount:(unsigned)arg1 ;
-(void)recordOpenItemAtIndexPath:(id)arg1 ;
-(MWTransitIncidentsViewController *)transitIncidentsViewController;
-(void)setTransitIncidentsViewController:(MWTransitIncidentsViewController *)arg1 ;
@end
