/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface TSURegularExpression : NSObject <NSCopying, NSCoding> {

	NSString* _expressionString;
	void* _reserved;

}
+(void)initialize;
+(id)regularExpressionWithString:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithExpressionString:(id)arg1 ;
-(id)initWithExpressionString:(id)arg1 options:(unsigned)arg2 ;
-(id)expressionString;
-(unsigned)numberOfSubexpressions;
-(NSRange)matchedRangeForCString:(const char*)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
-(NSRange)matchedRangeForString:(id)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
-(const char*)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2 ;
@end

