/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4009.appex/Diagnostic-4009
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class OSDCaptureDevice, OSDCaptureStream;


@protocol _OSDCameraInterface <NSObject>
@property (nonatomic,retain) OSDCaptureDevice * captureDevice; 
@property (nonatomic,retain) OSDCaptureStream * captureStream; 
@required
-(BOOL)enableAgileClocking:(BOOL)arg1 error:(id*)arg2;
-(id)useMaxAvailableDataRate:(id*)arg1;
-(BOOL)startStreamingWithOptions:(unsigned)arg1 error:(id*)arg2;
-(BOOL)stopStreaming:(id*)arg1;
-(BOOL)getDeviceAndStreams:(id*)arg1;
-(void)doneWithDeviceAndStreams;
-(unsigned)streamingOptions;
-(id)errorCountForType:(unsigned)arg1 error:(id*)arg2;
-(BOOL)setFrameRate:(id)arg1 error:(id*)arg2;
-(BOOL)setFormatIndex:(id)arg1 error:(id*)arg2;
-(id)supportedFormats:(id*)arg1;
-(void)setCaptureStream:(id)arg1;
-(BOOL)isActive;
-(id)frameCount;
-(BOOL)isStreaming;
-(OSDCaptureStream *)captureStream;
-(id)formatIndex;
-(void)setPreviewLayer:(id)arg1;
-(void)setFrameHandler:(/*^block*/id)arg1;
-(id)name:(id*)arg1;
-(void)setCaptureDevice:(id)arg1;
-(OSDCaptureDevice *)captureDevice;

@end

