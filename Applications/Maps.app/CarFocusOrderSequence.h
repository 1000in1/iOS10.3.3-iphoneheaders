/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CarFocusOrderSequence : NSObject {

	unsigned _options;
	NSArray* _items;

}

@property (nonatomic,copy) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned options;                             //@synthesize options=_options - In the implementation block
@property (getter=isLooping,nonatomic,readonly) char looping; 
@property (nonatomic,readonly) char flipForRHD; 
+(id)sequenceWithItems:(id)arg1 options:(unsigned)arg2 ;
-(char)flipForRHD;
-(NSArray *)items;
-(char)isLooping;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned)options;
-(void)setOptions:(unsigned)arg1 ;
@end

