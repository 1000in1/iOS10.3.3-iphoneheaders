/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSPushHandlerDelegate.h>

@class FTMessageDelivery, NSMutableDictionary, NSMutableArray, NSString;

@interface IDSDeliveryController : NSObject <IDSPushHandlerDelegate> {

	FTMessageDelivery* _messageDelivery;
	NSMutableDictionary* _messageQueue;
	NSMutableArray* _pendingOfflineMessages;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)encryptionController;
-(id)peerIDManager;
-(void)_sendFTMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toID:(id)arg4 toToken:(id)arg5 toSessionToken:(id)arg6 toPeople:(id)arg7 fromIdentity:(id)arg8 completionBlock:(/*^block*/id)arg9 ;
-(id)_keyForURIs:(id)arg1 service:(id)arg2 ;
-(void)_handleMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3 ;
-(void)_checkFastDormancy;
-(int)_maxPayloadSizeForMessage:(id)arg1 ;
-(char)_sendAsAttachmentForMessage:(id)arg1 payloadData:(id)arg2 ;
-(id)_sessionTokensForMessage:(id)arg1 URIs:(id)arg2 service:(id)arg3 ;
-(unsigned)_destinationCountForURIsAndTokens:(id)arg1 ;
-(void)_sendFTFanoutMessage:(id)arg1 service:(id)arg2 fromID:(id)arg3 toPeople:(id)arg4 fromIdentity:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(char)_forceAttachmentForMessage:(id)arg1 ;
-(void)_sendAttachmentWithGuid:(id)arg1 service:(id)arg2 topic:(id)arg3 originalCommand:(id)arg4 additionalDictionary:(id)arg5 encryptedData:(id)arg6 toToken:(id)arg7 toID:(id)arg8 fromID:(id)arg9 fromIdentity:(id)arg10 canUseLargePayload:(char)arg11 ackBlock:(/*^block*/id)arg12 completionBlock:(/*^block*/id)arg13 ;
-(int)_effectiveMaxPayloadSizeIfCanUseLargePayload:(char)arg1 ;
-(void)_processMessageResponse:(id)arg1 error:(id)arg2 resultCode:(int)arg3 toURI:(id)arg4 fromURI:(id)arg5 service:(id)arg6 fromIdentity:(id)arg7 ;
-(id)_tokenURIForToken:(id)arg1 uri:(id)arg2 ;
-(void)_sendMessageDictionary:(id)arg1 lastRetryInterval:(double)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(char)arg5 canUseLargePayload:(char)arg6 sendOnePerToken:(char)arg7 allowPartialSendsToSucceed:(char)arg8 highPriority:(char)arg9 fireAndForget:(char)arg10 expirationDate:(id)arg11 enforceRemoteTimeouts:(char)arg12 messageID:(id)arg13 fromID:(id)arg14 fromIdentity:(id)arg15 toID:(id)arg16 toPeople:(id)arg17 accessToken:(id)arg18 topic:(id)arg19 registrationProperties:(id)arg20 fakeMessage:(char)arg21 alwaysSkipSelf:(char)arg22 ackBlock:(/*^block*/id)arg23 willSendBlock:(/*^block*/id)arg24 sendCompletionBlock:(/*^block*/id)arg25 ;
-(void)sendIDSMessage:(id)arg1 service:(id)arg2 topic:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_queueMessage:(id)arg1 service:(id)arg2 dataToEncrypt:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 originallyToPeople:(id)arg8 canUseLargePayload:(char)arg9 sendOnePerToken:(char)arg10 registrationProperties:(id)arg11 fakeMessage:(char)arg12 alwaysSkipSelf:(char)arg13 willSendBlock:(/*^block*/id)arg14 completionBlock:(/*^block*/id)arg15 ;
-(void)_handleMessagesForURIs:(id)arg1 originalURIs:(id)arg2 service:(id)arg3 ;
-(void)_discardMessage:(id)arg1 forURIs:(id)arg2 service:(id)arg3 ;
-(void)_sendMessage:(id)arg1 dataToEncrypt:(id)arg2 onService:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 toID:(id)arg6 toPeople:(id)arg7 canUseLargePayload:(char)arg8 sendOnePerToken:(char)arg9 allowPartialSendsToSucceed:(char)arg10 registrationProperties:(id)arg11 fakeMessage:(char)arg12 alwaysSkipSelf:(char)arg13 willSendBlock:(/*^block*/id)arg14 completionBlock:(/*^block*/id)arg15 firstAttemptDate:(id)arg16 ;
-(void)_emptyMessagesForURIs:(id)arg1 service:(id)arg2 ;
-(void)_handleAccessoryMessageForID:(id)arg1 msg:(id)arg2 service:(id)arg3 fromID:(id)arg4 fromIdentity:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_sendErrorDictionary:(id)arg1 onService:(id)arg2 fromID:(id)arg3 fromIdentity:(id)arg4 toID:(id)arg5 toToken:(id)arg6 topic:(id)arg7 sendCompletionBlock:(/*^block*/id)arg8 ;
-(void)sendMessageDictionary:(id)arg1 messageID:(id)arg2 dataToEncrypt:(id)arg3 onService:(id)arg4 wantsResponse:(char)arg5 expirationDate:(id)arg6 enforceRemoteTimeouts:(char)arg7 canUseLargePayload:(char)arg8 sendOnePerToken:(char)arg9 allowPartialSendsToSucceed:(char)arg10 priority:(int)arg11 fireAndForget:(char)arg12 fromID:(id)arg13 fromIdentity:(id)arg14 toPeople:(id)arg15 accessToken:(id)arg16 topic:(id)arg17 registrationProperties:(id)arg18 fakeMessage:(char)arg19 alwaysSkipSelf:(char)arg20 ackBlock:(/*^block*/id)arg21 willSendBlock:(/*^block*/id)arg22 sendCompletionBlock:(/*^block*/id)arg23 ;
-(id)init;
-(void)dealloc;
-(void)handler:(id)arg1 isConnectedChanged:(char)arg2 ;
@end

