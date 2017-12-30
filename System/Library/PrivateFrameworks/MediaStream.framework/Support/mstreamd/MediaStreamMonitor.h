/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:10 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mstreamd/MSMediaStreamDaemonDelegate.h>
#import <mstreamd/MSAlbumSharingDaemonDelegate.h>

@class NSTimer, MSIOSMediaStreamDaemon, MSIOSAlbumSharingDaemon, NSString;

@interface MediaStreamMonitor : NSObject <MSMediaStreamDaemonDelegate, MSAlbumSharingDaemonDelegate> {

	NSTimer* _idleTimer;
	char _lastNotifiedState;
	NSTimer* _idleStateNotificationTimer;
	MSIOSMediaStreamDaemon* _daemon;
	MSIOSAlbumSharingDaemon* _albumSharingDaemon;
	int _busyCount;
	NSTimer* _photoStreamDaemonPokeTimer;
	NSTimer* _albumSharingDaemonPokeTimer;

}

@property (assign,nonatomic,__weak) MSIOSMediaStreamDaemon * daemon;                           //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic,__weak) MSIOSAlbumSharingDaemon * albumSharingDaemon;              //@synthesize albumSharingDaemon=_albumSharingDaemon - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mstreamdIdleTimerDidFire:(id)arg1 ;
-(id)_dormantTimerWithSelector:(SEL)arg1 ;
-(void)idleStateNotificationTimerDidFire:(id)arg1 ;
-(void)photoStreamDaemonPokeTimerDidFire:(id)arg1 ;
-(void)albumSharingDaemonPokeTimerDidFire:(id)arg1 ;
-(void)_didIdle;
-(void)_startIdleTimerWithInterval:(double)arg1 ;
-(void)_didUnidle;
-(id)_scheduleNextBTAJobNextActivityDate:(id)arg1 jobName:(const char*)arg2 serviceName:(id)arg3 createJobBlock:(/*^block*/id)arg4 ;
-(void)MSAlbumSharingDaemonDidUnidleMomentarily:(id)arg1 ;
-(void)doNothingTimer:(id)arg1 ;
-(void)setAlbumSharingDaemon:(MSIOSAlbumSharingDaemon *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_stopIdleTimer;
-(void)mediaStreamDaemonDidIdle:(id)arg1 ;
-(void)mediaStreamDaemonDidUnidle:(id)arg1 ;
-(void)MSAlbumSharingDaemonDidIdle:(id)arg1 ;
-(void)MSAlbumSharingDaemonDidUnidle:(id)arg1 ;
-(void)_resetIdleTimer;
-(MSIOSAlbumSharingDaemon *)albumSharingDaemon;
-(MSIOSMediaStreamDaemon *)daemon;
-(void)setDaemon:(MSIOSMediaStreamDaemon *)arg1 ;
@end

