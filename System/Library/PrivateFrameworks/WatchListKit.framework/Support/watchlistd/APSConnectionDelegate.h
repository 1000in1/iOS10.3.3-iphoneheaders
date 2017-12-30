/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/Support/watchlistd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol APSConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
-(void)connection:(id)arg1 didChangeConnectedStatus:(char)arg2;
-(void)connectionDidReconnect:(id)arg1;

@required
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

@end

