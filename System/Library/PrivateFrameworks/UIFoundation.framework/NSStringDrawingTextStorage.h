/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class NSConcreteNotifyingMutableAttributedString, NSLayoutManager, NSTextContainer, CUICatalog, CUIStyleEffectConfiguration, NSString;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate> {

	NSConcreteNotifyingMutableAttributedString* _contents;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	float _baselineDelta;
	struct {
		unsigned _typesetterBehavior : 4;
		unsigned _needToFlushCache : 1;
		unsigned _baselineMode : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _reserved : 24;
	}  _sdflags;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _styleEffects;
	float _defaultTighteningFactor;

}

@property (nonatomic,retain) CUICatalog * cuiCatalog;                                                                                 //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;                                                           //@synthesize styleEffects=_styleEffects - In the implementation block
@property (assign,setter=_setUsesSimpleTextEffects:,getter=_usesSimpleTextEffects,nonatomic) char usesSimpleTextEffects; 
@property (assign) float defaultTighteningFactor;                                                                                     //@synthesize defaultTighteningFactor=_defaultTighteningFactor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setHasCustomSettings:(char)arg1 ;
+(char)_hasCustomSettings;
+(id)stringDrawingTextStorage;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(CUICatalog *)cuiCatalog;
-(char)_isStringDrawingTextStorage;
-(int)typesetterBehavior;
-(void)_setBaselineDelta:(float)arg1 ;
-(char)_baselineMode;
-(char)_forceWordWrapping;
-(void)_setForceWordWrapping:(char)arg1 ;
-(float)defaultTighteningFactor;
-(void)setDefaultTighteningFactor:(float)arg1 ;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(id)textContainerForAttributedString:(id)arg1 containerSize:(CGSize)arg2 lineFragmentPadding:(float)arg3 ;
-(void)_setBaselineMode:(char)arg1 ;
-(void)drawTextContainer:(id)arg1 range:(NSRange)arg2 withRect:(CGRect)arg3 graphicsContext:(CGContextRef)arg4 baselineMode:(char)arg5 scrollable:(char)arg6 padding:(float)arg7 ;
-(float)_baselineDelta;
-(CGPoint)defaultTextContainerOriginForRect:(CGRect)arg1 ;
-(void)drawTextContainer:(id)arg1 withRect:(CGRect)arg2 graphicsContext:(CGContextRef)arg3 baselineMode:(char)arg4 scrollable:(char)arg5 padding:(float)arg6 ;
-(id)textContainerForAttributedString:(id)arg1 ;
-(void)fontSetChanged;
-(id)init;
-(oneway void)release;
-(void)dealloc;
-(unsigned)length;
-(id)string;
-(char)_isDeallocating;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)layoutManager;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)textContainer;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(void)_setUsesSimpleTextEffects:(char)arg1 ;
-(char)_usesSimpleTextEffects;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(char)_shouldSetOriginalFontAttribute;
-(char)_tryRetain;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(CGRect)usedRectForTextContainer:(id)arg1 ;
-(void)processEditing;
@end

