/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <vot/vot-Structs.h>
@class SCRCThread, NSLock, NSMutableArray, VOTElement, NSObject;

@interface VOTElementFetcher : NSObject {

	SCRCThread* _fillerThread;
	id _delegate;
	NSLock* _cacheLock;
	NSMutableArray* _elementCache;
	VOTElement* _currentElement;
	unsigned long long _canceledSearchGeneration;
	unsigned long long _currentSearchGeneration;
	NSObject*<OS_dispatch_queue> _searchGenerationQueue;
	unsigned long long _canceledCountGeneration;
	unsigned long long _currentCountGeneration;
	NSObject*<OS_dispatch_queue> _countGenerationQueue;
	unsigned _cacheSize;
	int _cacheBufferEdge;
	char _retrievingAllElements;
	char _shouldPerformSearchSynchronously;

}

@property (assign,nonatomic) id<VOTElementFetchDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldPerformSearchSynchronously;                     //@synthesize shouldPerformSearchSynchronously=_shouldPerformSearchSynchronously - In the implementation block
-(void)updateCacheWithElement:(id)arg1 ;
-(void)searchForElementInDirection:(int)arg1 fromElement:(id)arg2 matchBlock:(/*^block*/id)arg3 opaqueMatchTraits:(unsigned long long)arg4 generation:(unsigned long long)arg5 ;
-(void)retrieveElementsWithElement:(id)arg1 ;
-(void)cancelPreviousCount;
-(void)countElementsMatchingBlock:(/*^block*/id)arg1 ;
-(void)cancelPreviousSearch;
-(void)_updateCacheWithElement:(id)arg1 ;
-(char)_wasCanceledWithCountGeneration:(unsigned long long)arg1 ;
-(void)_searchForElementWithParameters:(id)arg1 searchFromOpaqueElementsInRemoteParent:(char)arg2 ;
-(char)_wasCanceledWithSearchGeneration:(unsigned long long)arg1 ;
-(id)_handleOpaqueSearchForElementInDirection:(int)arg1 opaqueParent:(id)arg2 searchTraits:(unsigned long long)arg3 matchBlock:(/*^block*/id)arg4 ;
-(void)searchForElementInDirection:(int)arg1 fromElement:(id)arg2 needsForceCacheUpdate:(char)arg3 matchBlock:(/*^block*/id)arg4 opaqueMatchTraits:(unsigned long long)arg5 generation:(unsigned long long)arg6 ;
-(id)_hitTestedElementForOriginalElement:(id)arg1 hitTestPoint:(CGPoint)arg2 opaqueParent:(id)arg3 ;
-(void)_countElementsMatchingBlock:(/*^block*/id)arg1 generation:(id)arg2 ;
-(char)shouldPerformSearchSynchronously;
-(void)_searchForElementWithParameters:(id)arg1 ;
-(void)_informDelegateOfRetrieveElements;
-(void)_retrieveElementsWithElement:(id)arg1 ;
-(void)_retrieveAllElements;
-(id)_debugElementCache;
-(void)fillCacheWithElements:(id)arg1 ;
-(void)setShouldPerformSearchSynchronously:(char)arg1 ;
-(void)_adjustThreadPriority;
-(id)init;
-(void)setDelegate:(id<VOTElementFetchDelegateProtocol>)arg1 ;
-(void)dealloc;
-(id<VOTElementFetchDelegateProtocol>)delegate;
-(void)forceUpdate;
-(void)_forceUpdate;
@end

