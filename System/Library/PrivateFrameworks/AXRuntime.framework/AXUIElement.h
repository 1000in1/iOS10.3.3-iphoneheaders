/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <UIKit/UIElementProtocol.h>

@class NSString;

@interface AXUIElement : NSObject <UIElementProtocol> {

	AXUIElementRef _axElement;
	int _cachedRefCount;
	CFDictionaryRef _cachedAttributes;
	char _isValid;

}

@property (nonatomic,readonly) AXUIElementRef axElement;                    //@synthesize axElement=_axElement - In the implementation block
@property (assign,nonatomic) CFDictionaryRef cachedAttributes;              //@synthesize cachedAttributes=_cachedAttributes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)applyElementAttributeCacheScheme:(int)arg1 ;
+(id)uiElementAtCoordinate:(CGPoint)arg1 ;
+(id)uiElementAtCoordinate:(CGPoint)arg1 hitTestOrientation:(int)arg2 ;
+(id)uiElementWithAXElement:(AXUIElementRef)arg1 ;
+(id)uiElementAtCoordinate:(CGPoint)arg1 forApplication:(AXUIElementRef)arg2 contextId:(unsigned)arg3 ;
+(id)uiElementWithAXElement:(AXUIElementRef)arg1 cache:(CFDictionaryRef)arg2 ;
+(AXUIElementRef)systemWideAXUIElement;
+(id)uiSystemWideApplication;
+(id)uiElementAtCoordinate:(CGPoint)arg1 startWithElement:(id)arg2 ;
+(id)uiApplicationAtCoordinate:(CGPoint)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isValid;
-(void)_invalidate;
-(CFDictionaryRef)cachedAttributes;
-(void)setCachedAttributes:(CFDictionaryRef)arg1 ;
-(id)stringWithAXAttribute:(int)arg1 ;
-(CGRect)rectWithAXAttribute:(int)arg1 ;
-(id)numberWithAXAttribute:(int)arg1 ;
-(CGPoint)pointWithAXAttribute:(int)arg1 ;
-(NSRange)rangeWithAXAttribute:(int)arg1 ;
-(id)objectWithAXAttribute:(int)arg1 parameter:(void*)arg2 ;
-(id)objectWithAXAttribute:(int)arg1 ;
-(char)isMockElement;
-(AXUIElementRef)axElement;
-(void)enableCache:(char)arg1 ;
-(void)disableCache;
-(char)canPerformAXAction:(int)arg1 ;
-(id)arrayWithAXAttribute:(int)arg1 ;
-(char)boolWithAXAttribute:(int)arg1 ;
-(CGPathRef)pathWithAXAttribute:(int)arg1 ;
-(id)uiElementsWithAttribute:(int)arg1 ;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2 ;
-(char)performAXAction:(int)arg1 ;
-(char)performAXAction:(int)arg1 withValue:(id)arg2 ;
-(id)previousElementsWithCount:(unsigned)arg1 ;
-(id)nextElementsWithCount:(unsigned)arg1 ;
-(id)uiElementsWithAttribute:(int)arg1 parameter:(void*)arg2 fetchAttributes:(char)arg3 ;
-(char)isValidForApplication:(id)arg1 ;
-(void)updateCacheWithAttributes:(id)arg1 ;
-(void)updateCache:(int)arg1 ;
-(void)setAXAttribute:(int)arg1 withBOOL:(char)arg2 ;
-(void)setAXAttribute:(int)arg1 withString:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withLong:(long)arg2 ;
-(void)setAXAttribute:(int)arg1 withFloat:(float)arg2 ;
-(void)setAXAttribute:(int)arg1 withNumber:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withPoint:(CGPoint)arg2 ;
-(void)setAXAttribute:(int)arg1 withSize:(CGSize)arg2 ;
-(void)setAXAttribute:(int)arg1 withRange:(NSRange)arg2 ;
-(void)setAXAttribute:(int)arg1 withUIElement:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withUIElementArray:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withArray:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2 ;
-(void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(char)arg3 ;
-(id)initWithAXElement:(AXUIElementRef)arg1 cache:(CFDictionaryRef)arg2 ;
-(id)initWithAXElement:(AXUIElementRef)arg1 ;
-(void)_createCache:(char)arg1 ;
-(id)valueArrayWithAXAttributes:(CFArrayRef)arg1 ;
-(void*)_cachedValueForAttribute:(int)arg1 ;
-(char)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(id)_elementsWithParameter:(int)arg1 andCount:(unsigned)arg2 ;
-(id)_objectForRange:(NSRange)arg1 withParameterizedAttribute:(int)arg2 ;
-(NSRange)_selectedTextRange;
-(NSRange)nextCursorRangeInDirection:(unsigned)arg1 unit:(unsigned)arg2 outputRange:(NSRange*)arg3 currentCursorRange:(NSRange)arg4 ;
-(id)_attributedValueForRange:(NSRange)arg1 ;
-(id)_valueForRange:(NSRange)arg1 ;
-(int)_lineEndPosition;
-(NSRange)_lineRangeForPosition:(unsigned)arg1 ;
-(int)_lineStartPosition;
-(CGColorRef)colorWithAXAttribute:(int)arg1 ;
-(NSRange)nextCursorRangeInDirection:(unsigned)arg1 unit:(unsigned)arg2 outputRange:(NSRange*)arg3 ;
-(void)setAXElement:(AXUIElementRef)arg1 ;
-(void*)modifyStaticCacheValue:(void*)arg1 ;
-(id)_outputCache;
-(int)pid;
@end

