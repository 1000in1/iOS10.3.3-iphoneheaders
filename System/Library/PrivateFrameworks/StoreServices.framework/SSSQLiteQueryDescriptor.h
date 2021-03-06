/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SSSQLitePredicate;

@interface SSSQLiteQueryDescriptor : NSObject <NSCopying> {

	Class _entityClass;
	int _limitCount;
	Class _memoryEntityClass;
	NSString* _orderingClause;
	NSArray* _orderingDirections;
	NSArray* _orderingProperties;
	SSSQLitePredicate* _predicate;
	char _returnsDistinctEntities;

}

@property (assign,nonatomic) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) Class memoryEntityClass;                   //@synthesize memoryEntityClass=_memoryEntityClass - In the implementation block
@property (assign,nonatomic) int limitCount;                            //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSString * orderingClause;                   //@synthesize orderingClause=_orderingClause - In the implementation block
@property (nonatomic,copy) NSArray * orderingDirections;                //@synthesize orderingDirections=_orderingDirections - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) char returnsDistinctEntities;              //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) SSSQLitePredicate * predicate;               //@synthesize predicate=_predicate - In the implementation block
-(Class)memoryEntityClass;
-(id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned)arg2 columns:(id)arg3 ;
-(void)setMemoryEntityClass:(Class)arg1 ;
-(NSString *)orderingClause;
-(void)setOrderingClause:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(SSSQLitePredicate *)arg1 ;
-(SSSQLitePredicate *)predicate;
-(void)setEntityClass:(Class)arg1 ;
-(void)setOrderingDirections:(NSArray *)arg1 ;
-(void)setOrderingProperties:(NSArray *)arg1 ;
-(Class)entityClass;
-(void)setLimitCount:(int)arg1 ;
-(int)limitCount;
-(NSArray *)orderingDirections;
-(NSArray *)orderingProperties;
-(char)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(char)arg1 ;
@end

