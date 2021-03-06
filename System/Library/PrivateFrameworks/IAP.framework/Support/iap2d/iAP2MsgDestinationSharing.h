/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class iAP2Connection;

@interface iAP2MsgDestinationSharing : NSObject {

	char _enabled;
	iAP2Connection* _connection;

}

@property (readonly) iAP2Connection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign) char enabled;                               //@synthesize enabled=_enabled - In the implementation block
-(void)shuttingDown;
-(int)sendDesitinationInformationMessageWithParameters:(id)arg1 identifier:(id)arg2 ;
-(char)enabled;
-(void)dealloc;
-(id)description;
-(void)setEnabled:(char)arg1 ;
-(iAP2Connection *)connection;
-(id)initWithConnection:(id)arg1 ;
@end

