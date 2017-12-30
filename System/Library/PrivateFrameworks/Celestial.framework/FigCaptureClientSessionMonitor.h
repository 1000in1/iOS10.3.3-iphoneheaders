/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigCaptureDisplayLayoutObserver.h>

@class NSString, FigCaptureDisplayLayoutMonitor;

@interface FigCaptureClientSessionMonitor : NSObject <FigCaptureDisplayLayoutObserver> {

	/*^block*/id _applicationAndLayoutStateHandler;
	/*^block*/id _interruptionHandler;
	opaqueCMSessionRef _session;
	int _pid;
	NSString* _applicationID;
	char _clientCanInheritApplicationState;
	int _pidToInheritAppStateFrom;
	NSString* _cachedApplicationIDToInheritAppStateFrom;
	OpaqueFigSimpleMutexRef _stateChangeLock;
	OpaqueFigSimpleMutexRef _sessionLock;
	int _applicationState;
	int _messagesApplicationState;
	int _resolvedMessagesExtensionApplicationState;
	int _layoutState;
	id _applicationStateChangeNotificationToken;
	id _interruptionStateChangeNotificationToken;
	char _invalid;
	char _haveExternalCMSession;
	int _clientType;
	FigCaptureDisplayLayoutMonitor* _displayLayoutMonitor;

}

@property (nonatomic,readonly) opaqueCMSessionRef session;              //@synthesize session=_session - In the implementation block
@property (readonly) NSString * applicationID; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)startPrewarmingMonitor;
+(id)_stringForApplicationState:(int)arg1 ;
+(id)_stringForClientType:(int)arg1 ;
+(id)_stringForClientLayoutState:(int)arg1 ;
+(id)_stringForBKSApplicationState:(unsigned)arg1 ;
+(void)stopPrewarmingMonitor;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(long)observeSession:(opaqueCMSessionRef)arg1 ;
-(id)initWithPID:(int)arg1 applicationAndLayoutStateHandler:(/*^block*/id)arg2 interruptionHandler:(/*^block*/id)arg3 ;
-(void)_copyClientType:(int*)arg1 applicationID:(id*)arg2 ;
-(long)_createAndObserveCMSession;
-(void)_deregisterAndReleaseCMSession;
-(long)_registerCMSessionForObservation;
-(id)_logString;
-(void)_handleCMSessionManagerNofification:(id)arg1 ;
-(long)_updateApplicationState;
-(void)_resolveMessagesExtensionApplicationStateAndNotifyIfChanged;
-(void)_handleApplicationStateChange:(unsigned)arg1 ;
-(void)_handleAudioInterruptionChange:(int)arg1 ;
-(id)_resolveApplicationID;
-(void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 layoutState:(int)arg3 ;
-(opaqueCMSessionRef)session;
-(NSString *)applicationID;
@end

