/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BookCore/BookCore-Structs.h>
@class NSString, NSMutableSet, NSObject, NSMutableDictionary, NSOperationQueue, IMMappedKeyDataStore, BCPersistentInterestMap, IMCoalescingCallBlock;

@interface BCCoverCache : NSObject {

	CGSize _intermediateSize;
	NSString* _identifier;
	NSMutableSet* _negativeCache;
	char _paused;
	NSObject*<OS_dispatch_queue> _negativeSync;
	NSObject*<OS_dispatch_queue> _activeCoversSync;
	NSMutableDictionary* _activeCoverSourcesByBookId;
	NSMutableDictionary* _activeSeriesSourcesBySeriesId;
	char _activeSourcesCleanupScheduled;
	os_unfair_lock_s _activeSourceCleanupSpinlock;
	char _forceGenericCovers;
	char _forceBlankCovers;
	char _disableCoverCleanup;
	NSOperationQueue* _renderQueue;
	NSMutableDictionary* _temporaryArtUrls;
	IMMappedKeyDataStore* _mappedCoverCache;
	NSObject*<OS_dispatch_queue> _prefetchReplyQueue;
	NSObject*<OS_dispatch_queue> _keyReplyQueue;
	NSObject*<OS_dispatch_queue> _dataReplyQueue;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	NSObject*<OS_dispatch_queue> _cleanupQueue;
	NSObject*<OS_dispatch_queue> _timeoutQueue;
	NSObject*<OS_dispatch_queue> _evictionQueue;
	BCPersistentInterestMap* _sponsorInterest;
	IMCoalescingCallBlock* _coalescedEviction;

}

