/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:20 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/XPCServices/com.apple.siri.ClientFlow.ClientScripter.xpc/com.apple.siri.ClientFlow.ClientScripter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CFScripterProtocol
@required
-(void)performFlowExecutionForCommand:(id)arg1 usingCachedJSContext:(char)arg2 completion:(/*^block*/id)arg3;
-(void)performProviderExecutionForCommand:(id)arg1 usingCachedJSContext:(char)arg2 completion:(/*^block*/id)arg3;
-(void)performWarmupAndEvaluateScriptWithScript:(id)arg1 scriptHint:(id)arg2 usingCachedJSContext:(char)arg3;
-(void)performWarmup;

@end

