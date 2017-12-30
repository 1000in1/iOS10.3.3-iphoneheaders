/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/NSXMLParserDelegate.h>

@class NSData, NSMutableString, NSString;

@interface EpubRightsDataParser : NSObject <NSXMLParserDelegate> {

	NSData* _sinfData;
	NSMutableString* _buffer;
	char _isSinfElement;

}

@property (nonatomic,readonly) NSData * sinfData;                   //@synthesize sinfData=_sinfData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXMLData:(id)arg1 ;
-(NSData *)sinfData;
-(void)dealloc;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
@end

