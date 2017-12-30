/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@class iAP2Connection, NSMutableDictionary;

@interface iAP2MsgUSBHostMode : NSObject {

	iAP2Connection* _pkConnection;
	IONotificationPortRef _ioNotifyPortMaster;
	CFRunLoopSourceRef _ioAccMgrRunLoopSrc;
	int _ioAccUsbConnType;
	unsigned _ioAccNotification;
	unsigned _ioAccService;
	NSMutableDictionary* _usbFaultStates;
	NSMutableDictionary* _usbFaultStatesSent;
	NSMutableDictionary* _requestedUSBFaultNotifications;
	IONotificationPortRef _ioUSBCardReaderNotifyPort;
	unsigned _ioUSBCardReaderNotification;
	unsigned _ioUSBCardReaderService;
	unsigned _ioUSBCardReaderMatchIterator;
	unsigned _ioUSBCardReaderTerminateIterator;
	IONotificationPortRef _ioIOResourceNotifyPort;
	unsigned _ioIOResourceNotification;
	unsigned _ioIOResourceService;
	unsigned _ioIOResourceMatchIterator;
	unsigned _ioIOResourceTerminateIterator;
	unsigned _uid;
	IONotificationPortRef _ioUSB30XHCIRemovablePortNotifyPort;
	unsigned _ioUSB30XHCIRemovablePortNotification;
	unsigned _ioUSB30XHCIRemovablePortService;
	unsigned _ioUSB30XHCIRemovablePortMatchIterator;
	unsigned _ioUSB30XHCIRemovablePortTerminateIterator;

}
-(int)sendUSBModeNotification;
-(void)addFaultNotification:(int)arg1 ;
-(int)startUSBHostMode;
-(int)stopUSBHostMode;
-(void)initIOResourceNotifications;
-(void)initUSB30XHCIRemovablePortNotifications;
-(void)initFaultConditionNotifications;
-(void)cleanupUSB30XHCIRemovablePortNotifications;
-(BOOL)usbHostModeFromConnectType:(int)arg1 ;
-(void)setFaultState:(int)arg1 flag:(BOOL)arg2 ;
-(void)shuttingDown;
-(BOOL)getFaultState:(int)arg1 ;
-(void)checkUSBCardReaderProperty:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithConnection:(id)arg1 ;
@end

