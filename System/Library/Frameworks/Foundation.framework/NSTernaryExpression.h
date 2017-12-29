/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSPredicate, NSExpression;

@interface NSTernaryExpression : NSExpression {

	NSPredicate* _predicate;
	NSExpression* _trueExpression;
	NSExpression* _falseExpression;

}
+(char)supportsSecureCoding;
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3 ;
-(id)trueExpression;
-(id)falseExpression;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicate;
-(void)allowEvaluation;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicateFormat;
@end
