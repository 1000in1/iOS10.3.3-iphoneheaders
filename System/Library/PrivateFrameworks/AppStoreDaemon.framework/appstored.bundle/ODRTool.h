/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, NSObject, NSLock, ODRiTunesStoreDaemonClient, NSMutableDictionary;

@interface ODRTool : NSObject {

	NSMutableSet* _bundleIDs;
	NSMutableSet* _dirtyProgress;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSLock* _lock;
	ODRiTunesStoreDaemonClient* _ondemandProxy;
	NSMutableDictionary* _progress;
	NSObject*<OS_dispatch_source> _progressTimer;

}
+(id)sharedInstance;
-(void)_startProgressTimer;
-(void)_commitProgressTimer;
-(char)hasInitialODRAssetsForDownloadID:(long long)arg1 ;
-(void)startODRDownloadForBundleID:(id)arg1 downloadID:(long long)arg2 jobID:(long long)arg3 ;
-(char)isODRRunningForBundleID:(id)arg1 ;
-(id)_mediaAssetsForDownloadID:(long long)arg1 ;
-(void)_beginWithBundleID:(id)arg1 ;
-(unsigned)_appDownloadReasonForDownload:(id)arg1 proxy:(id)arg2 ;
-(id)_createProgressForBundleID:(id)arg1 usingDownload:(id)arg2 ;
-(void)_finishODRDownloadForBundleID:(id)arg1 ;
-(void)_markDirtyProgress:(id)arg1 ;
-(void)_endWithBundleID:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

