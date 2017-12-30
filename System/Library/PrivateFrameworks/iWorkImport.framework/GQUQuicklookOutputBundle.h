/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>

@class NSString;

@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle> {

	CFDictionaryRef mQuicklookProperties;
	CFDictionaryRef mAttachments;
	CFDataRef mMainHtmlData;
	CFStringRef mUriScheme;
	CFStringRef mUuidStr;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDocumentSize:(CGSize)arg1 ;
-(void)setPageElementXPath:(CFStringRef)arg1 withThumbnailsOnLeft:(char)arg2 ;
-(char)setData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 forNamedResource:(CFStringRef)arg3 ;
-(char)setDataForMainHtmlResource:(CFDataRef)arg1 ;
-(CFStringRef)createUriForResource:(CFStringRef)arg1 ;
-(char)giveOutputToPreviewRequest:(QLPreviewRequestRef)arg1 ;
-(id)initWithUriScheme:(CFStringRef)arg1 ;
-(CFDataRef)mainHtmlData;
-(CFDictionaryRef)quicklookDictionary;
-(id)init;
-(void)dealloc;
@end

