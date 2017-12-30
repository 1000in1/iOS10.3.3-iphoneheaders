/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SearchManagerDelegate, MKMapServiceTicket;
#import <Maps/Maps-Structs.h>
@class MSPMutableHistoryEntrySearch, MSPMutableHistoryEntryPlaceDisplay, SearchFieldItem, GEOMapServiceTraits;

@interface SearchManager : NSObject {

	unsigned _selectedIndex;
	id<SearchManagerDelegate> _delegate;
	MSPMutableHistoryEntrySearch* _searchRequestHistoryItem;
	MSPMutableHistoryEntryPlaceDisplay* _placeDisplayRequestHistoryItem;
	SearchFieldItem* _searchFieldItem;
	id<MKMapServiceTicket> _activeSearchTicket;
	GEOMapServiceTraits* _activeTraits;

}

@property (nonatomic,retain) MSPMutableHistoryEntrySearch * searchRequestHistoryItem;                          //@synthesize searchRequestHistoryItem=_searchRequestHistoryItem - In the implementation block
@property (nonatomic,retain) MSPMutableHistoryEntryPlaceDisplay * placeDisplayRequestHistoryItem;              //@synthesize placeDisplayRequestHistoryItem=_placeDisplayRequestHistoryItem - In the implementation block
@property (nonatomic,copy) SearchFieldItem * searchFieldItem;                                                  //@synthesize searchFieldItem=_searchFieldItem - In the implementation block
@property (nonatomic,retain) id<MKMapServiceTicket> activeSearchTicket;                                        //@synthesize activeSearchTicket=_activeSearchTicket - In the implementation block
@property (nonatomic,copy) GEOMapServiceTraits * activeTraits;                                                 //@synthesize activeTraits=_activeTraits - In the implementation block
@property (assign,nonatomic,__weak) id<SearchManagerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
-(void)_submitCategorySearchTicket:(id)arg1 defaultSearchResultType:(unsigned)arg2 saveToHistory:(char)arg3 origin:(int)arg4 ;
-(void)_submitTicket:(id)arg1 defaultSearchResultType:(unsigned)arg2 saveToHistory:(char)arg3 origin:(int)arg4 ;
-(void)_submitNearbyCategorySearchTicket:(id)arg1 defaultSearchResultType:(unsigned)arg2 origin:(int)arg3 ;
-(void)_submitSearchTicket:(id)arg1 defaultSearchResultType:(unsigned)arg2 saveToHistory:(char)arg3 origin:(int)arg4 ;
-(void)_submitSearchTicket:(id)arg1 defaultSearchResultType:(unsigned)arg2 saveToHistory:(char)arg3 placeDisplayHistory:(id)arg4 origin:(int)arg5 ;
-(void)searchForSearchFieldItem:(id)arg1 traits:(id)arg2 source:(int)arg3 ;
-(void)_searchForString:(id)arg1 traits:(id)arg2 defaultSearchResultType:(unsigned)arg3 completedQuery:(id)arg4 source:(int)arg5 ;
-(void)_searchForSuggestion:(id)arg1 traits:(id)arg2 source:(int)arg3 ;
-(void)_searchForCategory:(id)arg1 traits:(id)arg2 defaultSearchResultType:(unsigned)arg3 completedQuery:(id)arg4 source:(int)arg5 ;
-(void)_searchForNearbyCategory:(id)arg1 traits:(id)arg2 source:(int)arg3 ;
-(void)_searchForCompletion:(id)arg1 traits:(id)arg2 source:(int)arg3 ;
-(void)_searchForExternalURLQuery:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(void)_forwardGeocodeAddress:(id)arg1 addressString:(id)arg2 addressBookAddress:(id)arg3 defaultSearchResultType:(unsigned)arg4 traits:(id)arg5 source:(int)arg6 ;
-(void)_searchForAddressString:(id)arg1 defaultSearchResultType:(unsigned)arg2 traits:(id)arg3 source:(int)arg4 ;
-(void)_searchForAddress:(id)arg1 completedQuery:(id)arg2 traits:(id)arg3 source:(int)arg4 ;
-(void)_searchForSearchInfo:(id)arg1 completedQuery:(id)arg2 ;
-(void)_searchForSearchResults:(id)arg1 completedQuery:(id)arg2 ;
-(void)_searchForHistoryItem:(id)arg1 completedQuery:(id)arg2 traits:(id)arg3 source:(int)arg4 ;
-(void)_resolveRefinementForSearch:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_searchForAddress:(id)arg1 traits:(id)arg2 source:(int)arg3 ;
-(void)_searchForBookmarkSearchResult:(id)arg1 origin:(int)arg2 ;
-(void)_handleGeocoderError:(id)arg1 ;
-(void)_searchFailedWithError:(id)arg1 ;
-(void)_searchCanceled;
-(void)_searchReceivedResults:(id)arg1 refinement:(char)arg2 origin:(int)arg3 ;
-(void)_searchReceivedNearbyCategoryResults:(id)arg1 sectionHeader:(id)arg2 origin:(int)arg3 andError:(id)arg4 ;
-(id)_homeWorkAddressForSearchString:(id)arg1 ;
-(void)_homeWorkRoutineMapItemForSearchString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_parkedCarForSearchString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MSPMutableHistoryEntrySearch *)searchRequestHistoryItem;
-(void)setSearchRequestHistoryItem:(MSPMutableHistoryEntrySearch *)arg1 ;
-(MSPMutableHistoryEntryPlaceDisplay *)placeDisplayRequestHistoryItem;
-(void)setPlaceDisplayRequestHistoryItem:(MSPMutableHistoryEntryPlaceDisplay *)arg1 ;
-(SearchFieldItem *)searchFieldItem;
-(void)setSearchFieldItem:(SearchFieldItem *)arg1 ;
-(id<MKMapServiceTicket>)activeSearchTicket;
-(void)setActiveSearchTicket:(id<MKMapServiceTicket>)arg1 ;
-(GEOMapServiceTraits *)activeTraits;
-(void)setActiveTraits:(GEOMapServiceTraits *)arg1 ;
-(void)setDelegate:(id<SearchManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<SearchManagerDelegate>)delegate;
-(void)reset;
-(void)cancelSearch;
@end

