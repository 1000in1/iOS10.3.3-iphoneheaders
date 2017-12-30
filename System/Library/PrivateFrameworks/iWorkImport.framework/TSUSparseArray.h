/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUSparseArray : NSObject <NSCopying> {

	tsuSaPage* _topPage;
	unsigned _nonNilCount;
	unsigned _depth;

}

@property (readonly) unsigned count; 
-(unsigned)maxIndexForCurrentDepth;
-(void)increaseDepth;
-(char)hasObjectForKey:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)objectForKey:(unsigned)arg1 ;
-(void)removeObjectForKey:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forKey:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)foreach:(/*^block*/id)arg1 ;
@end

