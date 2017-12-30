/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SearchBarSearchResults : NSObject {

	NSArray* _cachedFavorites;
	NSArray* _resultSets;

}

@property (nonatomic,copy) NSArray * resultSets;              //@synthesize resultSets=_resultSets - In the implementation block
-(id)filteredResultsWithBackfill:(int)arg1 ;
-(void)addResultSet:(id)arg1 withMaxCount:(unsigned)arg2 ;
-(NSArray *)resultSets;
-(void)setResultSets:(NSArray *)arg1 ;
-(id)init;
-(id)copy;
@end

