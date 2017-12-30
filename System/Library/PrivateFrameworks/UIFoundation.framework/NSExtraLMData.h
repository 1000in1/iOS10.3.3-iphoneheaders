/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSRunStorage, NSLock, NSTextContainer, NSMutableArray, NSLayoutManagerTextBlockRowArrayCache, NSParagraphArbitrator, CUIStyleEffectConfiguration;

@interface NSExtraLMData : NSObject {

	NSRunStorage* _attachmentSizesRun;
	CGRect _currentAttachmentRect;
	unsigned _currentAttachmentIndex;
	NSLock* _fillHoleLock;
	NSRunStorage* _fragmentRunsExtras;
	id _temporaryAttributes;
	NSTextContainer* _firstTextContainer;
	CFDictionaryRef _textContainerIndexes;
	CFDictionaryRef _textContainerGlyphIndexes;
	int _typesetterBehavior;
	CGRect _cachedFontBounds;
	float _cachedUnderlineThickness;
	float _cachedUnderlinePosition;
	float _cachedUnderlineAdjustment;
	NSRange _cachedUnderlineRange;
	NSMutableArray* _blockRunsArray;
	float _hyphenationFactor;
	NSMutableArray* _insertionPointCache;
	NSGlyphTree* _glyphTree;
	NSLayoutTree* _layoutTree;
	NSRange _firstTextViewVisibleCharRange;
	CGSize _firstTextViewVisibleOffset;
	NSRange _lastInvalidatedCharRange;
	float _lastInvalidatedLongitudinalPosition;
	NSTextContainer* _lastInvalidatedTextContainer;
	NSLayoutManagerTextBlockRowArrayCache* _rowArrayCache;
	NSParagraphArbitrator* _paragraphArbitrator;
	CUIStyleEffectConfiguration* _styleEffectConfig;
	struct {
		unsigned glyphCause : 6;
		unsigned layoutCause : 6;
		unsigned delegateRespondsToTempAttrs : 1;
		unsigned processingFirstTextViewVisible : 1;
		unsigned temporarySpacingChange : 1;
		unsigned alwaysDrawsActive : 1;
		unsigned usesOldShowPackedGlyphs : 1;
		unsigned drawsUnderlinesLikeWebKit : 1;
		unsigned drawsDebugBaselines : 1;
		unsigned mirrorsTextAlignment : 1;
		unsigned forcesTrackingFloor : 1;
		unsigned reserved : 11;
	}  _lmFlags2;

}
@end

