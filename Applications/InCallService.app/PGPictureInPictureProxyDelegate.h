/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPictureInPictureProxyDelegate <NSObject>
@optional
-(CGRect*)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(int)arg2;
-(void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(int)arg2;
-(void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(int)arg2 error:(id)arg3;
-(void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2;
-(void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(int)arg2 reason:(int)arg3;
-(void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(int)arg2 reason:(int)arg3;
-(void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
-(void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;

@end

