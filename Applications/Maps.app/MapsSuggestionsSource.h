/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, MapsSuggestionsManager;


@protocol MapsSuggestionsSource <MapsSuggestionsObject>
@property (nonatomic,retain) NSString * uniqueName; 
@property (assign,nonatomic,__weak) MapsSuggestionsManager * manager; 
@required
-(double)updateSuggestionEntries;
-(char)canProduceEntriesOfType:(unsigned char)arg1;
-(id)init;
-(void)reset;
-(NSString *)uniqueName;
-(id)initWithManager:(id)arg1;
-(MapsSuggestionsManager *)manager;
-(void)setManager:(id)arg1;
-(void)setUniqueName:(NSString*)arg1;

@end

