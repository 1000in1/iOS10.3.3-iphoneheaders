/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIElementProtocol <NSObject>
@required
+(void)applyElementAttributeCacheScheme:(int)arg1;
+(id)uiElementAtCoordinate:(CGPoint)arg1;
+(id)uiElementAtCoordinate:(CGPoint)arg1 hitTestOrientation:(int)arg2;
+(id)uiElementAtCoordinate:(CGPoint)arg1 forApplication:(AXUIElementRef)arg2 contextId:(unsigned)arg3;
-(char)isValid;
-(id)stringWithAXAttribute:(int)arg1;
-(CGRect*)rectWithAXAttribute:(int)arg1;
-(id)numberWithAXAttribute:(int)arg1;
-(CGPoint*)pointWithAXAttribute:(int)arg1;
-(NSRange*)rangeWithAXAttribute:(int)arg1;
-(id)objectWithAXAttribute:(int)arg1 parameter:(void*)arg2;
-(id)objectWithAXAttribute:(int)arg1;
-(char)isMockElement;
-(void)enableCache:(char)arg1;
-(void)disableCache;
-(char)canPerformAXAction:(int)arg1;
-(id)arrayWithAXAttribute:(int)arg1;
-(char)boolWithAXAttribute:(int)arg1;
-(CGPathRef)pathWithAXAttribute:(int)arg1;
-(id)uiElementsWithAttribute:(int)arg1;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2;
-(char)performAXAction:(int)arg1;
-(char)performAXAction:(int)arg1 withValue:(id)arg2;
-(id)previousElementsWithCount:(unsigned)arg1;
-(id)nextElementsWithCount:(unsigned)arg1;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2 fetchAttributes:(char)arg3;
-(char)isValidForApplication:(id)arg1;
-(void)updateCacheWithAttributes:(id)arg1;
-(void)updateCache:(int)arg1;
-(void)setAXAttribute:(int)arg1 withBOOL:(char)arg2;
-(void)setAXAttribute:(int)arg1 withString:(id)arg2;
-(void)setAXAttribute:(int)arg1 withLong:(long)arg2;
-(void)setAXAttribute:(int)arg1 withFloat:(float)arg2;
-(void)setAXAttribute:(int)arg1 withNumber:(id)arg2;
-(void)setAXAttribute:(int)arg1 withPoint:(CGPoint)arg2;
-(void)setAXAttribute:(int)arg1 withSize:(CGSize)arg2;
-(void)setAXAttribute:(int)arg1 withRange:(NSRange)arg2;
-(void)setAXAttribute:(int)arg1 withUIElement:(id)arg2;
-(void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2;
-(void)setAXAttribute:(int)arg1 withArray:(id)arg2;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(char)arg3;
-(char)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3;
-(NSRange*)nextCursorRangeInDirection:(unsigned)arg1 unit:(unsigned)arg2 outputRange:(NSRange*)arg3 currentCursorRange:(NSRange)arg4;
-(CGColorRef)colorWithAXAttribute:(int)arg1;
-(NSRange*)nextCursorRangeInDirection:(unsigned)arg1 unit:(unsigned)arg2 outputRange:(NSRange*)arg3;
-(int)pid;

@end

