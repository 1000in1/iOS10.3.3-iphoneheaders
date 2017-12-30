/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, TSULocale;

@interface TSUDateParser : NSObject {

	NSMutableArray* mFormatCategories;
	TSULocale* mLocale;
	char mIsJapaneseLocale;
	CFDateFormatterRef mSpecialCaseFormatter;

}
-(void)dealloc;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 formatCategoryMap:(id)arg3 ;
-(id)formatStringsDictionary;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromStringTryingFormats:(CFStringRef)arg1 locale:(CFLocaleRef)arg2 formats:(id)arg3 outSuccessfulFormatString:(const _CFString*)arg4 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 preferredFormatString:(CFStringRef)arg2 successfulFormatString:(const _CFString*)arg3 tryAggressiveFormats:(char)arg4 ;
-(id)initWithLocale:(id)arg1 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 successfulFormatString:(const _CFString*)arg2 ;
-(void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3 ;
@end

