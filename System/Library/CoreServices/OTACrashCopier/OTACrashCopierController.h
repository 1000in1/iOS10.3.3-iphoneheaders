/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class OTAConditionMonitor, OTAXPCServer, OTALogSubmissionOperation, NSDictionary, NSTimer, NSString, NSObject, NSURLSession;

@interface OTACrashCopierController : NSObject <NSURLSessionDelegate> {

	OTAConditionMonitor* _conditionMonitor;
	OTAXPCServer* _xpcServer;
	OTALogSubmissionOperation* _submitter;
	NSDictionary* _commandTable;
	NSTimer* _idleTimer;
	void* _powerAssertion;
	double _powerAssertionTimeout;
	id _crashReporterKey;
	id _systemID;
	id _automatedDeviceGroup;
	id _automatedContextURL;
	id _seedGroup;
	NSString* _email;
	NSObject*<OS_dispatch_queue> _requestQueue;
	int _outstandingRequestCount;
	char _noAutoSubmission;
	char _debugFailedSubmission;
	NSURLSession* _session;
	char _scheduleOnExit;
	char _pairProxiedLogs;
	char _share_with_app_devs;
	char _multi_user_mode;
	NSString* _pairedGizmoOS;
	NSString* _lastOSTasked;
	unsigned _submissionCap;

}

@property (nonatomic,retain) NSTimer * idleTimer;                                 //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,retain) OTAConditionMonitor * conditionMonitor;              //@synthesize conditionMonitor=_conditionMonitor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConditionMonitor:(id)arg1 ;
-(void)setConditionMonitor:(OTAConditionMonitor *)arg1 ;
-(void)_readDefaults;
-(id)findEmail;
-(void)_setupXPCServer;
-(void)_setupScheduler;
-(void)_setupNotificationHandler;
-(void)_setupBetaCrashHandler;
-(void)_setupWatchDog;
-(void)_restartIdleTimer;
-(void)scheduleSubmissionFor:(int)arg1 ;
-(id)configSubmission;
-(void)_idleTimerFired:(id)arg1 ;
-(void)exitWithStatus:(int)arg1 ;
-(void)_handleSubmissionPreferenceChanged;
-(char)_submitLogsWithOverride:(char)arg1 ;
-(id)configureRouting:(int)arg1 forCadence:(int)arg2 withExtensions:(id)arg3 ;
-(char)_processSubmissionJobs:(id)arg1 usingParams:(id)arg2 withPath:(id)arg3 ;
-(void)_handleTriggerIfFavorableRequest:(id)arg1 ;
-(void)_handleBetaTriggerRequest:(id)arg1 ;
-(void)_handleTriggerRequest:(id)arg1 ;
-(void)_handleSubmitPathsWithIdentifierRequest:(id)arg1 ;
-(OTAConditionMonitor *)conditionMonitor;
-(id)init;
-(void)dealloc;
-(void)handleRequest:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
@end

