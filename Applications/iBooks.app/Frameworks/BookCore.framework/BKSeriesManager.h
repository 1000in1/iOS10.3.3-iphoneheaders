/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject, BKSeriesDatabase;

@interface BKSeriesManager : NSObject {

	char _isFetchingSeries;
	NSArray* _pendingAdamIds;
	NSObject*<OS_dispatch_queue> _queue;
	BKSeriesDatabase* _database;
	double _timeOut;

}

@property (assign,nonatomic) char isFetchingSeries;                           //@synthesize isFetchingSeries=_isFetchingSeries - In the implementation block
@property (nonatomic,retain) NSArray * pendingAdamIds;                        //@synthesize pendingAdamIds=_pendingAdamIds - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BKSeriesDatabase * database;                     //@synthesize database=_database - In the implementation block
@property (assign) double timeOut;                                            //@synthesize timeOut=_timeOut - In the implementation block
+(id)itemFetchProperties;
+(id)sharedManager;
-(void)updateAndRecheckAdamID:(id)arg1 ;
-(void)_updateSeriesWithAdamIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)allSeriesContainerIdsInManagedObjectContext:(id)arg1 ;
-(id)allSeriesItemAdamIdsInManagedObjectContext:(id)arg1 ;
-(id)allSeriesItemsForAdamIDs:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)allSeriesItemsInSeries:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)seriesContainerWithSeriesId:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)seriesItemWithAdamId:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)seriesContainerIdsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)seriesItemAdamIdsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)seriesItemWithAdamId:(id)arg1 ;
-(void)updateSeriesAdamIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSeriesWithAdamIds:(id)arg1 ;
-(id)allSeriesContainerIds;
-(id)allSeriesItemAdamIds;
-(id)allSeriesItemsForAdamIDs:(id)arg1 ;
-(id)allSeriesItemsInSeries:(id)arg1 ;
-(id)seriesContainerWithSeriesId:(id)arg1 ;
-(void)fetchBuyParametersForSeriesItemWithAdamId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isFetchingSeries;
-(void)setIsFetchingSeries:(char)arg1 ;
-(NSArray *)pendingAdamIds;
-(void)setPendingAdamIds:(NSArray *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BKSeriesDatabase *)database;
-(void)setTimeOut:(double)arg1 ;
-(double)timeOut;
-(id)initWithDatabase:(id)arg1 ;
-(void)setDatabase:(BKSeriesDatabase *)arg1 ;
@end

