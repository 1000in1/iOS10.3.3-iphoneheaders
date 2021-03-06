/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface TIRollingLog : NSObject <NSCopying> {

	NSMutableArray* _entries;
	unsigned _nextIndex;
	unsigned _count;
	unsigned _maxCount;

}

@property (nonatomic,readonly) NSArray * currentEntries; 
-(NSArray *)currentEntries;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(id)initWithMaxCount:(unsigned)arg1 ;
@end

