/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXIDCSlaveController.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <AXHearingSupport/AXHARemoteUpdateProtocol.h>
#import <AXHearingSupport/AXHARemoteControllerProtocol.h>

@class AXHADispatchTimer, AXRemoteHearingAidDevice, NSString;

@interface AXHearingSlaveController : AXIDCSlaveController <NSNetServiceDelegate, AXHARemoteUpdateProtocol, AXHARemoteControllerProtocol> {

	char didValidateHIID;
	AXHADispatchTimer* _communicationTimer;
	AXRemoteHearingAidDevice* _localDevice;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * localDevice;              //@synthesize localDevice=_localDevice - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char didValidateHIID; 
@property (nonatomic,retain) AXHADispatchTimer * communicationTimer;              //@synthesize communicationTimer=_communicationTimer - In the implementation block
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(double)searchTimeout;
-(char)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 ;
-(void)openConnectionIfNecessary;
-(char)shouldAcceptConnection;
-(void)receivedData:(id)arg1 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)didCommunicate;
-(void)resetConnection;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3 ;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(void)setCommunicationTimer:(AXHADispatchTimer *)arg1 ;
-(void)setDidValidateHIID:(char)arg1 ;
-(AXHADispatchTimer *)communicationTimer;
-(char)didValidateHIID;
-(void)validatePairedAid;
-(void)setLocalDevice:(AXRemoteHearingAidDevice *)arg1 ;
-(id)device;
-(AXRemoteHearingAidDevice *)localDevice;
@end
