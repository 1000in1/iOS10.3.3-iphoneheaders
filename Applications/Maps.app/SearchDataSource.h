/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/DataSource.h>
#import <Maps/SearchDataProviderDelegate.h>
#import <Maps/SearchDataProviding.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class SearchDataProvider, UITableView, NSArray, NSString, AutocompleteContext, GEOSearchCategory, UserLocationSearchResult, RAPAutoCompleteSearchManager, PersonalizedItemManager;

@interface SearchDataSource : DataSource <SearchDataProviderDelegate, SearchDataProviding, UITableViewDelegate, UITableViewDataSource> {

	SearchDataProvider* _searchDataProvider;
	UITableView* _contentTableView;
	NSArray* _filteredContent;
	NSString* _searchText;
	NSArray* _previousContents;
	AutocompleteContext* _previousAutocompleteContext;

}

@property (assign,nonatomic,__weak) id<SearchDataSourceDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int searchMode; 
@property (nonatomic,retain) GEOSearchCategory * inputCategory; 
@property (nonatomic,retain) UserLocationSearchResult * userLocationSearchResult; 
@property (nonatomic,retain) RAPAutoCompleteSearchManager * autoCompleteSearchRAPManager; 
@property (nonatomic,retain) PersonalizedItemManager * mapPersonalizedItems; 
-(void)setInputText:(id)arg1 traits:(id)arg2 source:(int)arg3 ;
-(void)clearAutocompleteResults;
-(int)searchMode;
-(void)setSearchMode:(int)arg1 ;
-(GEOSearchCategory *)inputCategory;
-(void)setInputCategory:(GEOSearchCategory *)arg1 ;
-(UserLocationSearchResult *)userLocationSearchResult;
-(void)setUserLocationSearchResult:(UserLocationSearchResult *)arg1 ;
-(RAPAutoCompleteSearchManager *)autoCompleteSearchRAPManager;
-(void)setAutoCompleteSearchRAPManager:(RAPAutoCompleteSearchManager *)arg1 ;
-(PersonalizedItemManager *)mapPersonalizedItems;
-(void)setMapPersonalizedItems:(PersonalizedItemManager *)arg1 ;
-(void)searchDataProviderDidUpdate:(id)arg1 ;
-(void)invalidateDataForFilterChange;
-(id)objectsForAnalytics;
-(id)_contentFilteredIfNeeded;
-(void)_invalidateFilteredContent;
-(void)_sendAnalyticsForDataSelectedAtIndexPath:(id)arg1 fromContent:(id)arg2 ;
-(void)_sendSessionlessAnalyticsForSelectedAtIndexPath:(id)arg1 content:(id)arg2 context:(id)arg3 ;
-(void)_sendAndClearSessionlessAnalytics;
-(id)searchTextForAnalyics;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)reset;
-(id)initWithTableView:(id)arg1 ;
-(void)setActive:(char)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(char)hasResults;
@end
