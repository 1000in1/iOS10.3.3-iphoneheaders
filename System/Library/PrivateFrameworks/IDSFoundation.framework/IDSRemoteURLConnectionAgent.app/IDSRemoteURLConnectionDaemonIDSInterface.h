/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSRemoteURLConnectionAgent.app/IDSRemoteURLConnectionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSRemoteURLConnectionAgent/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSMutableSet, NSString;

@interface IDSRemoteURLConnectionDaemonIDSInterface : NSObject <IDSServiceDelegate> {

	IDSService* _idsService;
	NSMutableDictionary* _messageIDToLoaderUniqueIDMap;
	NSMutableSet* _pendingResponseUniqueIDs;

}

@property (nonatomic,readonly) char isNearby; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)sendIDSMessage:(id)arg1 forLoaderWithUniqueID:(id)arg2 ;
-(void)_handleLoadRequestMessage:(id)arg1 shouldUseSecureCoding:(char)arg2 ;
-(void)_handleLoadRequestResponseMessage:(id)arg1 ;
-(void)_handleCancelMessage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(/*^block*/id)arg3 ;
-(char)isNearby;
@end

