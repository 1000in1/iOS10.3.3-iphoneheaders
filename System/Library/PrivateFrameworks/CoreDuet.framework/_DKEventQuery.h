/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@protocol OS_dispatch_queue;
@class NSObject, NSPredicate, NSArray;

@interface _DKEventQuery : _DKQuery <_DKExecutableQuery> {

	NSObject*<OS_dispatch_queue> _defaultQueue;
	char _readMetadata;
	char _deduplicateValues;
	NSPredicate* _predicate;
	NSArray* _eventStreams;
	NSArray* _sortDescriptors;
	unsigned _limit;
	unsigned _offset;
	int _resultType;
	/*^block*/id _resultsHandler;

}

@property (assign) int resultType;                         //@synthesize resultType=_resultType - In the implementation block
@property (copy) id resultsHandler;                        //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (retain) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (retain) NSArray * eventStreams;                 //@synthesize eventStreams=_eventStreams - In the implementation block
@property (retain) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign) unsigned limit;                         //@synthesize limit=_limit - In the implementation block
@property (assign) unsigned offset;                        //@synthesize offset=_offset - In the implementation block
@property (assign) char readMetadata;                      //@synthesize readMetadata=_readMetadata - In the implementation block
@property (assign) char deduplicateValues;                 //@synthesize deduplicateValues=_deduplicateValues - In the implementation block
+(char)supportsSecureCoding;
+(id)predicateForEventsOfMinimumDuration:(double)arg1 ;
+(id)expressionForEventDuration;
+(id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned)arg3 limit:(unsigned)arg4 sortDescriptors:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
+(id)predicateForEventsOfMaximumDuration:(double)arg1 ;
+(id)eventQueryWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned)arg3 limit:(unsigned)arg4 sortDescriptors:(id)arg5 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(void)setReadMetadata:(char)arg1 ;
-(void)setDeduplicateValues:(char)arg1 ;
-(id)constructFetchRequestPredicate;
-(char)readMetadata;
-(char)deduplicateValues;
-(id)initWithPredicate:(id)arg1 eventStreams:(id)arg2 offset:(unsigned)arg3 limit:(unsigned)arg4 sortDescriptors:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(NSArray *)eventStreams;
-(int)resultType;
-(void)setResultType:(int)arg1 ;
-(void)setResultsHandler:(id)arg1 ;
-(id)resultsHandler;
-(void)setEventStreams:(NSArray *)arg1 ;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
@end
