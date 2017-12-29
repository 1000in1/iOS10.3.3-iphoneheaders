/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsSuggestionsSink.h>

@protocol MapsSuggestionsSink;
@class NSString;

@interface SinkContainer : NSObject <MapsSuggestionsSink> {

	unsigned _hashValue;
	id<MapsSuggestionsSink> _weakSink;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsSink> weakSink;              //@synthesize weakSink=_weakSink - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateForMapsSuggestionsManager:(id)arg1 ;
-(id)initWithSink:(id)arg1 ;
-(id<MapsSuggestionsSink>)weakSink;
-(void)setWeakSink:(id<MapsSuggestionsSink>)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)uniqueName;
@end
