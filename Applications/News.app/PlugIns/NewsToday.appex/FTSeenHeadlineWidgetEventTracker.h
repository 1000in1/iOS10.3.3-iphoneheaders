/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <NewsToday/FTWidgetEventTracker.h>

@protocol FTWritablePrivateDataStorage;
@class FCAppConfiguration, FCFileCoordinatedDictionary, NSArray, NSDate, NSString;

@interface FTSeenHeadlineWidgetEventTracker : NSObject <FTWidgetEventTracker> {

	char _widgetIsForeground;
	char _sessionHasEngagement;
	FCAppConfiguration* _appConfiguration;
	id<FTWritablePrivateDataStorage> _privateDataStorage;
	FCFileCoordinatedDictionary* _fileCoordinatedFIFOHost;
	NSArray* _visibleHeadlines;
	NSDate* _visibleHeadlinesAppearanceDate;

}

@property (nonatomic,retain) FCAppConfiguration * appConfiguration;                              //@synthesize appConfiguration=_appConfiguration - In the implementation block
@property (nonatomic,retain) id<FTWritablePrivateDataStorage> privateDataStorage;                //@synthesize privateDataStorage=_privateDataStorage - In the implementation block
@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedFIFOHost;              //@synthesize fileCoordinatedFIFOHost=_fileCoordinatedFIFOHost - In the implementation block
@property (assign,nonatomic) char widgetIsForeground;                                            //@synthesize widgetIsForeground=_widgetIsForeground - In the implementation block
@property (nonatomic,copy) NSArray * visibleHeadlines;                                           //@synthesize visibleHeadlines=_visibleHeadlines - In the implementation block
@property (nonatomic,copy) NSDate * visibleHeadlinesAppearanceDate;                              //@synthesize visibleHeadlinesAppearanceDate=_visibleHeadlinesAppearanceDate - In the implementation block
@property (assign,nonatomic) char sessionHasEngagement;                                          //@synthesize sessionHasEngagement=_sessionHasEngagement - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FTWritablePrivateDataStorage>)privateDataStorage;
-(void)setPrivateDataStorage:(id<FTWritablePrivateDataStorage>)arg1 ;
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
-(void)setWidgetIsForeground:(char)arg1 ;
-(NSArray *)visibleHeadlines;
-(NSDate *)visibleHeadlinesAppearanceDate;
-(char)sessionHasEngagement;
-(void)_registerOnceVisibleHeadlines:(id)arg1 withLastSeenDate:(id)arg2 minimumNumberOfTimesPreseenToBeSeen:(unsigned)arg3 ;
-(void)setSessionHasEngagement:(char)arg1 ;
-(void)setVisibleHeadlinesAppearanceDate:(NSDate *)arg1 ;
-(void)setVisibleHeadlines:(NSArray *)arg1 ;
-(FCFileCoordinatedDictionary *)fileCoordinatedFIFOHost;
-(id)initWithAppConfiguration:(id)arg1 privateDataStorage:(id)arg2 documentsDirectory:(id)arg3 widgetIsForeground:(char)arg4 ;
-(void)setFileCoordinatedFIFOHost:(FCFileCoordinatedDictionary *)arg1 ;
-(id)init;
-(char)widgetIsForeground;
-(void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(CGSize)arg2 ;
-(FCAppConfiguration *)appConfiguration;
-(void)setAppConfiguration:(FCAppConfiguration *)arg1 ;
@end

