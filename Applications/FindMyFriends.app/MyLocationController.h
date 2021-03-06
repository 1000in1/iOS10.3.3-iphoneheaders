/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/BasePushPollController.h>

@class CLLocation, NSDictionary;

@interface MyLocationController : BasePushPollController {

	char isPendingCurrentLocationUpdate;
	char hasUnsentLocationUpdate;
	CLLocation* pendingCurrentLocationUpdate;
	NSDictionary* pendingLocationMetaInfoUpdate;
	CLLocation* lastLocationSentToServer;
	double accuracyThreshold;
	double distanceThreshold;
	double _suspensionCount;

}

@property (nonatomic,retain) CLLocation * pendingCurrentLocationUpdate; 
@property (assign,nonatomic) char isPendingCurrentLocationUpdate; 
@property (nonatomic,retain) NSDictionary * pendingLocationMetaInfoUpdate; 
@property (assign,nonatomic) double suspensionCount;                                    //@synthesize suspensionCount=_suspensionCount - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationSentToServer; 
@property (assign,nonatomic) char hasUnsentLocationUpdate; 
@property (assign,nonatomic) double distanceThreshold; 
@property (assign,nonatomic) double accuracyThreshold; 
-(void)updateCurrentLocationTo:(id)arg1 ;
-(double)distanceThreshold;
-(void)deinitializeMyself;
-(void)processResponseNow:(id)arg1 ;
-(void)sendRequestToServerNow:(char)arg1 ;
-(void)holdResponseForLater:(id)arg1 ;
-(void)processResponsesFromHold;
-(char)shouldSendRequestOnMaxCallback;
-(int)shouldSendRequestToServer;
-(void)noNeedToSendRequestToServer;
-(void)sendLocationDidSucceed:(id)arg1 ;
-(void)sendLocationDidFail:(id)arg1 ;
-(void)setDistanceThreshold:(double)arg1 ;
-(void)setPendingCurrentLocationUpdate:(CLLocation *)arg1 ;
-(void)setPendingLocationMetaInfoUpdate:(NSDictionary *)arg1 ;
-(void)setIsPendingCurrentLocationUpdate:(char)arg1 ;
-(void)setLastLocationSentToServer:(CLLocation *)arg1 ;
-(void)setHasUnsentLocationUpdate:(char)arg1 ;
-(void)updateCurrentLocationNow:(id)arg1 ;
-(char)isPendingCurrentLocationUpdate;
-(CLLocation *)pendingCurrentLocationUpdate;
-(NSDictionary *)pendingLocationMetaInfoUpdate;
-(void)setAccuracyThreshold:(double)arg1 ;
-(char)hasUnsentLocationUpdate;
-(void)setMyLocationLocallyTo:(id)arg1 ;
-(CLLocation *)lastLocationSentToServer;
-(double)minAccuracyForMyLocation;
-(double)accuracyThreshold;
-(double)minInterval;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setSuspensionCount:(double)arg1 ;
-(double)suspensionCount;
-(double)maxInterval;
@end

