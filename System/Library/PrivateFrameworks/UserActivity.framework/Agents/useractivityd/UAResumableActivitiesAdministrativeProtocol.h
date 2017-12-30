/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:53 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UAResumableActivitiesAdministrativeProtocol <NSObject>
@required
-(void)doFindMatchingUserActivityForString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)doCopyAdvertisedUUIDWithCompletionHandler:(/*^block*/id)arg1;
-(void)doCopyEnabledUUIDsWithCompletionHandler:(/*^block*/id)arg1;
-(void)doGetCurrentAdvertisedItemUUID:(/*^block*/id)arg1;
-(void)doCopyDebuggingInfo:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doCopyDynamicUserActivitiesString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doNOP:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)doTerminateServer;
-(void)doSetDebugOption:(id)arg1 value:(id)arg2;
-(void)doInjectBTLE:(id)arg1 type:(unsigned)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7;
-(void)doWillSaveDelegate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doBroadcastPing:(/*^block*/id)arg1;
-(void)startAdvertisingPingWithTimeInterval:(double)arg1;
-(void)stopAdvertisingPing;
-(void)getCurrentPeersAndClear:(char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doCopyAllUUIDsOfType:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)doCopyStatusString:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)doCopyDefaults:(char)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doSetDefaults:(id)arg1 value:(id)arg2;
-(void)doSetupNetworkedPairs:(id)arg1 port:(int)arg2;
-(void)doSetupRendevous:(id)arg1 domain:(id)arg2 activate:(char)arg3;
-(void)doReplayCommands:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doSetLocalPasteboardReflection:(char)arg1;
-(void)doCopySimulatorStatusString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)doSetRemotePasteboardAvalible:(char)arg1;

@end

