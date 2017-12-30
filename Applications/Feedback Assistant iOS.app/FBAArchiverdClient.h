/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAArchiverdClientProtocol.h>

@protocol FBAArchiverdClientStateDelegate;
@class NSMutableArray, NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface FBAArchiverdClient : NSObject <FBAArchiverdClientProtocol> {

	char _willTick;
	char _waitingOnStateSync;
	char _shouldTellDaemonToSelfTerminate;
	id<FBAArchiverdClientStateDelegate> _clientStateDelegate;
	int _state;
	NSMutableArray* _pendingJobs;
	unsigned _daemonNoResponseCount;
	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* __listenerEndpoint;

}

@property (assign) int state;                                                            //@synthesize state=_state - In the implementation block
@property (retain) NSMutableArray * pendingJobs;                                         //@synthesize pendingJobs=_pendingJobs - In the implementation block
@property (assign) char willTick;                                                        //@synthesize willTick=_willTick - In the implementation block
@property (assign) unsigned daemonNoResponseCount;                                       //@synthesize daemonNoResponseCount=_daemonNoResponseCount - In the implementation block
@property (assign) char waitingOnStateSync;                                              //@synthesize waitingOnStateSync=_waitingOnStateSync - In the implementation block
@property (assign) char shouldTellDaemonToSelfTerminate;                                 //@synthesize shouldTellDaemonToSelfTerminate=_shouldTellDaemonToSelfTerminate - In the implementation block
@property (retain) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (retain) NSXPCListenerEndpoint * _listenerEndpoint;                            //@synthesize _listenerEndpoint=__listenerEndpoint - In the implementation block
@property (__weak) id<FBAArchiverdClientStateDelegate> clientStateDelegate;              //@synthesize clientStateDelegate=_clientStateDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPendingJobs:(NSMutableArray *)arg1 ;
-(void)setWillTick:(char)arg1 ;
-(void)setDaemonNoResponseCount:(unsigned)arg1 ;
-(void)setShouldTellDaemonToSelfTerminate:(char)arg1 ;
-(void)set_listenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSMutableArray *)pendingJobs;
-(void)tick;
-(void)setWaitingOnStateSync:(char)arg1 ;
-(void)pingDaemon;
-(void)sendNextJobIfNeeded;
-(void)finishBackgroundUpdatesIfNeeded;
-(void)tickLater;
-(char)willTick;
-(unsigned)daemonNoResponseCount;
-(char)waitingOnStateSync;
-(id<FBAArchiverdClientStateDelegate>)clientStateDelegate;
-(char)shouldTellDaemonToSelfTerminate;
-(NSXPCListenerEndpoint *)_listenerEndpoint;
-(void)daemonDidFinishDirectoryArchiving:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)daemonDidReceiveJobWithUrl:(id)arg1 ;
-(void)deamonDidFailToReachDirectory:(id)arg1 ;
-(id)initWithServerEndpoint:(id)arg1 ;
-(void)sendCompressingJob:(id)arg1 ;
-(void)syncJobsState;
-(void)finishBackgroundUpdates;
-(void)setClientStateDelegate:(id<FBAArchiverdClientStateDelegate>)arg1 ;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)commonInit;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)pong;
-(void)sync;
-(void)connectToDaemon;
-(void)resetConnection;
-(id)daemonProxy;
-(char)isReady;
@end

