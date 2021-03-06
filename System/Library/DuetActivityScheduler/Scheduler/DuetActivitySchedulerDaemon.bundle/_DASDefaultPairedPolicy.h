/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicyPredicting.h>

@class NSString, NSArray, _DKPredictor, _DKPredictionTimeline, NSDate;

@interface _DASDefaultPairedPolicy : NSObject <_DASActivityPolicyPredicting> {

	NSString* _policyName;
	NSArray* _triggers;
	_DKPredictor* _predictor;
	_DKPredictionTimeline* _deviceNearbyTimeline;
	NSDate* _lastPredictionTimelineUpdate;

}

@property (nonatomic,copy) NSString * policyName;                                //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                 //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) _DKPredictor * predictor;                           //@synthesize predictor=_predictor - In the implementation block
@property (retain) _DKPredictionTimeline * deviceNearbyTimeline;                 //@synthesize deviceNearbyTimeline=_deviceNearbyTimeline - In the implementation block
@property (nonatomic,retain) NSDate * lastPredictionTimelineUpdate;              //@synthesize lastPredictionTimelineUpdate=_lastPredictionTimelineUpdate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(NSDate *)lastPredictionTimelineUpdate;
-(void)setLastPredictionTimelineUpdate:(NSDate *)arg1 ;
-(void)setPolicyName:(NSString *)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)initializeTriggers;
-(char)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(char)appliesToActivity:(id)arg1 ;
-(id)predictionForDeviceNearby;
-(_DKPredictionTimeline *)deviceNearbyTimeline;
-(void)setDeviceNearbyTimeline:(_DKPredictionTimeline *)arg1 ;
-(double)scoreForActivity:(id)arg1 atDate:(id)arg2 ;
-(NSString *)policyName;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(double)predictedScoreForActivity:(id)arg1 atDate:(id)arg2 ;
-(id)init;
-(void)setPredictor:(_DKPredictor *)arg1 ;
-(_DKPredictor *)predictor;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

