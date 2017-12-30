/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/BasePushPollController.h>

@class NSDictionary;

@interface ModelUpdateController : BasePushPollController {

	NSDictionary* pendingUpdateForModel;
	double _suspensionCount;
	double _lastTimeModelUpdateArrivedFromServer;

}

@property (nonatomic,retain) NSDictionary * pendingUpdateForModel; 
@property (assign,nonatomic) double suspensionCount;                                   //@synthesize suspensionCount=_suspensionCount - In the implementation block
@property (assign,nonatomic) double lastTimeModelUpdateArrivedFromServer;              //@synthesize lastTimeModelUpdateArrivedFromServer=_lastTimeModelUpdateArrivedFromServer - In the implementation block
-(void)processResponseFromServer:(id)arg1 fromRequest:(id)arg2 ;
-(void)needsFullRefresh;
-(void)remoteNotificationReceived;
-(void)deinitializeMyself;
-(void)setPendingUpdateForModel:(NSDictionary *)arg1 ;
-(void)setLastTimeModelUpdateArrivedFromServer:(double)arg1 ;
-(NSDictionary *)pendingUpdateForModel;
-(void)processResponseNow:(id)arg1 ;
-(void)sendRequestToServerNow:(char)arg1 ;
-(void)holdResponseForLater:(id)arg1 ;
-(void)processResponsesFromHold;
-(double)lastTimeModelUpdateArrivedFromServer;
-(double)minInterval;
-(id)init;
-(id)description;
-(void)setSuspensionCount:(double)arg1 ;
-(double)suspensionCount;
-(unsigned long long)timeout;
-(double)maxInterval;
@end