@property (readonly) NSOperationQueue * renderQueue;                                         //@synthesize renderQueue=_renderQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * temporaryArtUrls;                         //@synthesize temporaryArtUrls=_temporaryArtUrls - In the implementation block
@property (nonatomic,readonly) IMMappedKeyDataStore * mappedCoverCache;                      //@synthesize mappedCoverCache=_mappedCoverCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> prefetchReplyQueue;              //@synthesize prefetchReplyQueue=_prefetchReplyQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> keyReplyQueue;                   //@synthesize keyReplyQueue=_keyReplyQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dataReplyQueue;                  //@synthesize dataReplyQueue=_dataReplyQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> refreshQueue;                    //@synthesize refreshQueue=_refreshQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cleanupQueue;                    //@synthesize cleanupQueue=_cleanupQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> timeoutQueue;                    //@synthesize timeoutQueue=_timeoutQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> evictionQueue;                   //@synthesize evictionQueue=_evictionQueue - In the implementation block
@property (nonatomic,readonly) BCPersistentInterestMap * sponsorInterest;                    //@synthesize sponsorInterest=_sponsorInterest - In the implementation block
@property (nonatomic,retain) IMCoalescingCallBlock * coalescedEviction;                      //@synthesize coalescedEviction=_coalescedEviction - In the implementation block
@property (assign,nonatomic) char forceGenericCovers;                                        //@synthesize forceGenericCovers=_forceGenericCovers - In the implementation block
@property (assign,nonatomic) char forceBlankCovers;                                          //@synthesize forceBlankCovers=_forceBlankCovers - In the implementation block
@property (assign,nonatomic) char disableCoverCleanup;                                       //@synthesize disableCoverCleanup=_disableCoverCleanup - In the implementation block
@property (assign) CGSize intermediateSize;                                                  //@synthesize intermediateSize=_intermediateSize - In the implementation block
+(void)_cleanPreviousSharedCaches;
+(id)cachesDirectoryPath;
+(id)imageCacheDirectoryPath;
+(id)coverCacheDirectoryPath;
+(id)mappedCachePath;
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)cleanupQueue;
-(id)storeImage:(id)arg1 bookId:(id)arg2 cachePrefix:(id)arg3 size:(CGSize)arg4 xattrs:(id)arg5 writeToDisk:(char)arg6 format:(int)arg7 options:(int)arg8 ;
-(id)fetchImageForBookId:(id)arg1 prefix:(id)arg2 size:(CGSize)arg3 options:(int)arg4 ;
-(char)negativeCacheContainsEntryForBookId:(id)arg1 ;
-(CGSize)intermediateSize;
-(NSObject*<OS_dispatch_queue>)refreshQueue;
-(char)forceBlankCovers;
-(NSObject*<OS_dispatch_queue>)timeoutQueue;
-(char)forceGenericCovers;
-(NSObject*<OS_dispatch_queue>)prefetchReplyQueue;
-(id)_artForBook:(id)arg1 size:(CGSize)arg2 withCachePrefix:(id)arg3 options:(int)arg4 ;
-(id)_largestCoverArtExceptGenericForBookID:(id)arg1 options:(int)arg2 ;
-(id)_tempCoverArtForBookWithID:(id)arg1 size:(CGSize)arg2 options:(int)arg3 ;
-(id)_prefetchWithOptions:(int)arg1 ;
-(id)_mappedKeyForBookId:(id)arg1 prefix:(id)arg2 size:(CGSize)arg3 options:(int)arg4 ;
-(IMMappedKeyDataStore *)mappedCoverCache;
-(NSObject*<OS_dispatch_queue>)dataReplyQueue;
-(void)removeNegativeResultForBookId:(id)arg1 ;
-(void)registerNegativeResultForBookId:(id)arg1 ;
-(id)_urlForImageCacheWithBookId:(id)arg1 cachePrefix:(id)arg2 size:(CGSize)arg3 options:(int)arg4 ;
-(void)storeGenericCoverArtImage:(id)arg1 forDatabaseKey:(id)arg2 size:(CGSize)arg3 xattrs:(id)arg4 format:(int)arg5 options:(int)arg6 ;
-(void)scheduleSourceCleanup;
-(id)coverSourceForInfo:(id)arg1 resolver:(id)arg2 size:(CGSize)arg3 options:(int)arg4 identifier:(id)arg5 ;
-(void)_evictUnsponsoredCoversWithCompletion:(/*^block*/id)arg1 ;
-(id)_sourceBookIdFromKey:(id)arg1 ;
-(void)_refreshActiveCovers;
-(id)_mappedKeyPrefixForBookId:(id)arg1 prefix:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)keyReplyQueue;
-(id)_mappedKeyPrefixForBookId:(id)arg1 ;
-(id)_largestKeyForKeys:(id)arg1 ;
-(CGSize)_mappedKeySize:(id)arg1 ;
-(id)_sourceKeyForBook:(id)arg1 size:(CGSize)arg2 options:(int)arg3 ;
-(id)_sourceKeyForSeries:(id)arg1 size:(CGSize)arg2 options:(int)arg3 ;
-(void)_cleanupActiveCoverSources;
-(id)_sourceKeyPrefixForBookId:(id)arg1 ;
-(void)clearCacheForBookID:(id)arg1 ;
-(id)_mappedBookIdFromKey:(id)arg1 ;
-(void)removeNegativeResultForBookIds:(id)arg1 notify:(char)arg2 ;
-(void)clearCacheForBookIDs:(id)arg1 ;
-(void)_refreshSourceForBookId:(id)arg1 temporaryItemIdentifier:(id)arg2 ;
-(id)fetchImageForKey:(id)arg1 options:(int)arg2 ;
-(char)isGenericCoverAtURL:(id)arg1 ;
-(char)isGenericCoverWithData:(id)arg1 ;
-(void)_fetchImageUrl:(id)arg1 forItemID:(id)arg2 format:(int)arg3 ;
-(void)removeNegativeResultForBookId:(id)arg1 notify:(char)arg2 ;
-(BCPersistentInterestMap *)sponsorInterest;
-(IMCoalescingCallBlock *)coalescedEviction;
-(void)refreshSeriesWithIDs:(id)arg1 ;
-(void)setForceGenericCovers:(char)arg1 ;
-(void)setForceBlankCovers:(char)arg1 ;
-(id)seriesSourceForInfo:(id)arg1 resolver:(id)arg2 size:(CGSize)arg3 options:(int)arg4 identifier:(id)arg5 ;
-(void)refreshArtForBookID:(id)arg1 url:(id)arg2 resolver:(id)arg3 ;
-(void)clearPersistentCacheForBookIDs:(id)arg1 ;
-(void)storeTemporaryImage:(id)arg1 forItemId:(id)arg2 fetchURL:(id)arg3 ;
-(void)registerInterestingIdentifiers:(id)arg1 forSponsor:(id)arg2 ;
-(void)setIntermediateSize:(CGSize)arg1 ;
-(NSMutableDictionary *)temporaryArtUrls;
-(void)setTemporaryArtUrls:(NSMutableDictionary *)arg1 ;
-(void)setCoalescedEviction:(IMCoalescingCallBlock *)arg1 ;
-(char)disableCoverCleanup;
-(void)setDisableCoverCleanup:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)initWithIdentifier:(id)arg1 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)cancelPendingRenderOperations;
-(NSOperationQueue *)renderQueue;
-(NSObject*<OS_dispatch_queue>)evictionQueue;
@end

