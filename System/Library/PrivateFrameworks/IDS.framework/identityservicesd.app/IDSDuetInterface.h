/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, IDSDuetInterfaceDelegate;
#import <identityservicesd/identityservicesd-Structs.h>
@class CDSession, CDAttribute, NSMutableDictionary, NSObject;

@interface IDSDuetInterface : NSObject {

	CDSession* _session;
	CDAttribute* _attribute;
	NSMutableDictionary* _allowedBundleIDs;
	opaque_pthread_mutex_t _allowedBundleIDsLock;
	NSObject*<OS_dispatch_source> _meteringTimer;
	opaque_pthread_mutex_t _initialSyncInProgressLock;
	opaque_pthread_mutex_t _reunionSyncInProgressLock;
	char _initialSyncInProgress;
	char _reunionSyncInProgress;
	id<IDSDuetInterfaceDelegate> _delegate;

}

@property (assign,nonatomic) char initialSyncInProgress;                                //@synthesize initialSyncInProgress=_initialSyncInProgress - In the implementation block
@property (assign,nonatomic) char reunionSyncInProgress;                                //@synthesize reunionSyncInProgress=_reunionSyncInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<IDSDuetInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)_sendMeteringUpdateToDuet;
-(void)_startMeteringTimer;
-(void)_resourceAvailabilityChangedForIdentifiers:(id)arg1 ;
-(void)clearAdmissionCheckCache;
-(id)_localDevice;
-(id)_deviceToSendTo;
-(char)initialSyncInProgress;
-(char)reunionSyncInProgress;
-(id)_newKeyForValues:(id)arg1 priority:(int)arg2 ;
-(void)_checkAvailabilityForValues:(id)arg1 priority:(int)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)setInitialSyncInProgress:(char)arg1 ;
-(void)setReunionSyncInProgress:(char)arg1 ;
-(void)forceCheckAvailabilityForValues:(id)arg1 priority:(int)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)checkAvailabilityForValues:(id)arg1 priority:(int)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(id)init;
-(void)setDelegate:(id<IDSDuetInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSDuetInterfaceDelegate>)delegate;
-(id)_pairedDevice;
@end
