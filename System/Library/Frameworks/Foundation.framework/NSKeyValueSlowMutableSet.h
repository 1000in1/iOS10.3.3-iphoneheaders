/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableSet.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {

	NSKeyValueGetter* _valueGetter;
	NSKeyValueSetter* _valueSetter;
	char _treatNilValuesLikeEmptySets;
	char _padding[3];

}
+(SCD_Struct_NS31*)_proxyNonGCPoolPointer;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)_raiseNilValueExceptionWithSelector:(SEL)arg1 ;
-(id)_setValueWithSelector:(SEL)arg1 ;
-(id)_createMutableSetValueWithSelector:(SEL)arg1 ;
-(void)removeObject:(id)arg1 ;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(id)objectEnumerator;
-(void)minusSet:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)setSet:(id)arg1 ;
@end
