/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString, TSULocale;

@interface TSUDurationFormatter : NSFormatter {

	NSString* mFormat;
	TSULocale* mLocale;
	int mCompactStyleStartUnit;

}

@property (nonatomic,copy) NSString * format; 
@property (assign,nonatomic) int compactStyleStartUnit; 
@property (readonly) TSULocale * locale; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)format;
-(TSULocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithLocale:(id)arg1 ;
-(void)p_commonInit;
-(int)compactStyleStartUnit;
-(void)setCompactStyleStartUnit:(int)arg1 ;
@end

