/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class iAP2Connection, NSData;

@interface iAP2MsgBTPairing : NSObject {

	iAP2Connection* _pkConn;
	NSData* _pBTPairTypesSupp;
	NSData* _pBTPairUUID;
	unsigned char _btPairType;
	BOOL _bUpdateStarted;
	BOOL _bUpdateRadio;
	BOOL _bUpdatePairInfo;
	BOOL _bCurStateRadioOn;
	unsigned char _curStatePairState;
	BOOL _bCurPairingModeOn;

}
+(BOOL)postiAP2NotificationType:(id)arg1 notifyDict:(id)arg2 ;
-(void)shuttingDown;
-(id)accessoryPairingUUID;
-(id)accessoryPairingTypes;
-(int)deviceStartBLEUpdatesForPairType:(unsigned char)arg1 BTRadio:(BOOL)arg2 BTPairInfo:(BOOL)arg3 ;
-(int)deviceUpdateBTRadio:(BOOL)arg1 BTPairStatus:(unsigned char)arg2 BTPairModeOn:(BOOL)arg3 forceUpdates:(BOOL)arg4 ;
-(int)devicePairingData:(id)arg1 ;
-(int)deviceUpdatePairInfo:(id)arg1 ;
-(int)deviceStopBLEUpdates;
-(void)dealloc;
-(id)description;
-(id)initWithConnection:(id)arg1 ;
@end

