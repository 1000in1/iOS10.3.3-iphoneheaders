/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Auditable.h>
#import <appstored/Agent.h>

@protocol Agent <NSObject>
@required
-(long long)PID;
-(id)currentState;
-(id)progress;
-(id)agent;
-(id)reference;

@end


@protocol OS_dispatch_queue, OS_os_transaction;
@class NSString, NSObject, AgentQueue, NSRecursiveLock, AgentShutdownAssertion, AgentSupervisor, DaemonDatabase;

@interface Agent : NSObject <Auditable, Agent> {

	NSString* _currentState;
	long long _PID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	AgentQueue* _agentQueue;
	NSRecursiveLock* _lock;
	AgentShutdownAssertion* _shutdownAssertion;
	char _suspended;
	NSObject*<OS_os_transaction> _transaction;
	AgentSupervisor* _supervisor;

}

@property (nonatomic,readonly) NSString * currentState; 
@property (nonatomic,readonly) DaemonDatabase * database; 
@property (nonatomic,readonly) AgentSupervisor * supervisor;              //@synthesize supervisor=_supervisor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)agentStateClassForState:(id)arg1 ;
-(id)auditDescription;
-(long long)PID;
-(id)initWithPID:(long long)arg1 initialState:(id)arg2 supervisor:(id)arg3 ;
-(void)_revokeShutdownAssertion;
-(char)_setCurrentStateWithContext:(id)arg1 ;
-(id)_handleLeaveState:(id)arg1 ;
-(id)_handleEnterState:(id)arg1 ;
-(char)isEqualToAgent:(id)arg1 ;
-(Class)_agentStateClassForState:(id)arg1 ;
-(void)transitionWithContext:(id)arg1 ;
-(AgentSupervisor *)supervisor;
-(void)becomeInactive;
-(void)synchronizeCurrentState;
-(void)shutdownWithAssertion:(id)arg1 ;
-(void)_applyShutdownAssertion:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)currentState;
-(void)resume;
-(id)progress;
-(void)addOperation:(id)arg1 ;
-(void)transitionToState:(id)arg1 ;
-(id)_handleMessage:(id)arg1 ;
-(DaemonDatabase *)database;
-(void)becomeActive;
-(id)agent;
-(void)_initialize;
-(void)handleMessage:(id)arg1 ;
-(id)reference;
@end

