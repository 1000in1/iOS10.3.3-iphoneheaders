/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsSuggestionsBaseSource.h>
#import <MapsWidget/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSObject, _DECConsumer, NSString, MapsSuggestionsManager;

@interface MapsSuggestionsAppConnectionSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	NSObject*<OS_dispatch_queue> _appConnectionUpdateQueue;
	_DECConsumer* _decConsumer;

}

@property (nonatomic,retain) _DECConsumer * decConsumer;                           //@synthesize decConsumer=_decConsumer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager; 
+(void)load;
-(double)updateSuggestionEntries;
-(char)canProduceEntriesOfType:(unsigned char)arg1 ;
-(_DECConsumer *)decConsumer;
-(void)_getRecentAppConnectionSuggestion;
-(id)_stripSubdomain:(id)arg1 ;
-(void)setDecConsumer:(_DECConsumer *)arg1 ;
-(void)reset;
@end

