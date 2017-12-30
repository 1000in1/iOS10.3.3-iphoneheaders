/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSPushHandlerDelegate.h>

@class NSMutableArray, NSData, NSString;

@interface IDSRegistrationPushHandler : NSObject <IDSPushHandlerDelegate> {

	NSMutableArray* _handlers;
	char _registeredForPush;
	char _isListening;

}

@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) char registered; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
-(void)dealloc;
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2 ;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)_pushTopics;
-(id)copyHandlersForEnumerating;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(NSData *)pushToken;
-(char)registered;
-(void)setRegistered:(char)arg1 ;
@end

