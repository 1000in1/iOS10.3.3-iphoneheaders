/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/SSURLSessionManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSData, NSString, NSURLCache, AKAppleIDSession, NSMutableData, SSVURLDataConsumer, NSObject, SSMetricsPageEvent, NSMutableSet, NSURL, NSHTTPURLResponse, NSRunLoop, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSURLBag, SSVURLBagInterpreter, NSURLRequest, NSCachedURLResponse;

@interface SSVLoadURLOperation : NSOperation <SSURLSessionManagerDelegate> {

	AKAppleIDSession* _authKitSession;
	NSMutableData* _dataBuffer;
	SSVURLDataConsumer* _dataConsumer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSData* _inputData;
	char _iTunesStoreRequest;
	int _machineDataRetryCount;
	int _machineDataStyle;
	SSMetricsPageEvent* _metricsPageEvent;
	/*^block*/id _outputBlock;
	/*^block*/id _prepareRequestBlock;
	NSMutableSet* _protocolRedirectURLs;
	char _recordsMetrics;
	NSURL* _redirectURL;
	NSString* _referrerApplicationName;
	NSString* _referrerURLString;
	NSHTTPURLResponse* _response;
	NSRunLoop* _runLoop;
	SSVFairPlaySAPSession* _sapSession;
	SSVSAPSignaturePolicy* _sapSignaturePolicy;
	char _shouldRetry;
	NSString* _storeFrontSuffix;
	char _stopped;
	SSURLBag* _urlBag;
	SSVURLBagInterpreter* _urlBagInterpreter;
	NSURLRequest* _urlRequest;

}

@property (assign) int machineDataStyle; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (copy) SSVSAPSignaturePolicy * SAPSignaturePolicy; 
@property (readonly) NSURL * URL; 
@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) NSCachedURLResponse * cachedURLResponse; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (getter=isITunesStoreRequest) char ITunesStoreRequest; 
@property (readonly) SSMetricsPageEvent * metricsPageEvent; 
@property (assign) char recordsMetrics; 
@property (copy) NSString * referrerApplicationName; 
@property (copy) NSString * referrerURLString; 
@property (copy) NSString * storeFrontSuffix; 
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (copy) id expiredOutputBlock; 
@property (copy) id outputBlock; 
@property (copy) id prepareRequestBlock; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char shouldDisableCellular; 
@property (nonatomic,readonly) char shouldRequireCellular; 
@property (nonatomic,readonly) char shouldSetCookies; 
@property (nonatomic,readonly) NSData * sourceAppAuditTokenData; 
@property (nonatomic,readonly) NSString * sourceAppBundleID; 
@property (nonatomic,readonly) NSURLCache * URLCache; 
@property (nonatomic,readonly) NSString * URLCacheID; 
+(id)_sessionManager;
-(char)isITunesStoreRequest;
-(id)_initSSVLoadURLOperation;
-(char)recordsMetrics;
-(int)machineDataStyle;
-(id)_newURLRequestWithRedirectURL:(id)arg1 ;
-(void)_stopRunLoop;
-(void)_finishWithData:(id)arg1 ;
-(void)_createAuthKitSession;
-(void)_runOnce;
-(void)_finishWithOutput:(id)arg1 error:(id)arg2 ;
-(char)_shouldRetryAfterMachineDataRequest:(id)arg1 ;
-(void)_applyResponseToMetrics:(id)arg1 ;
-(id)_outputForData:(id)arg1 error:(id*)arg2 ;
-(void)_releaseOutputBlocks;
-(void)_configureWithURLBagInterpreter:(id)arg1 ;
-(void)_addMachineDataHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2 ;
-(void)_addSAPSignatureToRequest:(id)arg1 ;
-(id)prepareRequestBlock;
-(void)_loadURLBagInterpreter;
-(void)_stopIfCancelled;
-(long)_runRunLoopUntilStopped;
-(void)_keepAliveTimer:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4 ;
-(id)expiredOutputBlock;
-(SSVSAPSignaturePolicy *)SAPSignaturePolicy;
-(void)setExpiredOutputBlock:(id)arg1 ;
-(id)_dataForCachedResponse:(const CFCachedURLResponseRef)arg1 ;
-(id)init;
-(void)cancel;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(NSString *)storeFrontSuffix;
-(void)setPrepareRequestBlock:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(void)setITunesStoreRequest:(char)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(NSHTTPURLResponse *)URLResponse;
-(NSURLRequest *)URLRequest;
-(id)initWithData:(id)arg1 fromOperation:(id)arg2 ;
-(SSVURLDataConsumer *)dataConsumer;
-(void)configureWithURLBag:(id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(id)outputBlock;
-(NSString *)referrerApplicationName;
-(void)setReferrerApplicationName:(NSString *)arg1 ;
-(NSString *)referrerURLString;
-(void)setReferrerURLString:(NSString *)arg1 ;
-(NSCachedURLResponse *)cachedURLResponse;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(void)setRecordsMetrics:(char)arg1 ;
-(void)setMachineDataStyle:(int)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(void)setSAPSignaturePolicy:(SSVSAPSignaturePolicy *)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
@end

