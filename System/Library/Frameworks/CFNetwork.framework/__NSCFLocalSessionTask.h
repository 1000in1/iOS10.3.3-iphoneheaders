/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSessionTask.h>
#import <libobjc.A.dylib/NSURLSessionTaskSubclass.h>
#import <libobjc.A.dylib/NSURLSessionDataTaskSubclass.h>
#import <libobjc.A.dylib/NSURLSessionUploadTaskSubclass.h>
#import <libobjc.A.dylib/SessionConnectionDelegate.h>

@protocol OS_dispatch_data, OS_dispatch_source;
@class __NSCFURLSessionConnection, NSURL, NSObject, __NSURLSessionLocal, NSNumber, NSInputStream, NSOutputStream, NSOperationQueue, NSString;

@interface __NSCFLocalSessionTask : __NSCFURLSessionTask <NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, SessionConnectionDelegate> {

	__NSCFURLSessionConnection* _cfConn;
	NSURL* _uploadFile;
	NSObject*<OS_dispatch_data> _dataTaskData;
	/*^block*/id _dataTaskCompletion;
	char _pendingResponseDisposition;
	char _pendingResponseDisposition_didFinish;
	NSObject*<OS_dispatch_data> _pendingResponseBytes;
	__NSURLSessionLocal* _localSession;
	unsigned _suspendCount;
	/*^block*/id _async_initialization;
	NSObject*<OS_dispatch_source> _resourceTimeout;
	char _didIssueDidFinish;
	char _suspendedForDisposition;
	NSNumber* _connectedSocket;
	HTTPConnectionCacheKey* _connKey;
	double _startTimeoutTime;
	NSObject*<OS_dispatch_source> _startTimeoutTimer;
	NSObject*<OS_dispatch_source> _payloadTransmissionTimer;
	NSObject*<OS_dispatch_source> _willSendRequestTimer;
	NSInputStream* _socketReadStreamForUpgrade;
	NSOutputStream* _socketWriteStreamForUpgrade;
	NSOperationQueue* _connectionWorkQueue;
	int _connectionWorkQueueSuspensionCount;
	char _didCheckMixedReplace;
	char _isMixedReplace;

}

@property (retain) __NSCFURLSessionConnection * cfConn;                    //@synthesize cfConn=_cfConn - In the implementation block
@property (retain) NSURL * uploadFile;                                     //@synthesize uploadFile=_uploadFile - In the implementation block
@property (copy) id dataTaskCompletion;                                    //@synthesize dataTaskCompletion=_dataTaskCompletion - In the implementation block
@property (assign) char pendingResponseDisposition;                        //@synthesize pendingResponseDisposition=_pendingResponseDisposition - In the implementation block
@property (assign) char pendingResponseDisposition_didFinish;              //@synthesize pendingResponseDisposition_didFinish=_pendingResponseDisposition_didFinish - In the implementation block
@property (retain) __NSURLSessionLocal * localSession;                     //@synthesize localSession=_localSession - In the implementation block
@property (assign) unsigned suspendCount;                                  //@synthesize suspendCount=_suspendCount - In the implementation block
@property (copy) id async_initialization;                                  //@synthesize async_initialization=_async_initialization - In the implementation block
@property (assign) char didIssueDidFinish;                                 //@synthesize didIssueDidFinish=_didIssueDidFinish - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(__NSCFURLSessionConnection *)cfConn;
-(void)_onqueue_cancel;
-(id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned)arg3 session:(id)arg4 ;
-(void)_onSessionQueue_disavow;
-(void)setDataTaskCompletion:(id)arg1 ;
-(void)setUploadFile:(NSURL *)arg1 ;
-(id)_onqueue_strippedMutableRequest;
-(void)setAsync_initialization:(id)arg1 ;
-(void)_onqueue_completeInitialization;
-(void)_private_onqueue_didReceiveResponse:(id)arg1 ;
-(id)dataTaskCompletion;
-(__NSURLSessionLocal *)localSession;
-(void)_onqueue_suspend;
-(void)setPendingResponseDisposition:(char)arg1 ;
-(void)_private_onqueue_didReceiveResponseDisposition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_resume;
-(char)pendingResponseDisposition_didFinish;
-(void)setPendingResponseDisposition_didFinish:(char)arg1 ;
-(void)_task_onqueue_didFinish;
-(void)_finishBecomeStream:(id)arg1 forConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finishAllow;
-(void)_private_onqueue_becomeStreamTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_finishBecomeDownload:(id)arg1 ;
-(char)pendingResponseDisposition;
-(char)didIssueDidFinish;
-(void)setDidIssueDidFinish:(char)arg1 ;
-(void)_onqueue_startPayloadTransmissionTimer;
-(id)async_initialization;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(id)canceledError;
-(void)_onqueue_cancel_with_error:(id)arg1 ;
-(void)_onqueue_adjustPoolPriority;
-(id)error:(id)arg1 code:(int)arg2 ;
-(id)timeoutErrorWithStreamErrorCode:(int)arg1 ;
-(void)setCfConn:(__NSCFURLSessionConnection *)arg1 ;
-(void)_onqueue_startResourceTimer;
-(void)_onqueue_startStartTimer;
-(void)_onqueue_startTimer:(id)arg1 withTimeoutInNanos:(long long)arg2 streamErrorCode:(int)arg3 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_submitConnectionWork:(/*^block*/id)arg1 ;
-(void)_onqueue_suspendWorkQueue;
-(void)_onqueue_resumeWorkQueue;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_didFinishCollectingMetrics:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_didReceiveDispatchData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3 ;
-(void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_onqueue_connectionWaitingWithReason:(long long)arg1 ;
-(void)_onqueue_conditionalRequirementsChanged:(char)arg1 ;
-(void)_onqueue_needConnectedSocketToHost:(id)arg1 port:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(/*^block*/id)arg4 ;
-(void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connectionWillFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveConnectionCacheKey:(HTTPConnectionCacheKey*)arg2 ;
-(void)connection:(id)arg1 challenged:(id)arg2 authCallback:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4 ;
-(void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 waitingWithReason:(long long)arg2 ;
-(void)connection:(id)arg1 _conditionalRequirementsChanged:(char)arg2 ;
-(void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(void)_onqueue_adjustPriorityHint:(float)arg1 ;
-(void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1 ;
-(void)cancel_with_error:(id)arg1 ;
-(void)_askForConnectedSocketLater;
-(id)nsurlError:(int)arg1 ;
-(id)posixError:(int)arg1 ;
-(id)resourceTimeoutError;
-(id)startTimeoutError;
-(void)startResourceTimer;
-(NSURL *)uploadFile;
-(void)setLocalSession:(__NSURLSessionLocal *)arg1 ;
-(unsigned)suspendCount;
-(void)dealloc;
-(NSString *)description;
-(void)setConnection:(id)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(void)setSuspendCount:(unsigned)arg1 ;
@end

