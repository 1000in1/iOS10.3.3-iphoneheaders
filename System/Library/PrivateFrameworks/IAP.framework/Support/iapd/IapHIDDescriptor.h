/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSLock, NSMutableArray;

@interface IapHIDDescriptor : NSObject {

	IOHIDUserDeviceRef _deviceRef;
	IPodTransport* _transport;
	unsigned char _reportIndex;
	NSLock* _outReportsLock;
	NSMutableArray* _outReports;
	char _outReportsReadSinceLastEvent;

}
-(BOOL)handleInReport:(char*)arg1 withLength:(unsigned)arg2 ;
-(BOOL)handleOutReport:(char*)arg1 withLength:(int)arg2 ;
-(void)queueOutReport:(id)arg1 ;
-(id)initWithReportIndex:(unsigned char)arg1 andVID:(unsigned short)arg2 andPID:(unsigned short)arg3 andCountryCode:(unsigned char)arg4 andTransport:(IPodTransport*)arg5 andHIDDescriptor:(id)arg6 ;
-(BOOL)areOutReportsAvailable;
-(id)dequeueOutReport;
-(id)init;
-(void)dealloc;
@end
