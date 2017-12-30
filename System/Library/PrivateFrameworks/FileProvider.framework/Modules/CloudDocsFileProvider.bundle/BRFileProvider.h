/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:45 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Modules/CloudDocsFileProvider.bundle/CloudDocsFileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsFileProvider/FPModule.h>

@class NSString;

@interface BRFileProvider : NSObject <FPModule>

@property (readonly) NSString * bookmarkPrefix; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bookmarkPrefix;
-(void)FPBookmarkableStringFromDocumentURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)FPDocumentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)FPExtendBookmarkForDocumentURL:(id)arg1 forBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
