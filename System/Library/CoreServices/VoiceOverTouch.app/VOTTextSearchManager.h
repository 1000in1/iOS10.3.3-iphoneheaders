/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableString, NSString;

@interface VOTTextSearchManager : NSObject {

	NSMutableArray* _history;
	NSMutableString* _buffer;
	int _bufferIndex;
	int _historyIndex;

}

@property (nonatomic,copy) NSString * currentSearchValue; 
+(void)initialize;
+(id)sharedManager;
-(void)endTextSearchSession;
-(NSString *)currentSearchValue;
-(void)handleTextSearchEvent:(id)arg1 ;
-(void)beginNewTextSearchSession;
-(void)_handleDelete:(id)arg1 ;
-(void)_syncSearchBufferHistory;
-(void)_handleRightLeftMovement:(id)arg1 ;
-(void)_handleUpDownMovement:(id)arg1 ;
-(void)_handleArrowKey:(id)arg1 ;
-(void)_handleLetter:(id)arg1 ;
-(void)setCurrentSearchValue:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
@end

