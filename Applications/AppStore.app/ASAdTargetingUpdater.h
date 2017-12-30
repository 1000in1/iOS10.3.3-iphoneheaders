/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/ASADTargetingTimerProxyFireable.h>
#import <AppStore/ASAdTargetingRefreshPeriodProvider.h>

@protocol ASAdTargetingRefreshable, ASAdTargetingRefreshPeriodProvider;
@class NSTimer, NSString;

@interface ASAdTargetingUpdater : NSObject <ASADTargetingTimerProxyFireable, ASAdTargetingRefreshPeriodProvider> {

	id<ASAdTargetingRefreshable> _adSession;
	id<ASAdTargetingRefreshPeriodProvider> _refreshPeriodUpdater;
	NSTimer* _freshnessTimer;
	double _targetingRefreshPeriod;

}

@property (assign,nonatomic,__weak) NSTimer * freshnessTimer;                                          //@synthesize freshnessTimer=_freshnessTimer - In the implementation block
@property (nonatomic,retain) id<ASAdTargetingRefreshable> adSession;                                   //@synthesize adSession=_adSession - In the implementation block
@property (nonatomic,retain) id<ASAdTargetingRefreshPeriodProvider> refreshPeriodUpdater;              //@synthesize refreshPeriodUpdater=_refreshPeriodUpdater - In the implementation block
@property (assign,nonatomic) double targetingRefreshPeriod;                                            //@synthesize targetingRefreshPeriod=_targetingRefreshPeriod - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTargetingDataNow;
-(void)startUpdatingTargetingData;
-(void)as_ADTargetingTimerProxyTimerFired:(id)arg1 ;
-(NSTimer *)freshnessTimer;
-(void)updateFreshnessTimerTimeInterval;
-(void)startFreshnessTimer;
-(void)stopFreshnessTimer;
-(void)_updateAdCache;
-(id<ASAdTargetingRefreshable>)adSession;
-(void)applicationDidResignActive:(id)arg1 ;
-(double)targetingRefreshPeriod;
-(void)setFreshnessTimer:(NSTimer *)arg1 ;
-(id<ASAdTargetingRefreshPeriodProvider>)refreshPeriodUpdater;
-(void)setTargetingRefreshPeriod:(double)arg1 ;
-(void)fetchTargetingRefreshPeriod:(/*^block*/id)arg1 ;
-(void)startListeningForAppEvents;
-(void)setAdSession:(id<ASAdTargetingRefreshable>)arg1 ;
-(void)setRefreshPeriodUpdater:(id<ASAdTargetingRefreshPeriodProvider>)arg1 ;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
@end

