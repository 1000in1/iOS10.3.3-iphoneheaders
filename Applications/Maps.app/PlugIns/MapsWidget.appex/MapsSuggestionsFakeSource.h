/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <Maps/MapsSuggestionsBaseSource.h>
#import <MapsWidget/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSObject, MapsSuggestionsManager, NSString;

@interface MapsSuggestionsFakeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	NSMutableArray* _entriesToSend;
	NSObject*<OS_dispatch_queue> _queue;
	char _nowReset;
	MapsSuggestionsManager* _manager;
	unsigned long _calledUpdateSuggestionEntries;
	unsigned long _calledReset;
	unsigned long _totalSent;
	unsigned long _toSend;

}

@property (assign) unsigned long calledUpdateSuggestionEntries;                    //@synthesize calledUpdateSuggestionEntries=_calledUpdateSuggestionEntries - In the implementation block
@property (assign) unsigned long calledReset;                                      //@synthesize calledReset=_calledReset - In the implementation block
@property (assign) char nowReset;                                                  //@synthesize nowReset=_nowReset - In the implementation block
@property (assign) unsigned long totalSent;                                        //@synthesize totalSent=_totalSent - In the implementation block
@property (assign) unsigned long toSend;                                           //@synthesize toSend=_toSend - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager;              //@synthesize manager=_manager - In the implementation block
-(double)updateSuggestionEntries;
-(char)canProduceEntriesOfType:(unsigned char)arg1 ;
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(void)sendLater:(id)arg1 ;
-(void)sendNow:(id)arg1 ;
-(void)startDebugTest;
-(unsigned long)calledUpdateSuggestionEntries;
-(void)setCalledUpdateSuggestionEntries:(unsigned long)arg1 ;
-(unsigned long)calledReset;
-(void)setCalledReset:(unsigned long)arg1 ;
-(char)nowReset;
-(void)setNowReset:(char)arg1 ;
-(unsigned long)totalSent;
-(void)setTotalSent:(unsigned long)arg1 ;
-(unsigned long)toSend;
-(void)setToSend:(unsigned long)arg1 ;
-(void)dealloc;
-(void)reset;
-(id)initWithManager:(id)arg1 ;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(MapsSuggestionsManager *)arg1 ;
@end

