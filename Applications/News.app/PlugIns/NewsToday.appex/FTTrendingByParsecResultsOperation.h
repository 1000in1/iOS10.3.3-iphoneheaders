/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class PARSession, FTTrendingByParsecResults;

@interface FTTrendingByParsecResultsOperation : FCOperation {

	PARSession* _session;
	id<FCContentContext> _contentContext;
	/*^block*/id _resultsCompletionHandler;
	FTTrendingByParsecResults* _trendingByParsecResults;
	double _maximumCachedAge;

}

@property (nonatomic,retain) FTTrendingByParsecResults * trendingByParsecResults;              //@synthesize trendingByParsecResults=_trendingByParsecResults - In the implementation block
@property (nonatomic,retain) PARSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<FCContentContext> contentContext;                              //@synthesize contentContext=_contentContext - In the implementation block
@property (assign,nonatomic) double maximumCachedAge;                                          //@synthesize maximumCachedAge=_maximumCachedAge - In the implementation block
@property (nonatomic,copy) id resultsCompletionHandler;                                        //@synthesize resultsCompletionHandler=_resultsCompletionHandler - In the implementation block
-(id)resultsCompletionHandler;
-(void)setTrendingByParsecResults:(FTTrendingByParsecResults *)arg1 ;
-(FTTrendingByParsecResults *)trendingByParsecResults;
-(void)setResultsCompletionHandler:(id)arg1 ;
-(id)init;
-(void)setSession:(PARSession *)arg1 ;
-(PARSession *)session;
-(char)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setMaximumCachedAge:(double)arg1 ;
-(double)maximumCachedAge;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
@end

