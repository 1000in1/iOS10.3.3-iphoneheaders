/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOSearchCategory, UserLocationSearchResult, RAPAutoCompleteSearchManager, PersonalizedItemManager;


@protocol SearchDataProviding <NSObject>
@property (assign,nonatomic) int searchMode; 
@property (nonatomic,retain) GEOSearchCategory * inputCategory; 
@property (nonatomic,retain) UserLocationSearchResult * userLocationSearchResult; 
@property (nonatomic,retain) RAPAutoCompleteSearchManager * autoCompleteSearchRAPManager; 
@property (nonatomic,retain) PersonalizedItemManager * mapPersonalizedItems; 
@required
-(void)setInputText:(id)arg1 traits:(id)arg2 source:(int)arg3;
-(void)clearAutocompleteResults;
-(int)searchMode;
-(void)setSearchMode:(int)arg1;
-(GEOSearchCategory *)inputCategory;
-(void)setInputCategory:(id)arg1;
-(UserLocationSearchResult *)userLocationSearchResult;
-(void)setUserLocationSearchResult:(id)arg1;
-(RAPAutoCompleteSearchManager *)autoCompleteSearchRAPManager;
-(void)setAutoCompleteSearchRAPManager:(id)arg1;
-(PersonalizedItemManager *)mapPersonalizedItems;
-(void)setMapPersonalizedItems:(id)arg1;
-(void)reset;
-(char)hasResults;

@end

