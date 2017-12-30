/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSArrayChanges : NSMutableArray <NSCopying>

@property (readonly) unsigned changeCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)_isToManyChangeInformation;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
-(void)applyChangesToArray:(id)arg1 ;
-(int)_toManyPropertyType;
-(void)updateObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)moveObjectAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeLastObject;
-(unsigned)changeCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)sortUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)sortUsingSelector:(SEL)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned)arg1 withObjectAtIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)addChanges:(id)arg1 ;
@end

