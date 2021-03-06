/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSMutableDictionary;

@interface BasePushPollController : NSObject {

	NSTimer* pollTimer;
	NSMutableDictionary* inprogressRequestMap;
	double lastSuccessfulRequestSentEpoch;
	double lastFailedRequestSentEpoch;
	double lastNeedToSendEpoch;
	double maxInterval;
	double minInterval;
	double suspensionCount;
	double lastSkippedMaxCallbackEpoch;

}

@property (nonatomic,retain) NSTimer * pollTimer; 
@property (nonatomic,retain) NSMutableDictionary * inprogressRequestMap; 
@property (readonly) char isRequestInProgress; 
@property (assign,nonatomic) double lastSuccessfulRequestSentEpoch; 
@property (assign,nonatomic) double lastFailedRequestSentEpoch; 
@property (assign,nonatomic) double lastNeedToSendEpoch; 
@property (assign,nonatomic) double lastSkippedMaxCallbackEpoch; 
@property (assign,nonatomic) double suspensionCount; 
@property (nonatomic,readonly) double maxInterval; 
@property (nonatomic,readonly) double minInterval; 
@property (assign,nonatomic) char isSuspended; 
-(void)forceToNoRequestInProgress;
-(void)sentRequestToServer:(id)arg1 ;
-(void)processResponseFromServer:(id)arg1 fromRequest:(id)arg2 ;
-(void)serverRequestFailed:(id)arg1 ;
-(void)setIsSuspended:(char)arg1 ;
-(void)deinitializeMyself;
-(void)processResponseNow:(id)arg1 ;
-(void)needToSendRequestToServer;
-(void)sendRequestToServerNow:(char)arg1 ;
-(void)holdResponseForLater:(id)arg1 ;
-(void)processResponsesFromHold;
-(void)setInprogressRequestMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)inprogressRequestMap;
-(void)setLastSuccessfulRequestSentEpoch:(double)arg1 ;
-(void)setLastFailedRequestSentEpoch:(double)arg1 ;
-(void)setLastNeedToSendEpoch:(double)arg1 ;
-(void)setLastSkippedMaxCallbackEpoch:(double)arg1 ;
-(double)lastSuccessfulRequestSentEpoch;
-(void)doTheNeedful;
-(double)lastFailedRequestSentEpoch;
-(double)lastNeedToSendEpoch;
-(double)lastSkippedMaxCallbackEpoch;
-(char)shouldSendRequestOnMaxCallback;
-(void)pollTimerFired:(id)arg1 ;
-(char)isRequestInProgress;
-(int)shouldSendRequestToServer;
-(void)configureTimer;
-(void)noNeedToSendRequestToServer;
-(double)minInterval;
-(id)init;
-(char)isSuspended;
-(void)setSuspensionCount:(double)arg1 ;
-(double)suspensionCount;
-(double)maxInterval;
-(void)setPollTimer:(NSTimer *)arg1 ;
-(NSTimer *)pollTimer;
@end

