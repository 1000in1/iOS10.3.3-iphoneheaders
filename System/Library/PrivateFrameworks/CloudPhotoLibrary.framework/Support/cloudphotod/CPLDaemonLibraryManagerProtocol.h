/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLDaemonLibraryManagerProtocol <CPLDaemonLibraryManagerMinimalProtocol>
@required
-(void)deleteResources:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginPushSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginPullSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)finalizeSessionWithCompletionHandler:(/*^block*/id)arg1;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getChangeBatchWithCompletionHandler:(/*^block*/id)arg1;

@end

