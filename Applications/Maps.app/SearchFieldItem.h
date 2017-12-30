/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SearchResult, MKLocalSearchCompletion, AddressBookAddress, GEOSearchCategory, HistoryEntryRecentsItem, CRRecentContact, GEORelatedSearchSuggestion, ExternalURLQuery, MKMapItem, DirectionsWaypoint;

@interface SearchFieldItem : NSObject <NSCopying> {

	char _popularNearbySearch;
	char _favorites;
	NSString* _searchString;
	NSString* _completedQuery;
	SearchResult* _searchResult;
	MKLocalSearchCompletion* _completion;
	AddressBookAddress* _address;
	GEOSearchCategory* _searchCategory;
	NSString* _filterString;
	int _engineType;
	HistoryEntryRecentsItem* _historyItem;
	CRRecentContact* _coreRecentContact;
	NSString* _addressString;
	GEORelatedSearchSuggestion* _suggestion;
	int _preferredFavoritesType;
	ExternalURLQuery* _externalURLQuery;
	NSString* _userTypedStringForRAP;

}

@property (nonatomic,copy) NSString * searchString;                                              //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSString * completedQuery;                                        //@synthesize completedQuery=_completedQuery - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                        //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompletion * completion;                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) AddressBookAddress * address;                                       //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * searchCategory;                                 //@synthesize searchCategory=_searchCategory - In the implementation block
@property (assign,getter=isPopularNearbySearch,nonatomic) char popularNearbySearch;              //@synthesize popularNearbySearch=_popularNearbySearch - In the implementation block
@property (nonatomic,copy) NSString * filterString;                                              //@synthesize filterString=_filterString - In the implementation block
@property (assign,nonatomic) int engineType;                                                     //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,retain) HistoryEntryRecentsItem * historyItem;                              //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,retain) CRRecentContact * coreRecentContact;                                //@synthesize coreRecentContact=_coreRecentContact - In the implementation block
@property (nonatomic,copy) NSString * addressString;                                             //@synthesize addressString=_addressString - In the implementation block
@property (nonatomic,retain) GEORelatedSearchSuggestion * suggestion;                            //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic) char favorites;                                                     //@synthesize favorites=_favorites - In the implementation block
@property (assign,nonatomic) int preferredFavoritesType;                                         //@synthesize preferredFavoritesType=_preferredFavoritesType - In the implementation block
@property (nonatomic,readonly) char behavesAsAtom; 
@property (nonatomic,readonly) MKMapItem * mapItemIfGeocoded; 
@property (nonatomic,readonly) DirectionsWaypoint * waypointIfGeocoded; 
@property (nonatomic,retain) ExternalURLQuery * externalURLQuery;                                //@synthesize externalURLQuery=_externalURLQuery - In the implementation block
@property (nonatomic,copy) NSString * userTypedStringForRAP;                                     //@synthesize userTypedStringForRAP=_userTypedStringForRAP - In the implementation block
+(id)searchFieldItemWithObject:(id)arg1 ;
-(void)setAddressString:(NSString *)arg1 ;
-(void)setHistoryItem:(HistoryEntryRecentsItem *)arg1 ;
-(char)behavesAsAtom;
-(id)currentCategory;
-(char)isEqualToSearchFieldItem:(id)arg1 ;
-(char)isEquivalentAsWaypointToSearchFieldItem:(id)arg1 ;
-(void)setSearchString:(id)arg1 forCompletedQuery:(id)arg2 ;
-(void)setUserTypedStringForRAP:(NSString *)arg1 ;
-(void)setCoreRecentContact:(CRRecentContact *)arg1 ;
-(void)setExternalURLQuery:(ExternalURLQuery *)arg1 ;
-(id)personalizedAddressName;
-(DirectionsWaypoint *)waypointIfGeocoded;
-(char)matchesWaypoint:(id)arg1 ;
-(MKMapItem *)mapItemIfGeocoded;
-(char)isPopularNearbySearch;
-(void)setPopularNearbySearch:(char)arg1 ;
-(CRRecentContact *)coreRecentContact;
-(int)preferredFavoritesType;
-(void)setPreferredFavoritesType:(int)arg1 ;
-(ExternalURLQuery *)externalURLQuery;
-(NSString *)userTypedStringForRAP;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MKLocalSearchCompletion *)completion;
-(void)setCompletion:(MKLocalSearchCompletion *)arg1 ;
-(NSString *)searchString;
-(void)clear;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setAddress:(AddressBookAddress *)arg1 ;
-(SearchResult *)searchResult;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(NSString *)addressString;
-(GEOSearchCategory *)searchCategory;
-(id)waypoint;
-(void)setFavorites:(char)arg1 ;
-(char)favorites;
-(HistoryEntryRecentsItem *)historyItem;
-(AddressBookAddress *)address;
-(void)setSearchCategory:(GEOSearchCategory *)arg1 ;
-(int)engineType;
-(void)setEngineType:(int)arg1 ;
-(NSString *)completedQuery;
-(void)setSuggestion:(GEORelatedSearchSuggestion *)arg1 ;
-(NSString *)filterString;
-(void)setFilterString:(NSString *)arg1 ;
-(GEORelatedSearchSuggestion *)suggestion;
@end

