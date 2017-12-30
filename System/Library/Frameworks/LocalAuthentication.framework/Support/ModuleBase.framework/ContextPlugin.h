/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LAContextExternalizationProt.h>
#import <libobjc.A.dylib/LAContextServerEvaluationProt.h>

@class NSMutableDictionary, NSDictionary, LACachedExternalizedContext;

@interface ContextPlugin : NSObject <LAContextExternalizationProt, LAContextServerEvaluationProt> {

	NSMutableDictionary* _internalOperationOptions;
	char _contextOwner;
	NSDictionary* _resultInfo;
	LACachedExternalizedContext* _cachedExternalizedContext;

}

@property (nonatomic,readonly) char contextOwner;                                                    //@synthesize contextOwner=_contextOwner - In the implementation block
@property (nonatomic,retain) NSDictionary * resultInfo;                                              //@synthesize resultInfo=_resultInfo - In the implementation block
@property (nonatomic,readonly) LACachedExternalizedContext * cachedExternalizedContext;              //@synthesize cachedExternalizedContext=_cachedExternalizedContext - In the implementation block
+(void)pluginWithExternalizedContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(id)externalizationObserver;
-(void)setExternalizationObserver:(id)arg1 ;
-(NSDictionary *)resultInfo;
-(void)setResultInfo:(NSDictionary *)arg1 ;
-(id)createInternalInfo:(id)arg1 skipCallerIdentification:(char)arg2 callerBundleId:(id)arg3 originator:(id)arg4 ;
-(void)evaluatePolicy:(int)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)isCredentialSet:(int)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 type:(int)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)checkCredentialSatisfied:(int)arg1 policy:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetWithOriginator:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithContextOwner:(char)arg1 ;
-(id)createInternalInfoWithPolicy:(int)arg1 policyOptions:(id)arg2 originator:(id)arg3 ;
-(void)performOp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(char)contextOwner;
-(LACachedExternalizedContext *)cachedExternalizedContext;
-(id)externalizedContext;
@end

