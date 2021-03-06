/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:31 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <companioncamerad/NMSMessageCenterDelegate.h>
#import <companioncamerad/CCCameraServerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NMSMessageCenter, NSXPCListener, NSXPCConnection, NSString;

@interface NCCompanionCamera : NSObject <NMSMessageCenterDelegate, CCCameraServerProtocol, NSXPCListenerDelegate> {

	NMSMessageCenter* _messageCenter;
	NSXPCListener* _cameraListener;
	NSXPCConnection* _activeCamera;
	double _shutterLastPressed;
	char _shouldForceMode;
	int _lastMode;
	unsigned _lastBurstCaptureNumberOfPhotos;
	unsigned _remoteCameraState;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openCamera:(id)arg1 ;
-(void)pressShutter:(id)arg1 ;
-(void)beginBurstCapture:(id)arg1 ;
-(void)endBurstCapture:(id)arg1 ;
-(void)closeCamera:(id)arg1 ;
-(void)beginVideo:(id)arg1 ;
-(void)endVideo:(id)arg1 ;
-(void)cancelCountdown:(id)arg1 ;
-(void)zoom:(id)arg1 ;
-(void)toggleCameraDevice:(id)arg1 ;
-(id)_fetchCurrentCameraState;
-(void)_sendMode:(int)arg1 ;
-(void)_sendCurrentCameraState;
-(void)_sendOpenStateChange:(int)arg1 withInternalState:(id)arg2 ;
-(id)makeRequest:(unsigned short)arg1 ;
-(void)connectionDidTearDown:(id)arg1 ;
-(void)messageCenter:(id)arg1 didChangeConnectedState:(char)arg2 ;
-(id)init;
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)checkin;
-(void)setCameraMode:(id)arg1 ;
-(void)setFlashMode:(id)arg1 ;
-(void)setFocusPoint:(id)arg1 ;
-(void)setIrisMode:(id)arg1 ;
-(void)setHDRMode:(id)arg1 ;
-(void)photoTaken:(id)arg1 ;
-(oneway void)xpc_burstCaptureWillStart;
-(oneway void)xpc_burstCaptureNumberOfPhotosDidChange:(unsigned)arg1 ;
-(oneway void)xpc_burstCaptureDidStop;
-(oneway void)xpc_modeSelected:(int)arg1 ;
-(oneway void)xpc_orientationChanged:(int)arg1 ;
-(oneway void)xpc_countdownCanceled;
-(oneway void)xpc_zoomChanged:(float)arg1 ;
-(oneway void)xpc_captureDeviceDidChange;
-(oneway void)xpc_flashModeDidChange:(int)arg1 ;
-(oneway void)xpc_hdrModeDidChange:(int)arg1 ;
-(oneway void)xpc_irisModeDidChange:(int)arg1 ;
@end

