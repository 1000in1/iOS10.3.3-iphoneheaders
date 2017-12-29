/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <Feedback Assistant iOS/ADSpringBoardDelegate.h>
#import <Feedback Assistant iOS/AchiverdProtocol.h>

@class NSXPCConnection, NSURL, NSXPCListener, ADSpringBoard, NSOperationQueue, NSString;

@interface ArchiverDaemon : NSObject <NSXPCListenerDelegate, ADSpringBoardDelegate, AchiverdProtocol> {

	char _clientWaitingOnDaemon;
	NSXPCConnection* _connection;
	NSURL* _jobsDirectory;
	NSURL* _clientDirectory;
	NSXPCListener* _listener;
	ADSpringBoard* _springboard;
	NSOperationQueue* _archivingQueue;

}

@property (retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (retain) NSURL * jobsDirectory;                           //@synthesize jobsDirectory=_jobsDirectory - In the implementation block
@property (retain) NSURL * clientDirectory;                         //@synthesize clientDirectory=_clientDirectory - In the implementation block
@property (assign) char clientWaitingOnDaemon;                      //@synthesize clientWaitingOnDaemon=_clientWaitingOnDaemon - In the implementation block
@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (retain) ADSpringBoard * springboard;                     //@synthesize springboard=_springboard - In the implementation block
@property (retain) NSOperationQueue * archivingQueue;               //@synthesize archivingQueue=_archivingQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstanceWithListener:(id)arg1 ;
-(void)fetchJobStatesWithCompletion:(/*^block*/id)arg1 ;
-(void)archiveDirectory:(id)arg1 ;
-(void)clientDidFinishBackgroundUpdates;
-(void)setClientDirectory:(NSURL *)arg1 ;
-(NSOperationQueue *)archivingQueue;
-(void)setArchivingQueue:(NSOperationQueue *)arg1 ;
-(NSURL *)clientDirectory;
-(NSURL *)jobsDirectory;
-(void)setJobsDirectory:(NSURL *)arg1 ;
-(void)createJobsDirectoryIfNeeded;
-(void)setSpringboard:(ADSpringBoard *)arg1 ;
-(id)initWithListener:(id)arg1 clientDirectory:(id)arg2 ;
-(void)runNextJobIfAnyOnMain;
-(void)setClientWaitingOnDaemon:(char)arg1 ;
-(void)enqueueArchivalJob:(id)arg1 ;
-(id)actualUrlForJobUrl:(id)arg1 ;
-(char)validateConnection:(id)arg1 ;
-(void)runNextJobIfAny;
-(char)isKeepingClientRunning;
-(char)clientWaitingOnDaemon;
-(id)actuallyArchiveDirectory:(id)arg1 ;
-(id)jobUrlForDirectory:(id)arg1 ;
-(char)removeUrlFromJobsDirectory:(id)arg1 ;
-(void)finishArchivingDirectory:(id)arg1 output:(id)arg2 ;
-(void)compressDirectory:(id)arg1 ;
-(char)canSelfTerminate;
-(char)addUrlToJobsDirectory:(id)arg1 ;
-(void)clientWasTerminatedAfterBackgroundLaunch;
-(void)didOpenClient;
-(void)failedToOpenClientWithError:(id)arg1 ;
-(void)start;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)ping;
-(double)timeout;
-(ADSpringBoard *)springboard;
-(id)clientProxy;
-(id)store;
@end
