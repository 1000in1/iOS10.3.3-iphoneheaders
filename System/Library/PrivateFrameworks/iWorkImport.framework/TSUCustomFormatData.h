/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray, NSIndexSet;

@interface TSUCustomFormatData : NSObject <NSCopying, NSMutableCopying> {

	unsigned char mMinimumIntegerWidth;
	unsigned char mDecimalWidth;
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
	unsigned char mIndexFromRightOfLastDigitPlaceholder;
	unsigned char mNumberOfHashDecimalPlaceholders;
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
	char mShowThousandsSeparator;
	char mUseAccountingStyle;
	char mRequiresFractionReplacement;
	char mIsConditional;
	char mFormatContainsIntegerToken;
	char mIsComplexFormat;
	unsigned short mCurrencyCodeIndex;
	NSString* mFormatString;
	NSArray* mInterstitialStrings;
	NSIndexSet* mInterstitialStringInsertionIndexes;
	int mFractionAccuracy;
	double mScaleFactor;

}

@property (nonatomic,copy) NSString * formatString; 
@property (nonatomic,copy) NSArray * interstitialStrings; 
@property (nonatomic,copy) NSIndexSet * interstitialStringInsertionIndexes; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) int fractionAccuracy; 
@property (assign,nonatomic) unsigned char minimumIntegerWidth; 
@property (assign,nonatomic) unsigned char decimalWidth; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits; 
@property (assign,nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits; 
@property (assign,nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder; 
@property (assign,nonatomic) unsigned char numberOfHashDecimalPlaceholders; 
@property (assign,nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat; 
@property (assign,nonatomic) unsigned short currencyCodeIndex; 
@property (assign,nonatomic) char showThousandsSeparator; 
@property (assign,nonatomic) char useAccountingStyle; 
@property (assign,nonatomic) char requiresFractionReplacement; 
@property (assign,nonatomic) char isConditional; 
@property (assign,nonatomic) char formatContainsIntegerToken; 
@property (assign,nonatomic) char isComplexFormat; 
+(id)customFormatData;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scaleFactor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(NSString *)formatString;
-(char)showThousandsSeparator;
-(int)fractionAccuracy;
-(void)setShowThousandsSeparator:(char)arg1 ;
-(void)setFractionAccuracy:(int)arg1 ;
-(void)setUseAccountingStyle:(char)arg1 ;
-(void)p_copySelfTo:(id)arg1 ;
-(void)setFormatString:(NSString *)arg1 ;
-(NSArray *)interstitialStrings;
-(void)setInterstitialStrings:(NSArray *)arg1 ;
-(NSIndexSet *)interstitialStringInsertionIndexes;
-(void)setInterstitialStringInsertionIndexes:(NSIndexSet *)arg1 ;
-(unsigned char)minimumIntegerWidth;
-(void)setMinimumIntegerWidth:(unsigned char)arg1 ;
-(unsigned char)decimalWidth;
-(void)setDecimalWidth:(unsigned char)arg1 ;
-(unsigned char)numberOfNonSpaceIntegerPlaceholderDigits;
-(void)setNumberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg1 ;
-(unsigned char)numberOfNonSpaceDecimalPlaceholderDigits;
-(void)setNumberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg1 ;
-(unsigned char)indexFromRightOfLastDigitPlaceholder;
-(void)setIndexFromRightOfLastDigitPlaceholder:(unsigned char)arg1 ;
-(unsigned char)numberOfHashDecimalPlaceholders;
-(void)setNumberOfHashDecimalPlaceholders:(unsigned char)arg1 ;
-(unsigned char)totalNumberOfDecimalPlaceholdersInFormat;
-(void)setTotalNumberOfDecimalPlaceholdersInFormat:(unsigned char)arg1 ;
-(unsigned short)currencyCodeIndex;
-(void)setCurrencyCodeIndex:(unsigned short)arg1 ;
-(char)useAccountingStyle;
-(char)requiresFractionReplacement;
-(void)setRequiresFractionReplacement:(char)arg1 ;
-(char)isConditional;
-(void)setIsConditional:(char)arg1 ;
-(char)formatContainsIntegerToken;
-(void)setFormatContainsIntegerToken:(char)arg1 ;
-(char)isComplexFormat;
-(void)setIsComplexFormat:(char)arg1 ;
-(id)initWithCustomFormatData:(id)arg1 ;
@end
