/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSqliteResultRow.h>

@class NSArray;

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow {

	unsigned _count;
	NSArray* _frozenColumnNames;
	NSArray* _frozenObjects;
	NSArray* _frozenIntegers;
	NSArray* _frozenDoubles;
	NSArray* _frozenStrings;
	NSArray* _frozenDatas;

}
-(unsigned)_indexForKey:(id)arg1 ;
-(id)initWithResultRow:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringAtIndex:(unsigned)arg1 ;
-(id)keyAtIndex:(unsigned)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)dataAtIndex:(unsigned)arg1 ;
-(long long)integerAtIndex:(unsigned)arg1 ;
-(double)doubleAtIndex:(unsigned)arg1 ;
@end

