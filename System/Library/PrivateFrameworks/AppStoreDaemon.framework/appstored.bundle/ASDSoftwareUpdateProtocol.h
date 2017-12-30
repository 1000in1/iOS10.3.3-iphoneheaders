/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASDSoftwareUpdateProtocol <NSObject>
@required
-(void)clearExpiredUpdateHistoryWithCompletionBlock:(/*^block*/id)arg1;
-(void)hideApplicationBadgeForPendingUpdates;
-(void)removeUpdateBulletins;
-(void)showApplicationBadgeForPendingUpdates;
-(void)getUpdatesWithCompletionBlock:(/*^block*/id)arg1;
-(void)reloadFromServerWithCompletionBlock:(/*^block*/id)arg1;
-(void)getUpdateableFirstPartyAppMetadataWithCompletion:(/*^block*/id)arg1;
-(void)refreshUpdateCountWithCompletionBlock:(/*^block*/id)arg1;
-(void)reloadFromServerInBackgroundWithCompletionBlock:(/*^block*/id)arg1;
-(void)showApplicationUpdatesBulletin;
-(void)updateAll:(/*^block*/id)arg1;
-(void)migrateUpdatesStoreWithCompletionBlock:(/*^block*/id)arg1;

@end

