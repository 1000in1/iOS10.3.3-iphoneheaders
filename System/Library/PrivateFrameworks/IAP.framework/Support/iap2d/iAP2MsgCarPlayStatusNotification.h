/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class iAP2Connection;

@interface iAP2MsgCarPlayStatusNotification : NSObject {

	iAP2Connection* _pConnection;

}

@property (readonly) iAP2Connection * pConnection;              //@synthesize pConnection=_pConnection - In the implementation block
-(void)shuttingDown;
-(iAP2Connection *)pConnection;
-(void)carPlayStatusChangedNotificationHandler:(id)arg1 ;
-(int)sendCarPlayStatusNotification;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 ;
@end
