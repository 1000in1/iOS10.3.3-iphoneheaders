/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSURLCompletionMatchData.h>

@class WBSHistoryItem, NSString;

@interface URLCompletionMatchHistoryItemData : NSObject <WBSURLCompletionMatchData> {

	WBSHistoryItem* _historyItem;

}

@property (nonatomic,readonly) WBSHistoryItem * historyItem;                //@synthesize historyItem=_historyItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * originalURLString; 
@property (nonatomic,readonly) char containsBookmark; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) char lastVisitWasFailure; 
@property (nonatomic,readonly) int visitCount; 
-(id)_userVisibleURLString;
-(id)_historyItemAtIndex:(unsigned)arg1 ;
-(id)initWithHistoryItem:(id)arg1 ;
-(char)lastVisitWasFailure;
-(id)pageTitleAtIndex:(unsigned)arg1 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(unsigned)arg1 ;
-(NSString *)originalURLString;
-(char)containsBookmark;
-(id)userVisibleURLStringForPageTitleAtIndex:(unsigned)arg1 ;
-(id)userVisibleURLStringAtIndex:(unsigned)arg1 ;
-(double)lastVisitedTimeInterval;
-(void)enumeratePageTitlesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateUserVisibleURLsUsingBlock:(/*^block*/id)arg1 ;
-(float)topSitesScoreForPageTitleAtIndex:(unsigned)arg1 atTime:(double)arg2 ;
-(float)topSitesScoreForURLStringAtIndex:(unsigned)arg1 atTime:(double)arg2 ;
-(WBSHistoryItem *)historyItem;
-(id)matchDataByMergingWithMatchData:(id)arg1 ;
-(char)matchesAutocompleteTrigger:(id)arg1 ;
@end

