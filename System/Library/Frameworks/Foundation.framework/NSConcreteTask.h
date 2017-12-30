/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSTask.h>

@protocol OS_dispatch_semaphore, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSPort;

@interface NSConcreteTask : NSTask {

	NSObject*<OS_dispatch_semaphore> _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/id _terminationHandler;
	NSObject*<OS_dispatch_source> _dsrc;
	NSPort* _tmpPort;
	int _suspendCount;
	int _pid;
	int _platformExitInfo;
	char _hasExeced;
	char _isRunning;
	char _hasPostedDeathNotification;
	char _terminationRun;
	char _qos;

}
-(id)currentDirectoryPath;
-(void)setArguments:(id)arg1 ;
-(void)launchWithDictionary:(id)arg1 ;
-(int)terminationStatus;
-(int)terminationReason;
-(void)launch;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(void)setLaunchPath:(id)arg1 ;
-(void)interrupt;
-(int)suspendCount;
-(id)launchPath;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(void)_setTerminationHandler:(/*^block*/id)arg1 ;
-(void)_withTaskDictionary:(/*^block*/id)arg1 ;
-(int)_platformExitInformation;
-(void)waitUntilExit;
-(void)setPreferredArchitectures:(id)arg1 ;
-(id)preferredArchitectures;
-(void)setTaskDictionary:(id)arg1 ;
-(id)taskDictionary;
-(void)terminateTask;
-(int)_procid;
-(void)setStartsNewProcessGroup:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)environment;
-(char)suspend;
-(char)isRunning;
-(char)resume;
-(void)setEnvironment:(id)arg1 ;
-(void)setQualityOfService:(int)arg1 ;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(int)processIdentifier;
-(/*^block*/id)terminationHandler;
-(int)qualityOfService;
-(id)arguments;
-(void)terminate;
@end

