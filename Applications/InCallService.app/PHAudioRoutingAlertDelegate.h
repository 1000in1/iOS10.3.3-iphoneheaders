/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHAudioRoutingAlertDelegate <NSObject>
@optional
-(void)audioRoutingAlertController:(id)arg1 didSelectAction:(id)arg2;
-(void)audioRoutingAlertControllerDidDismiss:(id)arg1;
-(void)audioRoutingAlertController:(id)arg1 didRequestMuteChange:(char)arg2;
-(id)muteActionTitleForAudioRoutingAlertController:(id)arg1;

@required
-(id)hideActionTitleForAudioRoutingAlertController:(id)arg1;

@end
