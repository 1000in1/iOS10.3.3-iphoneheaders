/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/FTMessageDeliveryProtocol.h>
#import <libobjc.A.dylib/FTMessageQueueDelegate.h>

@class NSString, NSNumber, IDSBaseMessage, NSArray, FTMessageDelivery, FTMessageQueue;

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate> {

	FTMessageDelivery* _httpDelivery;
	FTMessageDelivery* _apsDelivery;
	FTMessageQueue* _dualModeQueue;
	NSString* _userAgent;
	NSNumber* _protocolVersion;

}

@property (setter=setUserAgent:,nonatomic,copy) NSString * userAgent;                          //@synthesize userAgent=_userAgent - In the implementation block
@property (setter=setProtocolVersion:,nonatomic,copy) NSNumber * protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char hasQueuedItems; 
@property (readonly) char busy; 
@property (assign) char retryInAirplaneMode; 
@property (assign) char logToRegistration; 
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) int maxMessageSize; 
@property (readonly) int maxLargeMessageSize; 
@property (assign) unsigned maxConcurrentMessages; 
-(char)_isInBackoffMode;
-(int)_randomPercentageChanceForDualDelivery;
-(void)dequeueMessageIfNeeded;
-(char)_shouldUseDuelDeliveryForMessage:(id)arg1 ;
-(void)handleTranslationAndDeliveryOnAPS:(id)arg1 ;
-(void)_enterBackOffMode;
-(id)initWithPreferedType:(int)arg1 ;
-(void)invalidate;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setProtocolVersion:(NSNumber *)arg1 ;
-(NSNumber *)protocolVersion;
-(NSArray *)queuedMessages;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(char)sendMessage:(id)arg1 ;
@end
