/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSHashTable, NSMapTable, NSObject, NSMutableDictionary, NSMutableArray, NSURLSession, NSURL, NSString;

@interface TSUDownloadManager : NSObject <NSURLSessionDownloadDelegate> {

	NSOperationQueue* _downloadSessionsQueue;
	NSHashTable* _downloadSessions;
	NSMapTable* _downloadResults;
	NSObject*<OS_dispatch_queue> _activeTasksQueue;
	NSMutableDictionary* _activeTasks;
	NSMutableDictionary* _inProgressDownloadItems;
	NSMutableArray* _inProcessDownloadQueue;
	NSMutableArray* _completionHandlers;
	NSURLSession* _defaultURLSession;

}

@property (nonatomic,readonly) NSURL * downloadInboxDirectory; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerDownloadItemClass:(Class)arg1 ;
+(id)newFilteredDownloadItems:(id)arg1 ;
+(void)wakeUp;
+(id)sharedManager;
-(NSURL *)downloadInboxDirectory;
-(char)beginDownloadTaskForDownloadItem:(id)arg1 isInProcessDownloadTask:(char)arg2 taskDescription:(id)arg3 urlOrNil:(id)arg4 ;
-(id)downloadSessionForItems:(id)arg1 description:(id)arg2 willRequestDownload:(char)arg3 delegate:(id)arg4 taskHandler:(/*^block*/id)arg5 ;
-(id)downloadItems:(id)arg1 description:(id)arg2 delegate:(id)arg3 ;
-(id)outstandingDownloadSessionForItems:(id)arg1 description:(id)arg2 delegate:(id)arg3 ;
-(void)cancelTasksWithDescriptions:(id)arg1 forDownloadSession:(id)arg2 ;
-(void)notifyWhenAllTasksAreCompletedWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(id)initPrivate;
-(void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

