/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface MFIndexMap : NSObject {

	NSMutableArray* _tuples;
	NSMutableDictionary* _keyToTuple;

}

@property (nonatomic,retain) NSMutableArray * tuples;                       //@synthesize tuples=_tuples - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyToTuple;              //@synthesize keyToTuple=_keyToTuple - In the implementation block
@property (nonatomic,readonly) unsigned count; 
+(id)indexMap;
-(void)removeAllKeys;
-(char)removeKeyAtIndex:(unsigned)arg1 ;
-(char)hasKeyAtIndex:(unsigned)arg1 ;
-(void)shiftKeysStartingAtIndex:(unsigned)arg1 by:(int)arg2 ;
-(unsigned)indexOfKey:(long long)arg1 ;
-(void)addKey:(long long)arg1 atIndex:(unsigned)arg2 object:(id)arg3 ;
-(void)enumerateKeysIndexesAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)_tupleForKey:(long long)arg1 ;
-(void)addKey:(long long)arg1 atIndex:(unsigned)arg2 ;
-(void)enumerateKeysAndIndexesUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)tuples;
-(void)setTuples:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)keyToTuple;
-(void)setKeyToTuple:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)objectForKey:(long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(long long)keyAtIndex:(unsigned)arg1 ;
@end

