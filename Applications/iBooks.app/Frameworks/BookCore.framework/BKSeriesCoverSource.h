/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BookCore-Structs.h>
#import <BookCore/BKSeriesCoverSource.h>
@class NSString;


@protocol BKSeriesCoverSource <NSObject>
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * bookId; 
@required
-(id)coverImages;
-(NSString *)bookId;
-(id)coverImagesFlags:(int)arg1;
-(id)addSeriesImageObserverWithHandler:(/*^block*/id)arg1 queue:(id)arg2 notifyImmediately:(char)arg3;
-(void)removeSeriesImageObserver:(id)arg1;
-(id)coverSources;
-(id)coverSourcesFlags:(int)arg1;
-(void)updateCoverSourcesFromInfos:(id)arg1;
-(char)coverImagesAllBlankOrAllNonBlank;
-(id)identifier;
-(void)prepareForReuse;

@end


@protocol OS_dispatch_queue, BKSeriesCoverResolving;
@class NSString, NSObject, NSMutableArray, NSArray, NSMutableDictionary, BCCoverCache;

@interface BKSeriesCoverSource : NSObject <BKSeriesCoverSource> {

	os_unfair_lock_s _spinlock;
	unsigned _usageCount;
	NSObject*<OS_dispatch_queue> _sync;
	NSMutableArray* _observers;
	NSArray* _childSources;
	NSMutableDictionary* _childSourcesMap;
	NSMutableDictionary* _childObserversMap;
	BCCoverCache* _cache;
	CGSize _size;
	int _options;
	os_unfair_lock_s _stateSpinlock;
	char _stateAllCoversBlank;
	char _stateAllCoversNonBlank;
	char _stateSomeTimedOut;
	char _coverSourcesPending;
	id<BKSeriesCoverResolving> _resolver;
	NSString* _bookId;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * bookId;                   //@synthesize bookId=_bookId - In the implementation block
-(id)coverImages;
-(NSString *)bookId;
-(void)_waitForCondition:(/*^block*/id)arg1 ;
-(void)decrementUsageCount;
-(id)initWithCache:(id)arg1 info:(id)arg2 resolver:(id)arg3 size:(CGSize)arg4 options:(int)arg5 ;
-(void)refreshCoverSources;
-(void)_setChildSources:(id)arg1 ;
-(void)_notifyObserversAsync;
-(void)_updateCoverSourcesFromInfos:(id)arg1 ;
-(id)_coverSourcesForInfos:(id)arg1 ;
-(void)_setChildSources:(id)arg1 forceNotify:(char)arg2 ;
-(char)_hasCoverSourcesOrPending;
-(id)_coverImagesCondition:(/*^block*/id)arg1 ;
-(id)coverImagesFlags:(int)arg1 ;
-(void)_waitForSourcesCondition:(/*^block*/id)arg1 ;
-(id)addSeriesImageObserverWithHandler:(/*^block*/id)arg1 queue:(id)arg2 notifyImmediately:(char)arg3 ;
-(void)removeSeriesImageObserver:(id)arg1 ;
-(id)coverSources;
-(id)coverSourcesFlags:(int)arg1 ;
-(void)updateCoverSourcesFromInfos:(id)arg1 ;
-(char)coverImagesAllBlankOrAllNonBlank;
-(void)clearChildSources;
-(void)dealloc;
-(id)identifier;
-(void)prepareForReuse;
-(void)incrementUsageCount;
-(unsigned)usageCount;
@end

