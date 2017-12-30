/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSUZipWriter.h>

@protocol TSURandomWriteChannel;
@interface TSUZipFileWriter : TSUZipWriter {

	id<TSURandomWriteChannel> _writeChannel;
	/*^block*/id _writeChannelCompletionHandler;

}
+(void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(/*^block*/id)arg5 ;
+(void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)prepareWriteChannelWithCloseCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
@end

