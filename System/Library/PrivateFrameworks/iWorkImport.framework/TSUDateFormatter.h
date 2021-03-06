/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSUDateFormatter : NSObject {

	NSString* mDateOnlyFormatString;
	NSString* mTimeOnlyFormatString;
	CFDateFormatterRef mFullDateFormatter;

}
+(unsigned)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)defaultDateTimeFormatForLocale:(id)arg1 ;
+(id)supportedDateFormatsForLocale:(id)arg1 ;
+(id)supportedTimeFormatsForLocale:(id)arg1 ;
+(id)dateFormatStringSpecialSymbols;
+(id)shortMonthNamesForNonCachedCurrentLocale;
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithLocale:(id)arg1 ;
@end

