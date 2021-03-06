/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapServiceTraits, NSString, NSArray, NSMapTable;

@interface BrowseManagerContentCache : NSObject {

	char _writesToDisk;
	char _needsRefresh;
	GEOMapServiceTraits* _latestTraits;
	NSString* _diskCachingKey;
	NSArray* _geoCategories;
	NSArray* _categories;
	NSMapTable* _nearbyResultsCache;
	NSMapTable* _categoryResultsCache;
	NSMapTable* _nearbyMapItemCache;
	NSMapTable* _nearbyStringsCache;

}

@property (nonatomic,retain) GEOMapServiceTraits * latestTraits;              //@synthesize latestTraits=_latestTraits - In the implementation block
@property (assign,nonatomic) char writesToDisk;                               //@synthesize writesToDisk=_writesToDisk - In the implementation block
@property (nonatomic,copy) NSString * diskCachingKey;                         //@synthesize diskCachingKey=_diskCachingKey - In the implementation block
@property (assign,nonatomic) char needsRefresh;                               //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (nonatomic,retain) NSArray * geoCategories;                         //@synthesize geoCategories=_geoCategories - In the implementation block
@property (nonatomic,retain) NSArray * categories;                            //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSMapTable * nearbyResultsCache;                 //@synthesize nearbyResultsCache=_nearbyResultsCache - In the implementation block
@property (nonatomic,retain) NSMapTable * categoryResultsCache;               //@synthesize categoryResultsCache=_categoryResultsCache - In the implementation block
@property (nonatomic,retain) NSMapTable * nearbyMapItemCache;                 //@synthesize nearbyMapItemCache=_nearbyMapItemCache - In the implementation block
@property (nonatomic,retain) NSMapTable * nearbyStringsCache;                 //@synthesize nearbyStringsCache=_nearbyStringsCache - In the implementation block
-(NSMapTable *)nearbyResultsCache;
-(NSMapTable *)categoryResultsCache;
-(NSMapTable *)nearbyStringsCache;
-(NSMapTable *)nearbyMapItemCache;
-(void)setGeoCategories:(NSArray *)arg1 ;
-(void)setLatestTraits:(GEOMapServiceTraits *)arg1 ;
-(char)_traitsAreValid:(id)arg1 ;
-(void)updateCacheWithBlock:(/*^block*/id)arg1 ;
-(void)writeCategories;
-(id)_diskCachedCategories;
-(void)readCategoriesFromDisk;
-(void)readCategories:(/*^block*/id)arg1 ;
-(void)setWritesToDisk:(char)arg1 ;
-(GEOMapServiceTraits *)latestTraits;
-(char)writesToDisk;
-(NSString *)diskCachingKey;
-(void)setDiskCachingKey:(NSString *)arg1 ;
-(NSArray *)geoCategories;
-(void)setNearbyResultsCache:(NSMapTable *)arg1 ;
-(void)setCategoryResultsCache:(NSMapTable *)arg1 ;
-(void)setNearbyMapItemCache:(NSMapTable *)arg1 ;
-(void)setNearbyStringsCache:(NSMapTable *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(char)needsRefresh;
-(void)setNeedsRefresh:(char)arg1 ;
@end

