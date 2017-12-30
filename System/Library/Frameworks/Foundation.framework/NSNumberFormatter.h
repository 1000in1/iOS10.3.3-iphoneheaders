/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSMutableDictionary, NSRecursiveLock, NSString, NSLocale, NSDictionary, NSNumber;

@interface NSNumberFormatter : NSFormatter <NSObservable, NSObserver> {

	NSMutableDictionary* _attributes;
	CFNumberFormatterRef _formatter;
	unsigned _counter;
	unsigned _behavior;
	NSRecursiveLock* _lock;
	unsigned long _stateBitMask;
	int _cacheGeneration;
	void** _reserved[8];

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int formattingContext; 
@property (assign) unsigned numberStyle; 
@property (copy) NSLocale * locale; 
@property (assign) char generatesDecimalNumbers; 
@property (assign) unsigned formatterBehavior; 
@property (copy) NSString * negativeFormat; 
@property (copy) NSDictionary * textAttributesForNegativeValues; 
@property (copy) NSString * positiveFormat; 
@property (copy) NSDictionary * textAttributesForPositiveValues; 
@property (assign) char allowsFloats; 
@property (copy) NSString * decimalSeparator; 
@property (assign) char alwaysShowsDecimalSeparator; 
@property (copy) NSString * currencyDecimalSeparator; 
@property (assign) char usesGroupingSeparator; 
@property (copy) NSString * groupingSeparator; 
@property (copy) NSString * zeroSymbol; 
@property (copy) NSDictionary * textAttributesForZero; 
@property (copy) NSString * nilSymbol; 
@property (copy) NSDictionary * textAttributesForNil; 
@property (copy) NSString * notANumberSymbol; 
@property (copy) NSDictionary * textAttributesForNotANumber; 
@property (copy) NSString * positiveInfinitySymbol; 
@property (copy) NSDictionary * textAttributesForPositiveInfinity; 
@property (copy) NSString * negativeInfinitySymbol; 
@property (copy) NSDictionary * textAttributesForNegativeInfinity; 
@property (copy) NSString * positivePrefix; 
@property (copy) NSString * positiveSuffix; 
@property (copy) NSString * negativePrefix; 
@property (copy) NSString * negativeSuffix; 
@property (copy) NSString * currencyCode; 
@property (copy) NSString * currencySymbol; 
@property (copy) NSString * internationalCurrencySymbol; 
@property (copy) NSString * percentSymbol; 
@property (copy) NSString * perMillSymbol; 
@property (copy) NSString * minusSign; 
@property (copy) NSString * plusSign; 
@property (copy) NSString * exponentSymbol; 
@property (assign) unsigned groupingSize; 
@property (assign) unsigned secondaryGroupingSize; 
@property (copy) NSNumber * multiplier; 
@property (assign) unsigned formatWidth; 
@property (copy) NSString * paddingCharacter; 
@property (assign) unsigned paddingPosition; 
@property (assign) unsigned roundingMode; 
@property (copy) NSNumber * roundingIncrement; 
@property (assign) unsigned minimumIntegerDigits; 
@property (assign) unsigned maximumIntegerDigits; 
@property (assign) unsigned minimumFractionDigits; 
@property (assign) unsigned maximumFractionDigits; 
@property (copy) NSNumber * minimum; 
@property (copy) NSNumber * maximum; 
@property (copy) NSString * currencyGroupingSeparator; 
@property (getter=isLenient) char lenient; 
@property (assign) char usesSignificantDigits; 
@property (assign) unsigned minimumSignificantDigits; 
@property (assign) unsigned maximumSignificantDigits; 
@property (getter=isPartialStringValidationEnabled) char partialStringValidationEnabled; 
+(void)setDefaultFormatterBehavior:(unsigned)arg1 ;
+(unsigned)defaultFormatterBehavior;
+(void)initialize;
+(id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned)arg2 ;
-(void)clearPropertyBit;
-(void)setPropertyBit;
-(char)checkModify;
-(void)resetCheckModify;
-(char)checkLocaleChange;
-(void)resetCheckLocaleChange;
-(int)formattingContext;
-(void*)getFormatter;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(unsigned)roundingMode;
-(char)_mayDecorateAttributedStringForObjectValue:(id)arg1 ;
-(int)_cacheGenerationCount;
-(char)_tracksCacheGenerationCount;
-(void)_clearFormatter;
-(void)setNilSymbol:(NSString *)arg1 ;
-(void)setPositiveInfinitySymbol:(NSString *)arg1 ;
-(void)setNegativeInfinitySymbol:(NSString *)arg1 ;
-(void)setAllowsFloats:(char)arg1 ;
-(NSString *)nilSymbol;
-(NSString *)notANumberSymbol;
-(NSString *)zeroSymbol;
-(NSString *)negativeInfinitySymbol;
-(NSString *)positiveInfinitySymbol;
-(void)_regenerateFormatter;
-(NSDictionary *)textAttributesForNil;
-(NSDictionary *)textAttributesForNotANumber;
-(NSDictionary *)textAttributesForZero;
-(NSDictionary *)textAttributesForNegativeInfinity;
-(NSDictionary *)textAttributesForPositiveInfinity;
-(NSDictionary *)textAttributesForNegativeValues;
-(NSDictionary *)textAttributesForPositiveValues;
-(void*)__Keynote_NOOP;
-(unsigned)numberStyle;
-(char)generatesDecimalNumbers;
-(unsigned)formatterBehavior;
-(NSString *)negativeFormat;
-(void)setNegativeFormat:(NSString *)arg1 ;
-(void)setTextAttributesForNegativeValues:(NSDictionary *)arg1 ;
-(void)setTextAttributesForPositiveValues:(NSDictionary *)arg1 ;
-(char)allowsFloats;
-(void)setDecimalSeparator:(NSString *)arg1 ;
-(char)alwaysShowsDecimalSeparator;
-(void)setAlwaysShowsDecimalSeparator:(char)arg1 ;
-(void)setCurrencyDecimalSeparator:(NSString *)arg1 ;
-(char)usesGroupingSeparator;
-(void)setGroupingSeparator:(NSString *)arg1 ;
-(void)setZeroSymbol:(NSString *)arg1 ;
-(void)setTextAttributesForZero:(NSDictionary *)arg1 ;
-(void)setTextAttributesForNil:(NSDictionary *)arg1 ;
-(void)setNotANumberSymbol:(NSString *)arg1 ;
-(void)setTextAttributesForNotANumber:(NSDictionary *)arg1 ;
-(void)setTextAttributesForPositiveInfinity:(NSDictionary *)arg1 ;
-(void)setTextAttributesForNegativeInfinity:(NSDictionary *)arg1 ;
-(NSString *)positivePrefix;
-(void)setPositivePrefix:(NSString *)arg1 ;
-(NSString *)positiveSuffix;
-(void)setPositiveSuffix:(NSString *)arg1 ;
-(NSString *)negativePrefix;
-(void)setNegativePrefix:(NSString *)arg1 ;
-(NSString *)negativeSuffix;
-(void)setNegativeSuffix:(NSString *)arg1 ;
-(char)_hasSetCurrencyCode;
-(char)_hasSetCurrencySymbol;
-(void)setCurrencySymbol:(NSString *)arg1 ;
-(NSString *)internationalCurrencySymbol;
-(void)setInternationalCurrencySymbol:(NSString *)arg1 ;
-(char)_hasSetInternationalCurrencySymbol;
-(void)setPercentSymbol:(NSString *)arg1 ;
-(NSString *)perMillSymbol;
-(void)setPerMillSymbol:(NSString *)arg1 ;
-(NSString *)minusSign;
-(void)setMinusSign:(NSString *)arg1 ;
-(NSString *)plusSign;
-(void)setPlusSign:(NSString *)arg1 ;
-(NSString *)exponentSymbol;
-(void)setExponentSymbol:(NSString *)arg1 ;
-(void)setGroupingSize:(unsigned)arg1 ;
-(unsigned)secondaryGroupingSize;
-(void)setSecondaryGroupingSize:(unsigned)arg1 ;
-(unsigned)formatWidth;
-(void)setFormatWidth:(unsigned)arg1 ;
-(void)setMultiplier:(NSNumber *)arg1 ;
-(NSString *)paddingCharacter;
-(void)setPaddingCharacter:(NSString *)arg1 ;
-(unsigned)paddingPosition;
-(void)setPaddingPosition:(unsigned)arg1 ;
-(NSNumber *)roundingIncrement;
-(unsigned)minimumIntegerDigits;
-(void)setMinimumIntegerDigits:(unsigned)arg1 ;
-(unsigned)maximumIntegerDigits;
-(void)setMaximumIntegerDigits:(unsigned)arg1 ;
-(unsigned)minimumFractionDigits;
-(void)setMinimum:(NSNumber *)arg1 ;
-(void)setMaximum:(NSNumber *)arg1 ;
-(NSString *)currencyGroupingSeparator;
-(void)setCurrencyGroupingSeparator:(NSString *)arg1 ;
-(char)isLenient;
-(char)usesSignificantDigits;
-(unsigned)minimumSignificantDigits;
-(void)setMinimumSignificantDigits:(unsigned)arg1 ;
-(unsigned)maximumSignificantDigits;
-(char)isPartialStringValidationEnabled;
-(void)setPartialStringValidationEnabled:(char)arg1 ;
-(char)_usesCharacterDirection;
-(void)_setUsesCharacterDirection:(char)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)_reset;
-(void)receiveObservedValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setNumberStyle:(unsigned)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
-(NSLocale *)locale;
-(void)_invalidateCache;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setFormatterBehavior:(unsigned)arg1 ;
-(void)setGeneratesDecimalNumbers:(char)arg1 ;
-(NSNumber *)multiplier;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)numberFromString:(id)arg1 ;
-(void)setUsesSignificantDigits:(char)arg1 ;
-(void)setMaximumSignificantDigits:(unsigned)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(void)setPositiveFormat:(NSString *)arg1 ;
-(NSString *)positiveFormat;
-(NSString *)currencySymbol;
-(void)setUsesGroupingSeparator:(char)arg1 ;
-(void)setLenient:(char)arg1 ;
-(void)setFormattingContext:(int)arg1 ;
-(void)setMaximumFractionDigits:(unsigned)arg1 ;
-(void)setMinimumFractionDigits:(unsigned)arg1 ;
-(void)setRoundingMode:(unsigned)arg1 ;
-(void)setRoundingIncrement:(NSNumber *)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)decimalSeparator;
-(NSString *)groupingSeparator;
-(NSString *)percentSymbol;
-(unsigned)groupingSize;
-(NSString *)currencyDecimalSeparator;
-(unsigned)maximumFractionDigits;
-(NSNumber *)minimum;
-(NSNumber *)maximum;
@end

