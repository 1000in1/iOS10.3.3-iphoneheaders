/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PersonalizedItemSource.h>

@class NSArray, NSMapTable;

@interface SearchResultsItemSource : PersonalizedItemSource {

	NSArray* _allItems;
	NSMapTable* _allSearchResults;
	char _shouldHideSearchResults;
	NSArray* _searchResults;
	unsigned _mode;

}

@property (nonatomic,copy) NSArray * searchResults;                     //@synthesize searchResults=_searchResults - In the implementation block
@property (assign,nonatomic) unsigned mode;                             //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) char shouldHideSearchResults;              //@synthesize shouldHideSearchResults=_shouldHideSearchResults - In the implementation block
-(void)_updateSearchResults:(id)arg1 ;
-(id)keysForSearchResult:(id)arg1 ;
-(void)setShouldHideSearchResults:(char)arg1 ;
-(char)shouldHideSearchResults;
-(void)dealloc;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)allItems;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
@end

