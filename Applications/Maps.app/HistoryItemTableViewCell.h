/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/SearchCompletionTableViewCell.h>

@protocol RecentsItem;
@class UIImageView, NSString;

@interface HistoryItemTableViewCell : SearchCompletionTableViewCell {

	UIImageView* _glyphImageView;
	id<RecentsItem> _historyItem;
	NSString* _searchText;

}

@property (nonatomic,retain) id<RecentsItem> historyItem;              //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,copy) NSString * searchText;                      //@synthesize searchText=_searchText - In the implementation block
+(id)_searchRequestFromString:(id)arg1 ;
+(id)cellForValue:(id)arg1 table:(id)arg2 ;
+(id)cellForValue:(id)arg1 table:(id)arg2 searchText:(id)arg3 ;
+(id)cellForValue:(id)arg1 table:(id)arg2 idiom:(int)arg3 searchText:(id)arg4 ;
-(void)setHistoryItem:(id<RecentsItem>)arg1 ;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(id<RecentsItem>)historyItem;
@end

