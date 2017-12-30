/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSWorkspaceClientDelegate.h>

@protocol OS_dispatch_queue, FBSWorkspaceDelegate;
@class NSObject, FBSWorkspaceClient, FBSSerialQueue, NSMutableDictionary, NSHashTable, NSArray, NSString;

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBSWorkspaceDelegate> _delegate;
	FBSWorkspaceClient* _client;
	FBSSerialQueue* _callOutQueue;
	NSObject*<OS_dispatch_queue> _scenesQueue;
	NSMutableDictionary* _scenesByIdentifier;
	NSHashTable* _preFenceTriggers;
	char _synchronizingFence;

}

@property (assign,nonatomic) id<FBSWorkspaceDelegate> delegate; 
@property (nonatomic,retain,readonly) FBSSerialQueue * queue;                //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scenes; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performDelegateCallOut:(/*^block*/id)arg1 ;
-(void)clientSystemApplicationTerminated:(id)arg1 ;
-(void)clientBeginTransaction:(id)arg1 ;
-(void)clientEndTransaction:(id)arg1 ;
-(void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)client:(id)arg1 handleActions:(id)arg2 ;
-(Class)_clientClass;
-(char)isUIApplicationWorkspace;
-(id)_sceneWithIdentifier:(id)arg1 ;
-(void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestDestructionOfScene:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<FBSWorkspaceDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBSWorkspaceDelegate>)delegate;
-(char)trackSystemAnimationFence:(id)arg1 ;
-(id)requestSystemAnimationFence;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(char)isTrackingAnySystemAnimationFence;
-(id)initWithQueue:(id)arg1 ;
-(id)initWithSerialQueue:(id)arg1 ;
-(NSArray *)scenes;
-(id)sceneWithIdentifier:(id)arg1 ;
-(FBSSerialQueue *)queue;
-(id)_client;
-(id)_internalQueue;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
@end

