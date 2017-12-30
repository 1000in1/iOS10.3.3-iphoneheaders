/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:16:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSUUID;


@protocol NWNetworkAgent
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) char active; 
@property (assign,getter=isKernelActivated,nonatomic) char kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) char userActivated; 
@property (assign,getter=isVoluntary,nonatomic) char voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) char specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) char networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) char nexusProvider; 
@optional
-(char)startAgentWithOptions:(id)arg1;
-(char)assertAgentWithOptions:(id)arg1;
-(void)unassertAgentWithOptions:(id)arg1;
-(char)requestNexusWithOptions:(id)arg1;
-(void)closeNexusWithOptions:(id)arg1;
-(char)isSpecificUseOnly;
-(void)setSpecificUseOnly:(char)arg1;
-(char)isNetworkProvider;
-(void)setNetworkProvider:(char)arg1;
-(char)isNexusProvider;
-(void)setNexusProvider:(char)arg1;

@required
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1;
-(char)isActive;
-(void)setActive:(char)arg1;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(id)arg1;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(id)arg1;
-(char)isKernelActivated;
-(void)setKernelActivated:(char)arg1;
-(char)isUserActivated;
-(void)setUserActivated:(char)arg1;
-(char)isVoluntary;
-(void)setVoluntary:(char)arg1;

@end

