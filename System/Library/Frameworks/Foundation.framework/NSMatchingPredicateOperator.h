/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSStringPredicateOperator.h>

@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

	int _contextLock;
	SCD_Struct_NS53* _regexContext;

}
-(char)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)initWithOperatorType:(unsigned)arg1 modifier:(unsigned)arg2 variant:(unsigned)arg3 ;
-(char)_shouldEscapeForLike;
-(void)_clearContext;
-(void)dealloc;
-(SEL)selector;
-(id)symbol;
@end
