/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVRoutingControllerDelegate <NSObject>
@optional
-(void)routingControllerAvailableRoutesDidChange:(id)arg1;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
-(void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;

@end
