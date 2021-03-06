/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/Support/appconduitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSError;

@interface ACXStreamingZipSocketSender : NSObject {

	char _stopWriting;
	/*^block*/id _progressBlock;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSURL* _url;
	NSError* _error;
	/*^block*/id _writerBlock;
	long long _bytesOutput;
	long long _totalBytes;

}

@property (readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign) char stopWriting;                                        //@synthesize stopWriting=_stopWriting - In the implementation block
@property (readonly) id writerBlock;                                        //@synthesize writerBlock=_writerBlock - In the implementation block
@property (assign) long long bytesOutput;                                   //@synthesize bytesOutput=_bytesOutput - In the implementation block
@property (assign) long long totalBytes;                                    //@synthesize totalBytes=_totalBytes - In the implementation block
@property (copy) id progressBlock;                                          //@synthesize progressBlock=_progressBlock - In the implementation block
+(id)senderForURL:(id)arg1 queue:(id)arg2 writingUsingBlock:(/*^block*/id)arg3 ;
-(void)beginSendingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cancelSending;
-(long long)bytesOutput;
-(id)initWithURL:(id)arg1 queue:(id)arg2 writerBlock:(/*^block*/id)arg3 ;
-(void)setStopWriting:(char)arg1 ;
-(void)setBytesOutput:(long long)arg1 ;
-(NSURL *)url;
-(id)progressBlock;
-(void)setTotalBytes:(long long)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(id)writerBlock;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)totalBytes;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(char)stopWriting;
@end

