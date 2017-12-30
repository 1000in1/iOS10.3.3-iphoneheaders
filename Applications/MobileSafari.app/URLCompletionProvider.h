/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/CompletionProvider.h>

@protocol WBBookmarkProvider, OS_dispatch_queue, WBSParsecSearchSession;
@class NSMutableArray, NSString, URLCompletionDatabase, NSObject, WBSCompletionQuery;

@interface URLCompletionProvider : CompletionProvider {

	id<WBBookmarkProvider> _bookmarkProvider;
	NSMutableArray* _completionList;
	unsigned _maxResults;
	NSString* _currentPrefix;
	char _historyWasModified;
	char _bookmarksWereModified;
	opaque_pthread_mutex_t _prefixMutex;
	unsigned _urlCompletionBackgroundTaskIdentifier;
	URLCompletionDatabase* _completionDatabase;
	NSObject*<OS_dispatch_queue> _completionQueue;
	char _needScheduleBackgroundTaskOnAppSuspend;
	id<WBSParsecSearchSession> _parsecSearchSession;
	WBSCompletionQuery* _query;
	char _providesTopHits;

}

@property (assign,nonatomic) char providesTopHits;                                        //@synthesize providesTopHits=_providesTopHits - In the implementation block
@property (nonatomic,retain) id<WBSParsecSearchSession> parsecSearchSession;              //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
-(id)completionsForQuery:(id)arg1 ;
-(void)setStringToComplete:(id)arg1 ;
-(unsigned)maximumCachedCompletionCount;
-(void)_historyDidChange:(id)arg1 ;
-(void)_bookmarksDidChange:(id)arg1 ;
-(void)_endURLCompletionBackgroundTask;
-(void)_doUpdateForPrefix:(id)arg1 ;
-(id)initWithBookmarkProvider:(id)arg1 cloudTabStore:(id)arg2 maxResults:(unsigned)arg3 searchableCollectionsMask:(int)arg4 ;
-(char)providesTopHits;
-(void)setProvidesTopHits:(char)arg1 ;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(id<WBSParsecSearchSession>)parsecSearchSession;
-(void)setParsecSearchSession:(id<WBSParsecSearchSession>)arg1 ;
@end

