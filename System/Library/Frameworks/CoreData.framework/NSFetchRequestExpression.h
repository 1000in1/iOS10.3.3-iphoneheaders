/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression;

@interface NSFetchRequestExpression : NSExpression {

	void* _reserved1;
	void* _reserved2;
	void* _reserved3;
	void* _reserved4;
	NSExpression* _fetchRequest;
	NSExpression* _managedObjectContext;
	struct {
		unsigned isCountOnly : 1;
		unsigned _RESERVED : 31;
	}  _flags;

}

@property (readonly) NSExpression * requestExpression; 
@property (readonly) NSExpression * contextExpression; 
@property (getter=isCountOnlyRequest,readonly) char countOnlyRequest; 
+(id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(char)arg3 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(char)arg3 ;
-(char)isCountOnlyRequest;
-(NSExpression *)requestExpression;
-(NSExpression *)contextExpression;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(unsigned)expressionType;
-(id)predicateFormat;
@end

