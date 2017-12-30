/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTypesetter.h>

@class NSAttributedString, NSLayoutManager, NSArray, NSTextContainer, NSParagraphStyle;

@interface NSATSTypesetter : NSTypesetter {

	NSAttributedString* attributedString;
	NSRange paragraphGlyphRange;
	NSRange paragraphSeparatorGlyphRange;
	float lineFragmentPadding;
	NSLayoutManager* layoutManager;
	NSArray* textContainers;
	NSTextContainer* currentTextContainer;
	unsigned currentTextContainerIndex;
	CGSize currentTextContainerSize;
	NSParagraphStyle* currentParagraphStyle;
	void** _atsReserved[8];
	id _private;

}
+(id)sharedTypesetter;
+(char)_allowsScreenFontKerning;
+(id)sharedInstance;
+(void)initialize;
-(unsigned)actionForControlCharacterAtIndex:(unsigned)arg1 ;
-(NSRange)layoutCharactersInRange:(NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned)arg3 ;
-(void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned)arg2 maxNumberOfLineFragments:(unsigned)arg3 nextGlyphIndex:(unsigned*)arg4 ;
-(char)_mirrorsTextAlignment;
-(id)paragraphArbitrator;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(const char*)_bidiLevels;
-(CTTypesetterRef)_ctTypesetter;
-(char)synchronizesAlignmentToDirection;
-(void)_doBidiProcessing;
-(int)_baseWritingDirection;
-(char)_baselineRenderingMode;
-(void)beginLineWithGlyphAtIndex:(unsigned)arg1 ;
-(void)endLineWithGlyphRange:(NSRange)arg1 ;
-(void)_flushCachedObjects;
-(unsigned)lineBreakStrategy;
-(void)beginParagraph;
-(void)endParagraph;
-(char)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned*)arg1 characterIndex:(unsigned*)arg2 atPoint:(CGPoint*)arg3 renderingContext:(id*)arg4 ;
-(char)_isBusy;
-(char)_forceWordWrapping;
-(void)_setForceWordWrapping:(char)arg1 ;
-(float)defaultTighteningFactor;
-(void)setDefaultTighteningFactor:(float)arg1 ;
-(void)_setBaselineRenderingMode:(char)arg1 ;
-(void)setLineBreakStrategy:(unsigned)arg1 ;
-(id)_getATSTypesetterGuts;
-(char)_usesScreenFonts;
-(unsigned)_sweepDirectionForGlyphAtIndex:(long)arg1 ;
-(unsigned)layoutParagraphAtPoint:(CGPoint*)arg1 ;
-(char)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned)arg1 ;
-(char)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned)arg1 ;
-(float)hyphenationFactorForGlyphAtIndex:(unsigned)arg1 ;
-(CGRect)boundingBoxForControlGlyphAtIndex:(unsigned)arg1 forTextContainer:(id)arg2 proposedLineFragment:(CGRect)arg3 glyphPosition:(CGPoint)arg4 characterIndex:(unsigned)arg5 ;
-(unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned)arg1 ;
-(SCD_Struct_NS2*)_allocateAuxData;
-(/*function pointer*/void**)_lineFragmentRectForProposedRectArgs;
-(void)dealloc;
-(void)_setBusy:(char)arg1 ;
-(float)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned)arg2 ;
@end

