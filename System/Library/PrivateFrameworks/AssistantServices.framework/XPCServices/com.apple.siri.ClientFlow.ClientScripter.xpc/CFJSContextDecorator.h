/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:20 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/XPCServices/com.apple.siri.ClientFlow.ClientScripter.xpc/com.apple.siri.ClientFlow.ClientScripter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class JSContext, NSURL, JSManagedValue, NSXPCConnection, CFJSExecutionParameters, CFLogQueuer;

@interface CFJSContextDecorator : NSObject {

	char _scriptEvaluated;
	char _classesInjected;
	JSContext* _jsContext;
	NSURL* _scriptURL;
	JSManagedValue* _managedContext;
	JSManagedValue* _managedContextVersion;
	JSManagedValue* _managedExecutionResults;
	NSXPCConnection* _connection;
	CFJSExecutionParameters* _executionParameters;
	CFLogQueuer* _logQueuer;

}

@property (nonatomic,readonly) JSContext * jsContext;                                     //@synthesize jsContext=_jsContext - In the implementation block
@property (assign,getter=isScriptEvaluated,nonatomic) char scriptEvaluated;               //@synthesize scriptEvaluated=_scriptEvaluated - In the implementation block
@property (assign,getter=areClassesInjected,nonatomic) char classesInjected;              //@synthesize classesInjected=_classesInjected - In the implementation block
@property (nonatomic,copy) NSURL * scriptURL;                                             //@synthesize scriptURL=_scriptURL - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedContext;                             //@synthesize managedContext=_managedContext - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedContextVersion;                      //@synthesize managedContextVersion=_managedContextVersion - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedExecutionResults;                    //@synthesize managedExecutionResults=_managedExecutionResults - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) CFJSExecutionParameters * executionParameters;               //@synthesize executionParameters=_executionParameters - In the implementation block
@property (nonatomic,readonly) CFLogQueuer * logQueuer;                                   //@synthesize logQueuer=_logQueuer - In the implementation block
-(char)isScriptEvaluated;
-(id)executeScriptWithArguments:(id)arg1 error:(id*)arg2 ;
-(void)resetJsContext;
-(void)setExecutionParameters:(CFJSExecutionParameters *)arg1 ;
-(void)setManagedContext:(JSManagedValue *)arg1 ;
-(void)setManagedContextVersion:(JSManagedValue *)arg1 ;
-(void)setManagedExecutionResults:(JSManagedValue *)arg1 ;
-(JSManagedValue *)managedExecutionResults;
-(CFJSExecutionParameters *)executionParameters;
-(JSManagedValue *)managedContext;
-(JSManagedValue *)managedContextVersion;
-(void)injectIntentClasses;
-(id)stringFromManagedValue:(id)arg1 ;
-(char)areClassesInjected;
-(void)setClassesInjected:(char)arg1 ;
-(void)setScriptEvaluated:(char)arg1 ;
-(char)readyToExecute;
-(void)addJavaScriptBridges;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSURL *)scriptURL;
-(void)setScriptURL:(NSURL *)arg1 ;
-(id)evaluateScript:(id)arg1 ;
-(JSContext *)jsContext;
-(CFLogQueuer *)logQueuer;
@end

