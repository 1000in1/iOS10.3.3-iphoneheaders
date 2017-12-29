/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SBRemoteAlertHostViewControllerDelegate <NSObject>
@required
-(void)remoteAlertWantsToAllowBanners:(char)arg1;
-(void)remoteAlertDidRequestDismissal;
-(void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(int)arg1;
-(void)remoteAlertWantsWallpaperTunnelActive:(char)arg1;
-(void)remoteAlertWantsToSetBackgroundStyle:(int)arg1 withDuration:(double)arg2;
-(void)remoteAlertWantsMenuButtonDismissal:(char)arg1;
-(void)remoteAlertWantsToAllowAlertStacking:(char)arg1;
-(void)remoteAlertWantsToSetDismissalAnimationStyle:(int)arg1;
-(void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1;
-(void)remoteAlertWantsToSetIdleTimerDisabled:(char)arg1 forReason:(id)arg2;
-(void)remoteAlertWantsToSetAutoLockDuration:(double)arg1;
-(void)remoteAlertWantsToSetStatusBarHidden:(char)arg1 withDuration:(double)arg2;
-(void)remoteAlertWantsToDismissOnUILock:(char)arg1;
-(void)remoteAlertWantsToDisableFadeInAnimation:(char)arg1;
-(void)remoteAlertWantsToSetWhitePointAdaptivityStyle:(int)arg1;
-(void)remoteAlertDidTerminateWithError:(id)arg1;

@end
