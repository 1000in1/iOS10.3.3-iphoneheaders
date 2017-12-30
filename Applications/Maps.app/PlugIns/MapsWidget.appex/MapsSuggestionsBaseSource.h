/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <MapsWidget/MapsSuggestionsSource.h>

@class NSString, MapsSuggestionsManager;

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {

	MapsSuggestionsManager* _manager;
	NSString* _uniqueName;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager; 
-(double)updateSuggestionEntries;
-(char)canProduceEntriesOfType:(unsigned char)arg1 ;
-(void)dealloc;
-(void)reset;
-(NSString *)uniqueName;
-(id)initWithManager:(id)arg1 ;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(MapsSuggestionsManager *)arg1 ;
-(void)setUniqueName:(NSString *)arg1 ;
@end

