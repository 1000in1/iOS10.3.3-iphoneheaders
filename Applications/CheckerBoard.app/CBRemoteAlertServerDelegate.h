/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBRemoteAlertServerDelegate <NSObject>
@required
-(void)server:(id)arg1 createAlert:(id)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4;
-(void)server:(id)arg1 receiveResponseFromAlertWithIdentifier:(id)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4;

@end

