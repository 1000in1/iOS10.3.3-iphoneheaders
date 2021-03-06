/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWNetworkAgent.h>

@class NSString, NSUUID;

@interface VCNetworkAgent : NSObject <NWNetworkAgent> {

	char active;
	char kernelActivated;
	char userActivated;
	char voluntary;
	char specificUseOnly;
	NSString* agentDescription;
	NSUUID* agentUUID;

}

@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) char active; 
@property (assign,getter=isKernelActivated,nonatomic) char kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) char userActivated; 
@property (assign,getter=isVoluntary,nonatomic) char voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) char specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) char networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) char nexusProvider; 
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isActive;
-(void)setActive:(char)arg1 ;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(NSUUID *)arg1 ;
-(char)isKernelActivated;
-(void)setKernelActivated:(char)arg1 ;
-(char)isUserActivated;
-(void)setUserActivated:(char)arg1 ;
-(char)isVoluntary;
-(void)setVoluntary:(char)arg1 ;
-(char)isSpecificUseOnly;
-(void)setSpecificUseOnly:(char)arg1 ;
@end

