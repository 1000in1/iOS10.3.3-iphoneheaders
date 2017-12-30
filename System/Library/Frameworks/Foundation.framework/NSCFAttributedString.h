/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@interface NSCFAttributedString : NSMutableAttributedString
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(Class)classForCoder;
-(char)_isDeallocating;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)setAttributedString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(char)isEqualToAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)appendAttributedString:(id)arg1 ;
-(char)_tryRetain;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned)arg2 ;
@end

