/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress, NSString, NSURL, NSDictionary, ODRTagsRequest;

@interface ODRDownloadRequest : NSObject {

	NSProgress* _progress;
	/*^block*/id _completionBlock;
	/*^block*/id _refreshHandler;
	char _refreshRequested;
	char _isDiscretionary;
	char _isPaused;
	char _streamableZip;
	char _useCachingServer;
	char _verifyCodeSignature;
	char _verifyContent;
	NSString* _applicationBundleID;
	NSString* _destinationPath;
	NSURL* _downloadURL;
	NSDictionary* _hashingData;
	int _size;
	ODRTagsRequest* _tagsRequest;
	NSString* _uuid;
	double _assetOriginationTimestamp;
	long long _downloadIdentifier;
	long long _jobID;
	double _priority;
	double _previousOriginationTimestamp;

}

@property (assign) double previousOriginationTimestamp;              //@synthesize previousOriginationTimestamp=_previousOriginationTimestamp - In the implementation block
@property (readonly) NSString * applicationBundleID;                 //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (readonly) double assetOriginationTimestamp;               //@synthesize assetOriginationTimestamp=_assetOriginationTimestamp - In the implementation block
@property (readonly) NSString * destinationPath;                     //@synthesize destinationPath=_destinationPath - In the implementation block
@property (readonly) long long downloadIdentifier;                   //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (readonly) NSURL * downloadURL;                            //@synthesize downloadURL=_downloadURL - In the implementation block
@property (retain) NSDictionary * hashingData;                       //@synthesize hashingData=_hashingData - In the implementation block
@property (readonly) char hasRefreshHandler; 
@property (assign) char isDiscretionary;                             //@synthesize isDiscretionary=_isDiscretionary - In the implementation block
@property (assign) char isPaused;                                    //@synthesize isPaused=_isPaused - In the implementation block
@property (readonly) long long jobID;                                //@synthesize jobID=_jobID - In the implementation block
@property (assign,nonatomic) double priority;                        //@synthesize priority=_priority - In the implementation block
@property (readonly) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
@property (readonly) int size;                                       //@synthesize size=_size - In the implementation block
@property (readonly) char streamableZip;                             //@synthesize streamableZip=_streamableZip - In the implementation block
@property (retain) ODRTagsRequest * tagsRequest;                     //@synthesize tagsRequest=_tagsRequest - In the implementation block
@property (readonly) char useCachingServer;                          //@synthesize useCachingServer=_useCachingServer - In the implementation block
@property (readonly) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (readonly) char verifyCodeSignature;                       //@synthesize verifyCodeSignature=_verifyCodeSignature - In the implementation block
@property (assign) char verifyContent;                               //@synthesize verifyContent=_verifyContent - In the implementation block
+(id)requestWithUUID:(id)arg1 ;
+(void)initialize;
-(void)didComplete;
-(char)streamableZip;
-(id)initWithURL:(id)arg1 destinationPath:(id)arg2 priority:(double)arg3 streamableZip:(char)arg4 size:(int)arg5 verifyCodeSignature:(char)arg6 useCachingServer:(char)arg7 originationTimestamp:(double)arg8 applicationBundleID:(id)arg9 ;
-(void)setTagsRequest:(ODRTagsRequest *)arg1 ;
-(void)setVerifyContent:(char)arg1 ;
-(void)resubmitWithSourceURL:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 refreshHandler:(/*^block*/id)arg2 ;
-(id)_initWithURL:(id)arg1 destinationPath:(id)arg2 priority:(double)arg3 streamableZip:(char)arg4 size:(int)arg5 verifyCodeSignature:(char)arg6 useCachingServer:(char)arg7 originationTimestamp:(double)arg8 applicationBundleID:(id)arg9 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 refreshHandler:(/*^block*/id)arg2 jobID:(long long)arg3 ;
-(id)initWithURL:(id)arg1 destinationPath:(id)arg2 priority:(double)arg3 streamableZip:(char)arg4 ;
-(char)hasRefreshHandler;
-(double)progressForBytesRead:(long long)arg1 ;
-(void)reportEnhancedParentProgressWithSecondsRemaining:(double)arg1 bytesDownloaded:(unsigned)arg2 ;
-(double)assetOriginationTimestamp;
-(NSDictionary *)hashingData;
-(void)setHashingData:(NSDictionary *)arg1 ;
-(ODRTagsRequest *)tagsRequest;
-(char)useCachingServer;
-(char)verifyCodeSignature;
-(char)verifyContent;
-(double)previousOriginationTimestamp;
-(void)setPreviousOriginationTimestamp:(double)arg1 ;
-(long long)jobID;
-(int)size;
-(void)cancel;
-(id)description;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(NSProgress *)progress;
-(char)refresh;
-(NSString *)uuid;
-(NSString *)applicationBundleID;
-(char)isPaused;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsDiscretionary:(char)arg1 ;
-(long long)downloadIdentifier;
-(void)setIsPaused:(char)arg1 ;
-(NSString *)destinationPath;
-(NSURL *)downloadURL;
-(void)didFailWithError:(id)arg1 ;
-(char)isDiscretionary;
@end

