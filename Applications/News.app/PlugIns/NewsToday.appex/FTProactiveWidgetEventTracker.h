/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <NewsToday/FTWidgetEventTracker.h>

@class _PWTWidgetEventTracker, FTHeadlineEngagementEventTracker, FTNoContentActionButtonEngagementEventTracker, FTWidgetAppearanceEventTracker, FTWidgetLingerEventTracker, FTWidgetUpdateEventTracker, FTWidgetDataChangedTracker, NSString;

@interface FTProactiveWidgetEventTracker : NSObject <FTWidgetEventTracker> {

	_PWTWidgetEventTracker* _widgetEventTracker;
	FTHeadlineEngagementEventTracker* _headlineEngagementEventTracker;
	FTNoContentActionButtonEngagementEventTracker* _noContentActionButtonEngagementEventTracker;
	FTWidgetAppearanceEventTracker* _widgetAppearanceEventTracker;
	FTWidgetLingerEventTracker* _widgetLingerEventTracker;
	FTWidgetUpdateEventTracker* _widgetUpdateEventTracker;
	FTWidgetDataChangedTracker* _backgroundWidgetDataChangedTracker;

}

@property (nonatomic,retain) _PWTWidgetEventTracker * widgetEventTracker;                                                              //@synthesize widgetEventTracker=_widgetEventTracker - In the implementation block
@property (nonatomic,retain) FTHeadlineEngagementEventTracker * headlineEngagementEventTracker;                                        //@synthesize headlineEngagementEventTracker=_headlineEngagementEventTracker - In the implementation block
@property (nonatomic,retain) FTNoContentActionButtonEngagementEventTracker * noContentActionButtonEngagementEventTracker;              //@synthesize noContentActionButtonEngagementEventTracker=_noContentActionButtonEngagementEventTracker - In the implementation block
@property (nonatomic,retain) FTWidgetAppearanceEventTracker * widgetAppearanceEventTracker;                                            //@synthesize widgetAppearanceEventTracker=_widgetAppearanceEventTracker - In the implementation block
@property (nonatomic,retain) FTWidgetLingerEventTracker * widgetLingerEventTracker;                                                    //@synthesize widgetLingerEventTracker=_widgetLingerEventTracker - In the implementation block
@property (nonatomic,retain) FTWidgetUpdateEventTracker * widgetUpdateEventTracker;                                                    //@synthesize widgetUpdateEventTracker=_widgetUpdateEventTracker - In the implementation block
@property (nonatomic,retain) FTWidgetDataChangedTracker * backgroundWidgetDataChangedTracker;                                          //@synthesize backgroundWidgetDataChangedTracker=_backgroundWidgetDataChangedTracker - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_PWTWidgetEventTracker *)widgetEventTracker;
-(FTHeadlineEngagementEventTracker *)headlineEngagementEventTracker;
-(id)initWithMaxHeadlineCount:(unsigned)arg1 ;
-(void)setHeadlineEngagementEventTracker:(FTHeadlineEngagementEventTracker *)arg1 ;
-(FTWidgetLingerEventTracker *)widgetLingerEventTracker;
-(void)setWidgetLingerEventTracker:(FTWidgetLingerEventTracker *)arg1 ;
-(void)widgetDidAppearWithHeadlineResults:(id)arg1 headlineSource:(id)arg2 sourceConfigurationIdentifier:(id)arg3 widgetDisplayMode:(int)arg4 appearanceType:(unsigned)arg5 availableHeadlinesCount:(unsigned)arg6 ;
-(void)widgetDidDisappearWithHeadlineSource:(id)arg1 sourceConfigurationIdentifier:(id)arg2 widgetDisplayMode:(int)arg3 appearanceType:(unsigned)arg4 ;
-(void)widgetPerformedUpdateWithHeadlineResults:(id)arg1 headlineSource:(id)arg2 sourceConfigurationIdentifier:(id)arg3 error:(id)arg4 updateFetchDuration:(double)arg5 updateResult:(unsigned)arg6 contentsUpdateResult:(unsigned)arg7 wifiReachable:(char)arg8 cellularRadioAccessTechnology:(int)arg9 networkEvents:(id)arg10 widgetIsForeground:(char)arg11 ;
-(void)visibleHeadlinesDidChange:(id)arg1 withTriggerEvent:(unsigned)arg2 ;
-(void)userEngagedWithHeadline:(id)arg1 headlineSource:(id)arg2 sourceConfigurationIdentifier:(id)arg3 headlineSection:(id)arg4 otherVisibleHeadlineSection:(id)arg5 headlineOrder:(unsigned)arg6 widgetDisplayMode:(int)arg7 ;
-(void)userEngagedWithNoContentActionButtonWithHeadlineSource:(id)arg1 sourceConfigurationIdentifier:(id)arg2 ;
-(void)widgetViewWillAppear;
-(void)widgetViewDidAppear;
-(void)widgetViewWillDisappear;
-(void)widgetViewDidDisappear;
-(void)setWidgetEventTracker:(_PWTWidgetEventTracker *)arg1 ;
-(FTWidgetUpdateEventTracker *)widgetUpdateEventTracker;
-(void)setWidgetUpdateEventTracker:(FTWidgetUpdateEventTracker *)arg1 ;
-(FTWidgetAppearanceEventTracker *)widgetAppearanceEventTracker;
-(void)setWidgetAppearanceEventTracker:(FTWidgetAppearanceEventTracker *)arg1 ;
-(FTWidgetDataChangedTracker *)backgroundWidgetDataChangedTracker;
-(FTNoContentActionButtonEngagementEventTracker *)noContentActionButtonEngagementEventTracker;
-(void)setNoContentActionButtonEngagementEventTracker:(FTNoContentActionButtonEngagementEventTracker *)arg1 ;
-(void)setBackgroundWidgetDataChangedTracker:(FTWidgetDataChangedTracker *)arg1 ;
-(id)init;
-(void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(CGSize)arg2 ;
@end

