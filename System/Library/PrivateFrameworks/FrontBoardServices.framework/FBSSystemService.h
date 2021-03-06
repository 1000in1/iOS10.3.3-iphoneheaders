/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSSystemAppProxy;

@interface FBSSystemService : NSObject {

	FBSSystemAppProxy* _systemAppProxy;

}
+(id)sharedService;
+(id)clientCallbackQueue;
-(void)cleanupClientPort:(unsigned)arg1 ;
-(void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned)arg3 withResult:(/*^block*/id)arg4 ;
-(void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(char)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(char)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)processHandleForApplication:(id)arg1 ;
-(void)deleteAllSnapshotsForApplication:(id)arg1 ;
-(void)dataResetWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(char)arg3 withDescription:(id)arg4 ;
-(void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(char)arg3 withDescription:(id)arg4 ;
-(id)badgeValueForBundleID:(id)arg1 ;
-(id)init;
-(void)openApplication:(id)arg1 options:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(char)isPasscodeLockedOrBlocked;
-(id)systemApplicationBundleIdentifier;
-(void)sendActions:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(unsigned)createClientPort;
-(void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned)arg4 withResult:(/*^block*/id)arg5 ;
-(void)shutdownWithOptions:(id)arg1 ;
-(int)pidForApplication:(id)arg1 ;
-(void)shutdown;
-(void)setBadgeValue:(id)arg1 forBundleID:(id)arg2 ;
-(void)reboot;
-(char)canOpenApplication:(id)arg1 reason:(int*)arg2 ;
@end

