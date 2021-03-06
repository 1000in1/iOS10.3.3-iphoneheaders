/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:20 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pairedsyncd/PSDSchedulerObserver.h>

@protocol OS_dispatch_queue, PSDSyncInitiatorDelegate;
@class NSObject, PSDResumeContext, NSUUID, NSString;

@interface PSDSyncInitiator : NSObject <PSDSchedulerObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	PSDResumeContext* _resumeContext;
	int _syncAdviceNotifyToken;
	NSUUID* _syncCompletedPairingIdentifier;
	unsigned _state;
	id<PSDSyncInitiatorDelegate> _delegate;

}

@property (assign,nonatomic) unsigned state;                                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<PSDSyncInitiatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSyncInitiator;
-(void)scheduler:(id)arg1 willStartSyncSession:(id)arg2 ;
-(void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2 ;
-(void)scheduler:(id)arg1 didClearSyncSession:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_startSyncIfNeeded;
-(void)startSyncIfNeeded;
-(char)canSync;
-(id)defaultSyncSessionForType:(unsigned)arg1 ;
-(id)activityInfos:(id)arg1 screenedBySyncSessionType:(unsigned)arg2 ;
-(id)sortedActivityInfos:(id)arg1 ;
-(id)syncSessionActivitiesForActivityInfos:(id)arg1 ;
-(char)_hasLastKnownDeviceChanged;
-(char)isSyncAdvised;
-(void)_queue_saveResumeContextWithSyncSession:(id)arg1 ;
-(void)startExternalSyncWithOptions:(id)arg1 ;
-(char)needsSync;
-(id)init;
-(void)setDelegate:(id<PSDSyncInitiatorDelegate>)arg1 ;
-(id<PSDSyncInitiatorDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)resume;
-(int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(unsigned long long)readNotifyToken:(int)arg1 ;
@end

