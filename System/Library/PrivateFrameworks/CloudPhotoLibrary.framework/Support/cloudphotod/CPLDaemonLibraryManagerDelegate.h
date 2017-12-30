/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLDaemonLibraryManagerDelegate <NSObject>
@required
-(id)daemonLibraryManager:(id)arg1 engineLibraryWithClientLibraryBaseURL:(id)arg2 cloudLibraryStateStorageURL:(id)arg3 cloudLibraryResourceStorageURL:(id)arg4 libraryIdentifier:(id)arg5 error:(id*)arg6;
-(void)daemonLibraryManagerHasBeenDisconnected:(id)arg1;
-(void)daemonLibraryManagerIsDeactivatingLibrary:(id)arg1;
-(void)startSyncTask;

@end
