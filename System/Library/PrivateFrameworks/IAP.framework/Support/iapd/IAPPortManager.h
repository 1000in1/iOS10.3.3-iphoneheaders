/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSNumber;

@interface IAPPortManager : NSObject {

	unsigned _service;
	IONotificationPortRef _notificationPortRef;
	unsigned _notification;
	NSNumber* _portNumber;
	int _accessoryPowerState;
	char _supportsUltraHighPowerMode;
	char _supportsPowerModeOnAcrossSleep;
	unsigned short _reserveCurrentForAccInMa;
	char _sendReserveCurrentNotification;

}

@property (nonatomic,readonly) unsigned service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSNumber * portNumber;                                 //@synthesize portNumber=_portNumber - In the implementation block
@property (nonatomic,readonly) char supportsUltraHighPowerMode; 
@property (nonatomic,readonly) char supportsPowerModeOnAcrossSleep; 
@property (assign,nonatomic) int accessoryPowerState;                                 //@synthesize accessoryPowerState=_accessoryPowerState - In the implementation block
@property (assign,nonatomic) char accessoryPowerModeOnDuringSleep; 
@property (assign,nonatomic) unsigned short availableCurrentFromAccInMa; 
@property (assign,nonatomic) unsigned short reserveCurrentForAccInMa; 
@property (assign,nonatomic) unsigned short maxInputCurrentFromAccInMa; 
@property (assign,nonatomic) char internalBatteryChargingState; 
@property (assign,nonatomic) char sendReserveCurrentNotification;                     //@synthesize sendReserveCurrentNotification=_sendReserveCurrentNotification - In the implementation block
-(id)initWithService:(unsigned)arg1 andNotificationPort:(IONotificationPortRef)arg2 ;
-(char)supportsUltraHighPowerMode;
-(char)supportsPowerModeOnAcrossSleep;
-(void)setAccessoryPowerModeOnDuringSleep:(char)arg1 ;
-(char)accessoryPowerModeOnDuringSleep;
-(unsigned)ultraHighPowerModeCurrentLimit;
-(void)setAvailableCurrentFromAccInMa:(unsigned short)arg1 ;
-(unsigned short)availableCurrentFromAccInMa;
-(void)restoreAvailableCurrentFromAcc;
-(void)setReserveCurrentForAccInMa:(unsigned short)arg1 ;
-(unsigned short)reserveCurrentForAccInMa;
-(void)setInternalBatteryChargingState:(char)arg1 ;
-(char)internalBatteryChargingState;
-(void)setMaxInputCurrentFromAccInMa:(unsigned short)arg1 ;
-(unsigned short)maxInputCurrentFromAccInMa;
-(BOOL)isDeviceInLowPowerMode;
-(char)sendReserveCurrentNotification;
-(void)setSendReserveCurrentNotification:(char)arg1 ;
-(void)dealloc;
-(NSNumber *)portNumber;
-(BOOL)isLowPowerModeSupported;
-(void)setAccessoryPowerState:(int)arg1 ;
-(int)accessoryPowerState;
-(unsigned)service;
@end

