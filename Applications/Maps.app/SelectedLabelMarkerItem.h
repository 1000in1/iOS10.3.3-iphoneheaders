/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PersonalizedItem.h>

@class NSSet, VKLabelMarker, NSString, PersonalizedItemSource, MKMapItem, PersonalizedItemStyleAttributesAdornment, PersonalizedItemPrioritizedStringAdornment, SearchResult, AddressBookAddress, NSArray, NSDate, ParkedCar, MapsLocationOfInterest;

@interface SelectedLabelMarkerItem : NSObject <PersonalizedItem> {

	NSSet* _keys;
	VKLabelMarker* _labelMarker;
	NSString* _title;
	CLLocationCoordinate2D _coordinate;
	PersonalizedItemSource* source;
	MKMapItem* _mapItem;
	PersonalizedItemStyleAttributesAdornment* _styleAttributes;

}

@property (nonatomic,readonly) VKLabelMarker * labelMarker;                                             //@synthesize labelMarker=_labelMarker - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * keys;                                                            //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned priority; 
@property (nonatomic,readonly) MKMapItem * mapItem;                                                     //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) PersonalizedItemSource * source; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;                                       //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * prefix; 
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * title; 
@property (nonatomic,readonly) PersonalizedItemPrioritizedStringAdornment * subtitle; 
@property (nonatomic,readonly) unsigned sortOrder; 
@property (nonatomic,readonly) PersonalizedItemStyleAttributesAdornment * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) char shouldBeClustered; 
@property (nonatomic,readonly) char showsBalloonCallout; 
@property (nonatomic,readonly) SearchResult * searchResult; 
@property (nonatomic,readonly) AddressBookAddress * address; 
@property (nonatomic,readonly) NSArray * searchableStrings; 
@property (nonatomic,readonly) char shouldBeHiddenFromMap; 
@property (nonatomic,readonly) char mustRefineMapItem; 
@property (nonatomic,readonly) char isRouteStartOrEnd; 
@property (nonatomic,readonly) char needsToPreserveSelection; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) ParkedCar * parkedCar; 
@property (nonatomic,readonly) MapsLocationOfInterest * locationOfInterest; 
-(VKLabelMarker *)labelMarker;
-(char)shouldBeClustered;
-(NSArray *)searchableStrings;
-(char)shouldBeHiddenFromMap;
-(char)mustRefineMapItem;
-(id)init;
-(PersonalizedItemPrioritizedStringAdornment *)title;
-(void)setSource:(PersonalizedItemSource *)arg1 ;
-(unsigned)priority;
-(PersonalizedItemPrioritizedStringAdornment *)subtitle;
-(PersonalizedItemSource *)source;
-(NSSet *)keys;
-(unsigned)sortOrder;
-(SearchResult *)searchResult;
-(PersonalizedItemStyleAttributesAdornment *)styleAttributes;
-(PersonalizedItemPrioritizedStringAdornment *)prefix;
-(id)initWithMapItem:(id)arg1 ;
-(char)showsBalloonCallout;
-(id)initWithLabelMarker:(id)arg1 ;
-(MKMapItem *)mapItem;
-(CLLocationCoordinate2D)coordinate;
-(AddressBookAddress *)address;
@end

