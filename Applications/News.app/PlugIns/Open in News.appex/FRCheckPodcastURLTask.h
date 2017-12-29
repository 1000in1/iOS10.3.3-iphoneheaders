/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/Open in News.appex/Open in News
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSURL, NSString;

@interface FRCheckPodcastURLTask : NSObject <NSURLSessionDelegate, NSXMLParserDelegate> {

	/*^block*/id _completion;
	NSURL* _url;
	char _isPodcast;
	NSString* _title;
	NSURL* _completionURL;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)checkURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getURLForFeedURL:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3 ;
-(void)_resume;
@end
