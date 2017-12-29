/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSDictionary, NSArray;

@interface AVCaptureStillImageOutput : AVCaptureOutput {

	AVCaptureStillImageOutputInternal* _internal;

}

@property (nonatomic,copy) NSDictionary * outputSettings; 
@property (nonatomic,readonly) NSArray * availableImageDataCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableImageDataCodecTypes; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) char stillImageStabilizationSupported; 
@property (assign,nonatomic) char automaticallyEnablesStillImageStabilizationWhenAvailable; 
@property (getter=isStillImageStabilizationActive,nonatomic,readonly) char stillImageStabilizationActive; 
@property (assign,getter=isHighResolutionStillImageOutputEnabled,nonatomic) char highResolutionStillImageOutputEnabled; 
@property (getter=isCapturingStillImage,readonly) char capturingStillImage; 
+(void)initialize;
+(CFDictionaryRef)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(unsigned long)maxStillImageJPEGDataSize;
+(id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)arg1 size:(unsigned long)arg2 metadata:(id)arg3 ;
+(id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBufferRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)outputSettings;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(char)squareCropEnabled;
-(unsigned long)shutterSound;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(char)isHighResolutionStillImageOutputEnabled;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(char)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(CGSize)previewImageSize;
-(unsigned long)imageDataFormatType;
-(void)updateSISSupportedForSourceDevice:(id)arg1 ;
-(char)automaticallyEnablesStillImageStabilizationWhenAvailable;
-(void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1 ;
-(void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1 ;
-(NSArray *)availableImageDataCVPixelFormatTypes;
-(NSArray *)availableImageDataCodecTypes;
-(void)clearPreparedBracketIfNeeded;
-(char)isRawCaptureEnabled;
-(char)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
-(char)isRawCaptureSupported;
-(void)setNoiseReductionEnabled:(char)arg1 ;
-(id)_figCaptureStillImageSettingsForConnection:(id)arg1 ;
-(char)isLensStabilizationDuringBracketedCaptureSupported;
-(unsigned)maxBracketedCaptureStillImageCount;
-(char)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id*)arg3 ;
-(id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2 ;
-(char)_preparedForBracketedCaptureWithSettings:(id)arg1 ;
-(char)isLensStabilizationDuringBracketedCaptureEnabled;
-(void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(char*)arg3 ;
-(void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2 ;
-(char)isEV0CaptureEnabled;
-(char)isStillImageStabilizationActive;
-(void)setHighResolutionStillImageOutputEnabled:(char)arg1 ;
-(char)isNoiseReductionEnabled;
-(void)setRawCaptureEnabled:(char)arg1 ;
-(char)suspendsVideoProcessingDuringStillImageCapture;
-(void)setSuspendsVideoProcessingDuringStillImageCapture:(char)arg1 ;
-(char)resumeVideoProcessing;
-(char)isCapturingStillImage;
-(id)firstActiveConnection;
-(void)setLensStabilizationDuringBracketedCaptureEnabled:(char)arg1 ;
-(void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)HDRMode;
-(void)setHDRMode:(int)arg1 ;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(char)isStillImageStabilizationSupported;
-(void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(char)arg1 ;
-(char)isHDRSupported;
-(void)setEV0CaptureEnabled:(char)arg1 ;
-(void)setShutterSound:(unsigned long)arg1 ;
-(void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSquareCropEnabled:(char)arg1 ;
@end
