/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DASearchQueryConsumer;
#import <DataAccessExpress/DataAccessExpress-Structs.h>
@class NSString, NSPredicate;

@interface DASearchQuery : NSObject {

	NSString* _searchString;
	NSPredicate* _searchPredicate;
	int _timeLimit;
	id<DASearchQueryConsumer> _consumer;
	NSString* _searchID;
	unsigned _state;
	NSRange _range;

}

@property (nonatomic,copy) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSPredicate * searchPredicate;                            //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (nonatomic,copy) NSString * searchID;                                      //@synthesize searchID=_searchID - In the implementation block
@property (assign,nonatomic) unsigned state;                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned maxResults; 
@property (assign,nonatomic) int timeLimit;                                          //@synthesize timeLimit=_timeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<DASearchQueryConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)searchString;
-(NSRange)range;
-(id)dictionaryRepresentation;
-(void)setConsumer:(id<DASearchQueryConsumer>)arg1 ;
-(id<DASearchQueryConsumer>)consumer;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)sendFinishedToConsumerWithError:(id)arg1 ;
-(void)sendResultsToConsumer:(id)arg1 ;
-(void)setSearchID:(NSString *)arg1 ;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(char)isQueryRunning;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(NSPredicate *)searchPredicate;
-(void)setTimeLimit:(int)arg1 ;
-(int)timeLimit;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(NSString *)searchID;
@end

