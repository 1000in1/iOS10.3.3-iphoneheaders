/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Agent.h>

@class Agent, NSRecursiveLock, AgentSupervisor, NSString;

@interface AgentRef : NSObject <Agent> {

	Agent* _agent;
	NSRecursiveLock* _lock;
	long long _PID;
	AgentSupervisor* _supervisor;

}

@property (nonatomic,__weak,readonly) Agent * agent; 
@property (nonatomic,__weak,readonly) AgentSupervisor * supervisor;              //@synthesize supervisor=_supervisor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referenceWithPID:(long long)arg1 supervisor:(id)arg2 ;
+(id)referenceWithAgent:(id)arg1 supervisor:(id)arg2 ;
-(long long)PID;
-(id)_agent;
-(AgentSupervisor *)supervisor;
-(char)isEqualToAgentRef:(id)arg1 ;
-(id)_initWithPID:(long long)arg1 supervisor:(id)arg2 ;
-(id)_initWithAgent:(id)arg1 supervisor:(id)arg2 ;
-(void)_setAgent:(id)arg1 ;
-(void)_accessAgentUsingBlock:(/*^block*/id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)currentState;
-(id)progress;
-(Agent *)agent;
-(id)reference;
@end
