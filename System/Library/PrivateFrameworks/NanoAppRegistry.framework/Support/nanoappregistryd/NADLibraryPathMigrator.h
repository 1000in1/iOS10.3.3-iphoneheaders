/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nanoappregistryd/NSFileManagerDelegate.h>

@class NSURL, NSString;

@interface NADLibraryPathMigrator : NSObject <NSFileManagerDelegate> {

	NSURL* _sourceURL;
	NSURL* _destinationURL;

}

@property (nonatomic,readonly) NSURL * sourceURL;                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4 ;
-(NSURL *)sourceURL;
-(NSURL *)destinationURL;
-(void)migrate;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
@end

