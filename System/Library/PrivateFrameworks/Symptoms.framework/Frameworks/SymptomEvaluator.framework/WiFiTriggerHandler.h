/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:44 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SyndromeHandlerProtocol.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString, ManagedEventHandler, NSDate, DecisionDetails, NSArray;

@interface WiFiTriggerHandler : NSObject <ConfigurableObjectProtocol, SyndromeHandlerProtocol, ManagedEventInfoProtocol> {

	NSString* _syndromeName;
	char* _syndromeUTF8Name;
	ManagedEventHandler* _eventHandler;
	double _lastReportTime;
	NSString* _baseName;
	float _baseRTTAvg;
	float _baseRTTVar;
	float _baseRTTMin;
	float _newRTTAvg;
	float _newRTTVar;
	NSDate* _RTTTimestamp;
	id _wifiEpochObserver;
	id _cellEpochObserver;
	id _primaryInterfaceObserver;
	DecisionDetails* _detailsAwaitingRefuter;
	NSArray* _baselineDefaultRouteData;
	NSDate* _baselineDefaultRouteTimestamp;
	int _refuterAcitvationId;
	int _lastRefutePeriodTraffic;
	double _lastRefutePeriodDuration;
	NSDate* _lastRefutePeriodTimestamp;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
+(id)configureClass:(id)arg1 ;
+(void)_triggerAllowedByRSSI:(BOOL)arg1 receiptTimestamp:(id)arg2 ;
+(id)getHandlerByName:(id)arg1 ;
+(void)triggerAllowedByRSSI:(BOOL)arg1 receiptTimestamp:(id)arg2 ;
+(id)getNetScoreInfo;
-(id)init;
-(NSString *)description;
-(void)_reset;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)didReceiveSyndrome:(id)arg1 ;
-(int)_getARPFailureCount;
-(int)_getND6FailureCount;
-(id)_getARPInfo;
-(id)_getND6Info;
-(id)_getDNSInfo;
-(id)_getAWDInfo:(id)arg1 ;
-(int)combineScoreARP:(int)arg1 ND6:(int)arg2 DNS:(int)arg3 RTT:(int)arg4 flows:(int)arg5 polledFlows:(int)arg6 ;
-(id)_getNetScoreInfo;
-(int)_impactFromFlags:(unsigned)arg1 andFlows:(unsigned)arg2 ;
-(BOOL)insufficientRxTrafficDetectedFrom:(id)arg1 atTime:(id)arg2 To:(id)arg3 ;
-(void)dampeningStage:(id)arg1 ;
-(void)refuteStage:(id)arg1 ;
-(void)generateInfoForId:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
@end

