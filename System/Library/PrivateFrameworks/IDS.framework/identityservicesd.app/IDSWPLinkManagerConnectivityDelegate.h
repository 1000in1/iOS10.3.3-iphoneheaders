/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSWPLinkManagerConnectivityDelegate <NSObject>
@required
-(void)manager:(id)arg1 cbuuidDidConnect:(id)arg2 isAlwaysConnected:(char)arg3;
-(void)manager:(id)arg1 cbuuidDidDisconnect:(id)arg2;
-(char)manager:(id)arg1 cbuuidDidDiscover:(id)arg2;
-(void)manager:(id)arg1 cbuuidDidFailToConnect:(id)arg2;

@end

