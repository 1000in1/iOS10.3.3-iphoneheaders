/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:19 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/XPCServices/AssetCacheLocatorService.xpc/AssetCacheLocatorService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSFileHandle, NSObject, NSString;

@interface ACLSImportDelegate : NSObject <NSURLSessionDataDelegate> {

	NSFileHandle* _fileHandle;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned _tag;
	int _responseCode;
	unsigned long long _fileOffset;
	unsigned long long _length;

}

@property (retain) NSFileHandle * fileHandle;                               //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign) unsigned long long fileOffset;                           //@synthesize fileOffset=_fileOffset - In the implementation block
@property (assign) unsigned long long length;                               //@synthesize length=_length - In the implementation block
@property (copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign) unsigned tag;                                            //@synthesize tag=_tag - In the implementation block
@property (assign) int responseCode;                                        //@synthesize responseCode=_responseCode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileOffset:(unsigned long long)arg1 ;
-(unsigned long long)fileOffset;
-(id)initWithFileHandle:(id)arg1 fileOffset:(unsigned long long)arg2 length:(unsigned long long)arg3 callback:(/*^block*/id)arg4 callbackQueue:(id)arg5 tag:(unsigned)arg6 ;
-(unsigned long long)length;
-(unsigned)tag;
-(void)setTag:(unsigned)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallback:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)setResponseCode:(int)arg1 ;
-(int)responseCode;
@end

