/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofingPlugin/ProofingPlugin-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface PRDNCSession : NSObject {

	NSMutableDictionary* _fullNotName2MessageHandler;
	NSMutableDictionary* _baseMessageName2fullNotNames;
	NSMutableSet* _baseMessageNamesWaitingForReply;

}

@property (nonatomic,readonly) NSMutableDictionary * fullNotName2MessageHandler;                //@synthesize fullNotName2MessageHandler=_fullNotName2MessageHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * baseMessageName2fullNotNames;              //@synthesize baseMessageName2fullNotNames=_baseMessageName2fullNotNames - In the implementation block
@property (nonatomic,readonly) NSMutableSet * baseMessageNamesWaitingForReply;                  //@synthesize baseMessageNamesWaitingForReply=_baseMessageNamesWaitingForReply - In the implementation block
@property (nonatomic,readonly) CFNotificationCenterRef cfNC; 
+(void)setReplyTimeout:(double)arg1 ;
+(void)enableHackForUnitTests;
+(void)setLoggingEnabled:(char)arg1 ;
-(void)_handleReplyTimeout:(id)arg1 ;
-(void)_setHandlerForFullNotificationName:(id)arg1 baseMessageName:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)clearAllHandlers;
-(CFNotificationCenterRef)cfNC;
-(void)sendMessage:(id)arg1 withBoolReply:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 withAckReply:(/*^block*/id)arg2 ;
-(void)setHandlerForMessageName:(id)arg1 acceptedParams:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_cleanupReplyHandlersForBaseName:(id)arg1 ;
-(NSMutableDictionary *)baseMessageName2fullNotNames;
-(NSMutableSet *)baseMessageNamesWaitingForReply;
-(void)sendMessage:(id)arg1 param:(id)arg2 ;
-(NSMutableDictionary *)fullNotName2MessageHandler;
-(void)_restartTimeoutHandlerForMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 acceptedReplies:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)sendMessage:(id)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_handleNotification:(id)arg1 ;
@end
