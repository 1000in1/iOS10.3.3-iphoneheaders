/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLDirectChangeSession.h>
#import <libobjc.A.dylib/CPLPushChangeSessionImplementation.h>

@class NSString, CPLEngineChangePipe;

@interface CPLDirectPushChangeSession : CPLDirectChangeSession <CPLPushChangeSessionImplementation> {

	char _didPushSomeChange;
	NSString* _lastSeenLibraryVersion;
	CPLEngineChangePipe* _pushQueue;
	CPLEngineChangePipe* _deletePushQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)clientWorkDescription;
-(char)_reallyAppendBatchToPushQueues:(id)arg1 error:(id*)arg2 ;
-(char)_appendBatchToPushQueuesAndLookForMemories:(id)arg1 error:(id*)arg2 ;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

