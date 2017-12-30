/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASPolicyPreflighterDelegate;
@class ASAccount, ASPolicy, NSString, ASTaskManager;

@interface ASPolicyPreflighter : NSObject {

	char _invalidated;
	ASAccount* _account;
	id<ASPolicyPreflighterDelegate> _delegate;
	id _contextInfo;
	ASPolicy* _policy;
	ASPolicy* _acknowledgedPolicy;
	NSString* _originalKey;
	ASTaskManager* _taskManager;

}

@property (assign,nonatomic,__weak) ASAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ASPolicy * policy;                                            //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) ASPolicy * acknowledgedPolicy;                                //@synthesize acknowledgedPolicy=_acknowledgedPolicy - In the implementation block
@property (nonatomic,copy) NSString * originalKey;                                         //@synthesize originalKey=_originalKey - In the implementation block
@property (nonatomic,retain) ASTaskManager * taskManager;                                  //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic) char invalidated;                                             //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyPreflighterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id contextInfo;                                        //@synthesize contextInfo=_contextInfo - In the implementation block
-(void)invalidate;
-(void)setDelegate:(id<ASPolicyPreflighterDelegate>)arg1 ;
-(void)dealloc;
-(id<ASPolicyPreflighterDelegate>)delegate;
-(ASPolicy *)policy;
-(void)setPolicy:(ASPolicy *)arg1 ;
-(ASTaskManager *)taskManager;
-(void)setTaskManager:(ASTaskManager *)arg1 ;
-(void)setOriginalKey:(NSString *)arg1 ;
-(ASPolicy *)acknowledgedPolicy;
-(NSString *)originalKey;
-(void)setAcknowledgedPolicy:(ASPolicy *)arg1 ;
-(id)initWithAccount:(id)arg1 policyKey:(id)arg2 ;
-(id)_originalKey;
-(void)provisionTask:(id)arg1 failedWithError:(id)arg2 ;
-(void)provisionTask:(id)arg1 wipeRequested:(char)arg2 accountOnlyRipeRequested:(char)arg3 policies:(id)arg4 status:(int)arg5 ;
-(void)startPreflight;
-(void)acknowledgePolicyCompliance;
-(void)acknowledgeIntentionToRemoteWipe;
-(void)acknowledgeAccountOnlyRemoteWipeWithSuccess:(char)arg1 ;
-(void)cancelPendingPreflightRequest;
-(ASAccount *)account;
-(void)setAccount:(ASAccount *)arg1 ;
-(id)contextInfo;
-(void)setContextInfo:(id)arg1 ;
-(char)invalidated;
-(void)setInvalidated:(char)arg1 ;
@end
