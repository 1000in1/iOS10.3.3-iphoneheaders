/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString, TSULocale;

@interface TSUDateFormatter_NSFormatter : NSFormatter {

	NSString* mPreferredFormat;
	char isDateOnly;
	char isTimeOnly;
	TSULocale* _locale;

}

@property (nonatomic,retain) NSString * preferredFormat; 
@property (assign,nonatomic) char isDateOnly; 
@property (assign,nonatomic) char isTimeOnly; 
@property (nonatomic,retain) TSULocale * locale;                      //@synthesize locale=_locale - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setLocale:(TSULocale *)arg1 ;
-(TSULocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(char)isDateOnly;
-(char)isTimeOnly;
-(void)setPreferredFormat:(NSString *)arg1 ;
-(NSString *)preferredFormat;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)setIsDateOnly:(char)arg1 ;
-(void)setIsTimeOnly:(char)arg1 ;
@end
