/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/ConnectionsExpert.bundle/ConnectionsExpert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface PEXUserActivityManager : NSObject {

	NSString* _serializedCachePath;
	NSMutableDictionary* _uuidCache;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}
+(id)sharedInstance;
-(id)currentUserActivityForBundleId:(id)arg1 ;
-(id)mapItemForUserActivity:(id)arg1 ;
-(char)isActivityForUserActionStillCurrent:(id)arg1 ;
-(void)updateCachesWithUserAction:(id)arg1 ;
-(id)mapItemForUserAction:(id)arg1 ;
-(void)_serializeCache;
-(char)_isActivityWithUUIDCurrent:(id)arg1 ;
-(id)_fetchUserActivityWithUUID:(id)arg1 ;
-(id)_mapItemForActivityWithUUID:(id)arg1 ;
-(id)init;
@end

