/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsSuggestionsBaseSource.h>
#import <MapsWidget/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class RidesharingCurrentRideProviderDataSource, NSArray, NSObject, NSString, MapsSuggestionsManager;

@interface MapsSuggestionsRidesharingSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	char _refreshing;
	RidesharingCurrentRideProviderDataSource* _dataSource;
	NSArray* _currentRideProviders;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RidesharingCurrentRideProviderDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * currentRideProviders;                                     //@synthesize currentRideProviders=_currentRideProviders - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char refreshing;                                                    //@synthesize refreshing=_refreshing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager; 
+(void)load;
-(double)updateSuggestionEntries;
-(char)canProduceEntriesOfType:(unsigned char)arg1 ;
-(NSArray *)currentRideProviders;
-(void)_updateRidesharingCurrentRideProviders;
-(void)_updateMapsSuggestionsManagerEntries;
-(void)_startObservingProvider:(id)arg1 ;
-(void)_stopObservingProvider:(id)arg1 ;
-(void)_handleChangeForProvider:(id)arg1 ;
-(id)_entryForProvider:(id)arg1 ;
-(void)setCurrentRideProviders:(NSArray *)arg1 ;
-(void)setDataSource:(RidesharingCurrentRideProviderDataSource *)arg1 ;
-(RidesharingCurrentRideProviderDataSource *)dataSource;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(char)refreshing;
-(void)setRefreshing:(char)arg1 ;
@end

