/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/TestProbe.h>

@protocol AWDLPeerProbeDelegate;
@class NSMutableDictionary, NSArray;

@interface AWDLPeerProbe : TestProbe {

	id<AWDLPeerProbeDelegate> _delegate;
	unsigned _pollCount;
	NSMutableDictionary* _peerList;
	NSArray* _servicesOfInterest;

}

@property (nonatomic,retain) NSArray * servicesOfInterest;              //@synthesize servicesOfInterest=_servicesOfInterest - In the implementation block
@property (retain) id<AWDLPeerProbeDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned pollCount;                                  //@synthesize pollCount=_pollCount - In the implementation block
@property (retain) NSMutableDictionary * peerList;                      //@synthesize peerList=_peerList - In the implementation block
-(void)setDelegate:(id<AWDLPeerProbeDelegate>)arg1 ;
-(id<AWDLPeerProbeDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(void)setPollCount:(unsigned)arg1 ;
-(void)setServicesOfInterest:(NSArray *)arg1 ;
-(void)periodicTimerFired:(id)arg1 ;
-(void)startAWDLPeerPollingForServices:(id)arg1 withCount:(unsigned)arg2 interval:(unsigned)arg3 ;
-(unsigned)pollCount;
-(NSMutableDictionary *)peerList;
-(void)setPeerList:(NSMutableDictionary *)arg1 ;
-(NSArray *)servicesOfInterest;
@end

