/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, HKActivitySummaryQuery;

@interface FitnessActivitySummaryCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	HKActivitySummaryQuery* _query;

}
+(id)sharedInstance;
+(id)healthStore;
+(void)setHealthStore:(id)arg1 ;
-(id)activitySummaryForCacheIndex:(long long)arg1 ;
-(id)objectForCacheIndex:(long long)arg1 ;
-(void)runActivitySummaryQueryWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forCacheIndex:(long long)arg2 ;
-(void)removeObjectForCacheIndex:(long long)arg1 ;
-(id)init;
-(void)loadDataIfNeeded;
@end

