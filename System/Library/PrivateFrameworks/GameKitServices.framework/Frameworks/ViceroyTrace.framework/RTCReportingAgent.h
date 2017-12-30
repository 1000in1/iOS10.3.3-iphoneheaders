/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCAggregatorDelegate.h>

@protocol OS_dispatch_queue;
@class RTCReporting, NSObject, NSArray, VCAggregator, NSString;

@interface RTCReportingAgent : NSObject <VCAggregatorDelegate> {

	RTCReporting* _reportingObject;
	int _client;
	NSObject*<OS_dispatch_queue> _reportingQueue;
	NSArray* _backends;
	char _isUserInfoSet;
	VCAggregator* _aggregator;
	/*^block*/id _aggregationBlock;

}

@property (retain) RTCReporting * reportingObject;                             //@synthesize reportingObject=_reportingObject - In the implementation block
@property (assign) int client;                                                 //@synthesize client=_client - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> reportingQueue;              //@synthesize reportingQueue=_reportingQueue - In the implementation block
@property (copy) NSArray * backends;                                           //@synthesize backends=_backends - In the implementation block
@property (assign) char isUserInfoSet;                                         //@synthesize isUserInfoSet=_isUserInfoSet - In the implementation block
@property (retain) VCAggregator * aggregator;                                  //@synthesize aggregator=_aggregator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)sendAggregatedReport;
-(id)initWithCallID:(unsigned)arg1 clientType:(int)arg2 ;
-(void)releaseReportingObject;
-(RTCReporting *)reportingObject;
-(void)setReportingObject:(RTCReporting *)arg1 ;
-(NSObject*<OS_dispatch_queue>)reportingQueue;
-(void)setBackends:(NSArray *)arg1 ;
-(char)isUserInfoSet;
-(void)setIsUserInfoSet:(char)arg1 ;
-(void)setAggregator:(VCAggregator *)arg1 ;
-(int)client;
-(void)report:(id)arg1 ;
-(NSArray *)backends;
-(void)setClient:(int)arg1 ;
-(VCAggregator *)aggregator;
@end

