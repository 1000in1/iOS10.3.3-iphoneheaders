/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKKnowledgeEventStreamDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol OS_dispatch_queue;
@class NSObject, _DKCoreDataStorage;

@interface _DKKnowledgeStorage : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {

	NSObject*<OS_dispatch_queue> _executionQueue;
	NSObject*<OS_dispatch_queue> _defaultResponseQueue;
	_DKCoreDataStorage* _storage;

}

@property (nonatomic,readonly) _DKCoreDataStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)storageWithDirectory:(id)arg1 readOnly:(char)arg2 ;
+(id)storeWithDirectory:(id)arg1 readOnly:(char)arg2 ;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(id)initWithDirectory:(id)arg1 readOnly:(char)arg2 ;
-(id)errorForException:(id)arg1 ;
-(void)closeStorage;
-(char)deleteStorage;
-(id)removeBadObjects:(id)arg1 ;
-(void)handleNilArrayError:(/*^block*/id)arg1 queue:(id)arg2 ;
-(unsigned)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned)arg2 ;
-(unsigned)deleteObjectsOlderThanDate:(id)arg1 limit:(unsigned)arg2 ;
-(unsigned)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned)arg2 ;
-(unsigned)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned)arg1 limit:(unsigned)arg2 ;
-(id)eventCountPerStreamName;
-(unsigned)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned)arg3 ;
-(unsigned)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned)arg2 batchLimit:(unsigned)arg3 ;
-(char)saveObjects:(id)arg1 error:(id*)arg2 ;
-(_DKCoreDataStorage *)storage;
-(unsigned)eventCount;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(char)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(unsigned)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

