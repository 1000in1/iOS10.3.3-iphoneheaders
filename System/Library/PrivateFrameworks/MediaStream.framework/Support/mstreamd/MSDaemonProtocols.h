/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:10 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSDaemonProtocols <NSObject>
@required
-(void)refreshServerSideConfigurationForPersonID:(id)arg1;
-(void)abortAllActivityForPersonID:(id)arg1;
-(void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1;
-(void)enqueueAssetCollections:(id)arg1 personID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)serverSideConfigurationForPersonID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)pauseForUUID:(id)arg1;
-(void)unpauseForUUID:(id)arg1;
-(void)forgetEverythingForPersonID:(id)arg1;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
-(void)resetServerStateForPersonID:(id)arg1;
-(void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
-(void)retryOutstandingActivities;
-(void)isBusyCompletionBlock:(/*^block*/id)arg1;

@end

