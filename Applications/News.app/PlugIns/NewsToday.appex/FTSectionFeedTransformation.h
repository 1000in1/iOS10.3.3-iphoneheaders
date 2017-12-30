/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSString;

@interface FTSectionFeedTransformation : NSObject <FCFeedTransforming> {

	id<FCFeedTransforming> _underlyingTransformation;

}

@property (nonatomic,retain) id<FCFeedTransforming> underlyingTransformation;              //@synthesize underlyingTransformation=_underlyingTransformation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSortTransformation:(id)arg1 limitTransformation:(id)arg2 mutedTagIDs:(id)arg3 purchasedTagIDs:(id)arg4 readArticlesFilterMethod:(int)arg5 recentlyReadHistoryItems:(id)arg6 seenArticlesFilterMethod:(int)arg7 minimumTimeSinceFirstSeenToFilter:(double)arg8 recentlySeenHistoryItems:(id)arg9 supplementalFeedFilterOptions:(int)arg10 filterDate:(id)arg11 ;
-(id<FCFeedTransforming>)underlyingTransformation;
-(void)setUnderlyingTransformation:(id<FCFeedTransforming>)arg1 ;
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
@end

