/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWFigCaptureDeviceClient : NSObject {

	int _clientID;
	int _pid;
	/*^block*/id _deviceAvailabilityChangedHandler;

}

@property (nonatomic,readonly) int clientID;                                     //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                                          //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) id deviceAvailabilityChangedHandler;              //@synthesize deviceAvailabilityChangedHandler=_deviceAvailabilityChangedHandler - In the implementation block
+(id)deviceClientWithPID:(int)arg1 clientIDOut:(int*)arg2 deviceAvailabilityChangedHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithPID:(int)arg1 deviceAvailabilityChangedHandler:(/*^block*/id)arg2 ;
-(id)deviceAvailabilityChangedHandler;
-(int)clientID;
-(int)pid;
@end
