/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsSuggestionsBaseSource.h>
#import <Maps/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, MapsSuggestionsManager, RTRoutineManager, NSObject;

@interface MapsSuggestionsTestAllLocationsOfInterestSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	RTRoutineManager* _routineManager;
	NSObject*<OS_dispatch_queue> _queue;
	char _running;
	NSObject*<OS_dispatch_source> _updateTimer;
	MapsSuggestionsManager* _manager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager;              //@synthesize manager=_manager - In the implementation block
-(double)updateSuggestionEntries;
-(char)canProduceEntriesOfType:(unsigned char)arg1 ;
-(void)_updateSuggestionEntries;
-(id)_suggestionEntryForLocationOfInterest:(id)arg1 ;
-(void)_addLabelForEntry:(id)arg1 ;
-(char)_addFieldsToSuggestionsEntry:(id)arg1 fromMapItem:(id)arg2 ;
-(id)_extractTitleAndSubtitleFromMapItem:(id)arg1 forType:(unsigned char)arg2 ;
-(void)dealloc;
-(void)reset;
-(id)initWithManager:(id)arg1 ;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(MapsSuggestionsManager *)arg1 ;
@end

