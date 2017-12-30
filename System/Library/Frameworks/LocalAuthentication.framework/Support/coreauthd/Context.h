/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <coreauthd/LAContextServerSideProt.h>
#import <coreauthd/LAContextExternalizationObserverProt.h>

@protocol OS_os_transaction;
@class NSMutableDictionary, ContextPlugin, NSObject, NSData;

@interface Context : NSObject <LAContextServerSideProt, LAContextExternalizationObserverProt> {

	NSMutableDictionary* _serverProperties;
	ContextPlugin* _plugin;
	char _wasExternalized;
	NSObject*<OS_os_transaction> _transaction;
	int _processId;
	unsigned _userId;
	int _auditSessionId;

}

@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) NSData * externalizedContext; 
@property (nonatomic,readonly) char wasExternalized;                                  //@synthesize wasExternalized=_wasExternalized - In the implementation block
@property (nonatomic,readonly) int processId;                                         //@synthesize processId=_processId - In the implementation block
@property (nonatomic,readonly) unsigned userId;                                       //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) int auditSessionId;                                    //@synthesize auditSessionId=_auditSessionId - In the implementation block
+(void)managedContextWithExternalizedContext:(id)arg1 processId:(int)arg2 userId:(unsigned)arg3 auditSessionId:(int)arg4 invalidationBlock:(/*^block*/id)arg5 reply:(/*^block*/id)arg6 ;
-(int)auditSessionId;
-(void)externalizationConsumed;
-(id)initWithPlugin:(id)arg1 auditSessionId:(int)arg2 userId:(unsigned)arg3 ;
-(id)_updateServerPropertiesWithOptions:(id)arg1 ;
-(id)_serverPropertyOrExceptionForOption:(int)arg1 ;
-(id)_serverPropertyForOption:(int)arg1 error:(id*)arg2 ;
-(char)canExternalizeContext:(int)arg1 userId:(unsigned)arg2 auditSessionId:(int)arg3 ;
-(char)wasExternalized;
-(unsigned)userId;
-(NSObject*<OS_os_transaction>)transaction;
-(void)externalizedContextWithReply:(/*^block*/id)arg1 ;
-(void)serverPropertyForOption:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)setServerPropertyForOption:(int)arg1 value:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)contextWasExternalized:(id)arg1 ;
-(int)processId;
-(void)evaluatePolicy:(int)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)isCredentialSet:(int)arg1 originator:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setCredential:(id)arg1 type:(int)arg2 originator:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)checkCredentialSatisfied:(int)arg1 policy:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetWithOriginator:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSData *)externalizedContext;
-(void)setCredential:(id)arg1 forProcessedEvent:(int)arg2 credentialType:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)failProcessedEvent:(int)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

