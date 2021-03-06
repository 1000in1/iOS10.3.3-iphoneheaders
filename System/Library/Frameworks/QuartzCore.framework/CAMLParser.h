/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLParserDelegate> delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parseContentsOfURL:(id)arg1 ;
+(id)parser;
-(BOOL)parseData:(id)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long)arg2 ;
-(BOOL)parseString:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(id)elementValue;
-(void)setElementValue:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(char)arg2 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)parserError:(id)arg1 ;
-(void)parserWarning:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<CAMLParserDelegate>)arg1 ;
-(void)dealloc;
-(id<CAMLParserDelegate>)delegate;
-(id)result;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSError *)error;
@end

