/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceInternal, NSString, NSArray, AVCaptureDeviceFormat;

@interface AVCaptureDevice : NSObject {

	AVCaptureDeviceInternal* _internal;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (getter=isConnected,nonatomic,readonly) char connected; 
@property (nonatomic,readonly) NSArray * formats; 
@property (nonatomic,retain) AVCaptureDeviceFormat * activeFormat; 
@property (assign,nonatomic) SCD_Struct_AV2 activeVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV2 activeVideoMaxFrameDuration; 
+(void)initialize;
+(void)_filterConnectedDevices:(id)arg1 withDeviceTypes:(id)arg2 mediaType:(id)arg3 position:(int)arg4 ;
+(id)_legacyDevicesWithMediaType:(id)arg1 ;
+(void)_filterConnectedLegacyDevices:(id)arg1 ;
+(id)_devicesWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(int)arg3 ;
+(void)_registerOnceForServerConnectionDiedNotification;
+(id)deviceWithUniqueID:(id)arg1 ;
+(id)_devices;
+(void)_reconnectDevices:(id)arg1 ;
+(int)authorizationStatusForMediaType:(id)arg1 ;
+(void)requestAccessForMediaType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)devicesWithMediaType:(id)arg1 ;
+(id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(int)arg3 ;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
+(id)devices;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setContrast:(float)arg1 ;
-(int)position;
-(NSString *)localizedName;
-(void)close;
-(float)contrast;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_AV2)arg1 ;
-(char)isActiveVideoMinFrameDurationSet;
-(void)_checkTCCAccess;
-(char)_startUsingDevice:(id*)arg1 ;
-(void)_stopUsingDevice;
-(char)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(NSString *)modelID;
-(char)isSubjectAreaChangeMonitoringEnabled;
-(CGRect)faceRectangle;
-(int)faceRectangleAngle;
-(char)providesStortorgetMetadata;
-(void)setProvidesStortorgetMetadata:(char)arg1 ;
-(int)deviceSourceOrigin;
-(char)isHighDynamicRangeSceneDetectionEnabled;
-(char)_isHighDynamicRangeScene;
-(void)_setHighDynamicRangeSceneDetectionEnabled:(char)arg1 ;
-(void)_setStillImageStabilizationDetectionEnabled:(char)arg1 ;
-(void)setCachesFigCaptureSourceConfigurationChanges:(char)arg1 ;
-(char)cachesFigCaptureSourceConfigurationChanges;
-(void)_setVideoHDREnabled:(char)arg1 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(char)arg1 ;
-(char)isLensStabilizationSupported;
-(char)isMachineReadableCodeDetectionSupported;
-(char)isInUseByAnotherApplication;
-(char)isActiveVideoMaxFrameDurationSet;
-(OpaqueCMClockRef)deviceClock;
-(char)open:(id*)arg1 ;
-(char)_isFlashScene;
-(char)isFlashSceneDetectedForPhotoOutput;
-(void)_setFlashSceneDetectionEnabled:(char)arg1 ;
-(char)isAutoFocusRangeRestrictionSupported;
-(int)autoFocusRangeRestriction;
-(void)setAutoFocusRangeRestriction:(int)arg1 ;
-(char)isLockingFocusWithCustomLensPositionSupported;
-(float)lensAperture;
-(SCD_Struct_AV2)exposureDuration;
-(float)ISO;
-(float)ISODigitalThreshold;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_AV2)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(float)exposureTargetOffset;
-(int)whiteBalanceMode;
-(char)isAdjustingWhiteBalance;
-(SCD_Struct_AV40)deviceWhiteBalanceGains;
-(SCD_Struct_AV40)grayWorldDeviceWhiteBalanceGains;
-(float)maxWhiteBalanceGain;
-(char)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV40)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGSize)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV40)arg1 ;
-(SCD_Struct_AV40)deviceWhiteBalanceGainsForChromaticityValues:(CGSize)arg1 ;
-(CGSize)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV40)arg1 ;
-(SCD_Struct_AV40)deviceWhiteBalanceGainsForTemperatureAndTintValues:(CGSize)arg1 ;
-(char)automaticallyAdjustsImageControlMode;
-(int)imageControlMode;
-(char)automaticallyAdjustsVideoHDREnabled;
-(char)isVideoHDREnabled;
-(char)isWideColorSupported;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(char)isRampingVideoZoom;
-(float)minAvailableVideoZoomFactor;
-(char)isRawStillImageCaptureSupported;
-(char)isLowLightBoostEnabled;
-(char)automaticallyEnablesLowLightBoostWhenAvailable;
-(int)shallowDepthOfFieldEffectStatus;
-(id)supportedMetadataObjectIdentifiers;
-(char)eyeDetectionEnabled;
-(char)eyeClosedDetectionEnabled;
-(char)smileDetectionEnabled;
-(id)availableBoxedMetadataFormatDescriptions;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(SCD_Struct_AV34)maxH264PhotoDimensions;
-(SCD_Struct_AV34)maxH264VideoDimensions;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(int)minMacroblocksForHighProfileAbove30fps;
-(char)usesQuantizationScalingMatrix_H264_Steep_16_48;
-(void)setBravoCameraSelectionBehavior:(id)arg1 ;
-(char)isConnected;
-(NSString *)uniqueID;
-(char)isOpen;
-(char)isVideoStabilizationSupported;
-(char)hasFlash;
-(char)lockForConfiguration:(id*)arg1 ;
-(char)isFlashModeSupported:(int)arg1 ;
-(void)setFlashMode:(int)arg1 ;
-(void)unlockForConfiguration;
-(char)hasTorch;
-(char)isTorchModeSupported:(int)arg1 ;
-(void)setTorchMode:(int)arg1 ;
-(char)isFocusModeSupported:(int)arg1 ;
-(void)setFocusMode:(int)arg1 ;
-(char)isAutoShallowDepthOfFieldEffectEnabled;
-(void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2 ;
-(void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 ;
-(AVCaptureDeviceFormat *)activeFormat;
-(int)flashMode;
-(char)supportsAVCaptureSessionPreset:(id)arg1 ;
-(id)bravoCameraSelectionBehavior;
-(void)setAutoShallowDepthOfFieldEffectEnabled:(char)arg1 ;
-(int)exposureMode;
-(char)isAdjustingExposure;
-(float)exposureTargetBias;
-(SCD_Struct_AV2)activeVideoMaxFrameDuration;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV2)arg1 ;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV2)arg1 ;
-(float)torchLevel;
-(int)torchMode;
-(char)isFocusPointOfInterestSupported;
-(CGPoint)focusPointOfInterest;
-(int)focusMode;
-(char)isSmoothAutoFocusEnabled;
-(char)isExposurePointOfInterestSupported;
-(CGPoint)exposurePointOfInterest;
-(char)isTorchActive;
-(char)isFlashActive;
-(char)isTorchAvailable;
-(char)isFlashAvailable;
-(float)videoZoomFactor;
-(void)setActiveFormat:(AVCaptureDeviceFormat *)arg1 ;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(char)arg1 ;
-(void)setVideoHDREnabled:(char)arg1 ;
-(int)activeColorSpace;
-(void)setActiveColorSpace:(int)arg1 ;
-(void)setAutomaticallyAdjustsImageControlMode:(char)arg1 ;
-(char)isImageControlModeSupported:(int)arg1 ;
-(void)setImageControlMode:(int)arg1 ;
-(char)isFaceDetectionSupported;
-(char)isFaceDetectionDuringVideoPreviewSupported;
-(char)isFaceDetectionDrivenImageProcessingEnabled;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(char)arg1 ;
-(char)hasMediaType:(id)arg1 ;
-(NSArray *)formats;
-(float)lensPosition;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isSmoothAutoFocusSupported;
-(void)setSubjectAreaChangeMonitoringEnabled:(char)arg1 ;
-(char)isAdjustingFocus;
-(char)isHighDynamicRangeScene;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(char)isExposureModeSupported:(int)arg1 ;
-(void)setExposureMode:(int)arg1 ;
-(char)isEyeDetectionSupported;
-(char)isEyeClosedDetectionSupported;
-(void)setEyeDetectionEnabled:(char)arg1 ;
-(void)setEyeClosedDetectionEnabled:(char)arg1 ;
-(char)isSmileDetectionSupported;
-(void)setSmileDetectionEnabled:(char)arg1 ;
-(char)isLowLightBoostSupported;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(char)arg1 ;
-(char)isHighDynamicRangeSceneDetectionSupported;
-(char)isHDRSupported;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(void)setSmoothAutoFocusEnabled:(char)arg1 ;
-(char)isWhiteBalanceModeSupported:(int)arg1 ;
-(void)setWhiteBalanceMode:(int)arg1 ;
-(char)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(void)setVideoZoomFactor:(float)arg1 ;
-(SCD_Struct_AV2)activeVideoMinFrameDuration;
-(char)isLockedForConfiguration;
-(void)cancelVideoZoomRamp;
-(float)minExposureTargetBias;
-(float)maxExposureTargetBias;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHighDynamicRangeSceneDetectionEnabled:(char)arg1 ;
-(id)deviceType;
@end

