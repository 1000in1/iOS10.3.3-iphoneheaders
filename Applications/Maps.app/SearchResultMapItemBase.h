/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PersonalizedItem.h>

@protocol PersonalizedItemKey;
@class PersonalizedItemSource, SearchResult, NSString, NSSet, MKMapItem, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemStyleAttributesAdornment, AddressBookAddress, NSArray, NSDate, ParkedCar, MapsLocationOfInterest;

@interface SearchResultMapItemBase : NSObject <PersonalizedItem> {

	id<PersonalizedItemKey> _key;
	char _shouldBeHiddenFromMap;
	PersonalizedItemSource* source;
	unsigned sortOrder;
	SearchResult* _searchResult;

}

@property (assign,nonatomic) char shouldBeHiddenFromMap;                                                //@synthesize shouldBeHiddenFromMap=_shouldBeHiddenFromMap - In the implementation block
@property (assign,nonatomic,__weak) PersonalizedItemSource * source; 
@property (nonatomic,readonly) SearchResult * searchResult;                                             //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) unsigned sortOrder; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * keys; 
@property (nonatomic,readonly) unsigned priority; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * prefix; 
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * title; 
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * subtitle; 
@property (nonatomic,readonly) PersonalizedItemStyleAttributesAdornment * styleAttributes; 
@property (nonatomic,readonly) char shouldBeClustered; 
@property (nonatomic,readonly) char showsBalloonCallout; 
@property (nonatomic,readonly) AddressBookAddress * address; 
@property (nonatomic,readonly) NSArray * searchableStrings; 
@property (nonatomic,readonly) char mustRefineMapItem; 
@property (nonatomic,readonly) char isRouteStartOrEnd; 
@property (nonatomic,readonly) char needsToPreserveSelection; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) ParkedCar * parkedCar; 
@property (nonatomic,readonly) MapsLocationOfInterest * locationOfInterest; 
-(char)shouldBeClustered;
-(NSArray *)searchableStrings;
-(char)shouldBeHiddenFromMap;
-(char)mustRefineMapItem;
-(void)setShouldBeHiddenFromMap:(char)arg1 ;
-(id)init;
-(PersonalizedItemPrioritizedStringAdornment *)title;
-(void)setSource:(PersonalizedItemSource *)arg1 ;
-(unsigned)priority;
-(PersonalizedItemPrioritizedStringAdornment *)subtitle;
-(PersonalizedItemSource *)source;
-(NSSet *)keys;
-(unsigned)sortOrder;
-(void)setSortOrder:(unsigned)arg1 ;
-(SearchResult *)searchResult;
-(PersonalizedItemStyleAttributesAdornment *)styleAttributes;
-(PersonalizedItemPrioritizedStringAdornment *)prefix;
-(char)showsBalloonCallout;
-(id)initWithSearchResult:(id)arg1 ;
-(MKMapItem *)mapItem;
-(CLLocationCoordinate2D)coordinate;
-(AddressBookAddress *)address;
@end

