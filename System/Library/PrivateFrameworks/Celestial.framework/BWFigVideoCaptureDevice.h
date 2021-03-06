/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWCaptureDevice.h>
#import <libobjc.A.dylib/BWZoomCompletionDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSArray, BWFigVideoCaptureStream, NSString, NSObject, BWRamp, BWStillImageCaptureSettings, FigStateMachine, NSMutableArray, BWZoomCommandHandler, BWDeviceMotionActivityDetector;

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate> {

	OpaqueFigCaptureDeviceRef _device;
	OpaqueCMClockRef _clock;
	int _deviceReleaseBehavior;
	int _clientPID;
	NSDictionary* _moduleInfoByPortType;
	NSDictionary* _sensorIDDictionaryByPortType;
	NSMutableDictionary* _cameraInfoByPortType;
	NSArray* _activePortTypes;
	NSDictionary* _supportedProperties;
	OpaqueFigCaptureStreamRef _stream;
	BWFigVideoCaptureStream* _captureStream;
	CFStringRef _portType;
	int _position;
	NSDictionary* _attributes;
	char _usingMultipleStreamOutputs;
	NSString* _nonLocalizedName;
	BWFigVideoCaptureStream* _telephotoCaptureStream;
	NSObject*<OS_dispatch_semaphore> _synchronizedStreamsStartStopSemaphore;
	char _synchronizationSourceHasBeenStarted;
	char _synchronizationSlaveHasBeenStarted;
	NSDictionary* _synchronizedStreamsAlignmentInfo;
	NSString* _telephotoNonLocalizedName;
	BWFigVideoCaptureStream* _currentMasterCaptureStream;
	int _currentMasterCaptureStreamLock;
	int _synchronizedStreamsSwitchOverLock;
	char _synchronizedStreamsSwitchOverLockCamera;
	char _synchronizedStreamsSwitchOverUnlockCamera;
	char _synchronizedStreamsSwitchOverLockCameraWhenFocusScanCompletes;
	char _synchronizedStreamsSwitchOverResetChangeMonitors;
	char _synchronizedStreamsSwitchOverIgnoreFocusStatusOnce;
	int _synchronizedStreamsSwitchOverNewCameraSelectionBehavior;
	char _synchronizedStreamsSwitchOverInProgress;
	float _synchronizedStreamsSwitchOverPreviousZoomFactor;
	int _synchronizedStreamsSwitchOverNumberOfFramesWaitingForSlaveToFocus;
	float _synchronizedStreamsSwitchOverMasterInitialFocusDistance;
	char _synchronizedStreamsSwitchOverMasterFocusChangeThresholdExceeded;
	int _synchronizedStreamsSwitchOverMasterInitialLuxLevel;
	char _synchronizedStreamsSwitchOverMasterLuxLevelChangeThresholdExceeded;
	char _synchronizedStreamsAEStableAfterStartStreaming;
	char _synchronizedStreamsSwitchOverCameraLocked;
	char _synchronizedStreamsSwitchOverCameraLockedOnTele;
	int _synchronizedStreamsCameraSelectionBehavior;
	int _synchronizedStreamsWideToTeleFocusDistance;
	int _synchronizedStreamsTeleToWideFocusDistance;
	float _synchronizedStreamsSwitchOverTotalGainHysteresisLag;
	float _synchronizedStreamsTeleMaxAEGain;
	float _synchronizedStreamsStereoFusionLowerBoundZoomFactor;
	float _synchronizedStreamsStereoFusionUpperBoundZoomFactor;
	int _synchronizedStreamsNominalSlaveFrameRate;
	int _synchronizedStreamsNominalMasterToSlaveFrameRateRatio;
	int _synchronizedStreamsElevatedSlaveFrameRate;
	float _synchronizedStreamsElevatedSlaveFrameRateLowerBoundZoomFactor;
	float _synchronizedStreamsElevatedSlaveFrameRateUpperBoundZoomFactor;
	int _synchronizedStreamsElevatedMasterToSlaveFrameRateRatio;
	float _synchronizedStreamsMinimumFocusDistanceChangeForAutoSwitchOver;
	float _synchronizedStreamsMinimumLuxLevelChangeForAutoSwitchOver;
	char _stereoFusionEnabled;
	int _parallaxMitigationStrengthLock;
	float _parallaxMitigationStrength;
	int _parallaxMitigationRampDuration;
	int _parallaxMitigationRampShape;
	BWRamp* _parallaxMitigationRamp;
	char _shallowDepthOfFieldEffectEnabled;
	int _sdofLock;
	int _sdofEffectStatus;
	float _sdofBackgroundShiftSumFiltered;
	float _sdofInvalidShiftRatioFiltered;
	char _sdofOneShotFocusInProgress;
	char _sdofFocusLocked;
	int _sdofNumFramesSinceFocusLocked;
	char _sdofFocusStableAfterStartStreaming;
	char _sdofFocusAdjusting;
	int _sdofLastFocusingMethod;
	int _sdofNumFramesSinceFocusBecameStable;
	char _sdofAEStableAfterStartStreaming;
	int _sdofNumFramesSinceAEBecameStable;
	char _sdofSceneMonitoringEnabled;
	char _sdofUsingMasterSlaveAF;
	char _sdofAlwaysCaptureSDOFPlusOriginal;
	char _sdofUseFocusPositionInsteadOfFocusDistance;
	char _sdofSubjectTooCloseMonitoringEnabled;
	char _sdofSubjectIsTooClose;
	float _sdofSubjectTooCloseWideFocusDistanceThreshold;
	float _sdofSubjectTooCloseWideFocusDistanceHysteresisLag;
	int _sdofSubjectTooCloseWideFocusPositionThreshold;
	int _sdofSubjectTooCloseWideFocusPositionHysteresisLag;
	int _sdofSubjectTooCloseLastWideFocusPosition;
	char _sdofSubjectTooFarMonitoringEnabled;
	char _sdofSubjectTooFarDistanceThresholdReached;
	float _sdofSubjectTooFarFocusDistanceThreshold;
	float _sdofSubjectTooFarFocusDistanceHysteresisLag;
	int _sdofSubjectTooFarFocusPositionThreshold;
	int _sdofSubjectTooFarFocusPositionHysteresisLag;
	int _sdofSubjectTooFarFocusPositionInfinityThreshold;
	char _sdofSubjectTooFarUseTeleForFocusDistance;
	char _sdofSubjectTooFarBackgroundShiftSumIsTooLow;
	int _sdofSubjectTooFarBackgroundShiftTooLowNumFrames;
	float _sdofSubjectTooFarBackgroundShiftSumTooLowThreshold;
	float _sdofSubjectTooFarBackgroundShiftSumTooLowHysteresisLag;
	float _sdofSubjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
	float _sdofSubjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
	int _sdofSubjectTooFarLastTeleFocusPosition;
	char _sdofSceneTooDarkMonitoringEnabled;
	char _sdofSceneIsTooDark;
	char _sdofSceneTooDarkExposureThresholdReached;
	float _sdofSceneTooDarkGainThreshold;
	float _sdofSceneTooDarkGainHysteresisLag;
	float _sdofSceneTooDarkInvalidShiftRatioThreshold;
	float _sdofSceneTooDarkInvalidShiftRatioHysteresisLag;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _focusAndExposureUpdateQueue;
	OpaqueFigFlatDictionaryKeySpecRef _metadataKeySpec;
	char _attachMetadataFlatDictionary;
	/*function pointer*/void* _createAutofocusSampleBufferProcessorFunction;
	NSObject*<OS_dispatch_queue> _autofocusProcessorQueue;
	NSMutableDictionary* _autofocusCachedPropertiesDictionary;
	OpaqueFigSimpleMutexRef _autofocusStatusMutex;
	OpaqueFigSampleBufferProcessorRef _autofocusProcessor;
	char _allowAEStableNotifications;
	char _aeStable;
	SCD_Struct_BW2 _aeRequestTime;
	int _aeRequestCount;
	int _aeFrameWaitCount;
	char _allowAWBStableNotifications;
	char _awbStable;
	CGRect _cachedFocusRect;
	CGRect _cachedExposureRect;
	char _useAutoImageControlMode;
	int _autoImageControlMode;
	int _currentImageControlMode;
	int _frameStatisticsLock;
	SCD_Struct_BW76 _currentFrameStatistics;
	char _stillImageCaptureNowAfterAutofocusTimeoutSupported;
	int _stillImageContrastBasedAutofocusTimeout;
	int _stillImagePhaseDetectionAutofocusTimeout;
	char _hasFlash;
	char _supportsHDR;
	char _supportsSIS;
	char _hasNightMode;
	float _autoFlashNormalizedSNRThreshold;
	double _stillImageStabilizationIntegrationTimeThreshold;
	double _synchronizedStreamsStillImageStabilizationTeleIntegrationTimeThreshold;
	double _synchronizedStreamsOISSISStereoFusionTeleMinIntegrationTime;
	float _synchronizedStreamsOISSISStereoFusionTeleMinGain;
	OpaqueFigSimpleMutexRef _torchLock;
	char _autoTorchEnabled;
	char _autoTorchStatsCheckedForVideoRecording;
	char _torchActive;
	float _torchLevel;
	float _maxTorchLevel;
	char _autoFlashEnabled;
	char _flashScene;
	char _hdrSceneDetectionEnabled;
	char _hdrScene;
	char _stillImageStabilizationAutomaticallyEnabled;
	char _stillImageStabilizationScene;
	char _forcePostingForSceneDetectionNotifications;
	int _lowLightBoostLock;
	char _lowLightBoostSupportedForFormat;
	char _lowLightBoostActive;
	char _stillImageCaptureEnabled;
	char _quadraHighResStillImageCaptureEnabled;
	float _quadraLowLightResampledNormalizedSNRThreshold;
	NSObject*<OS_dispatch_queue> _stillImageDispatchQueue;
	int _numberOfCompletedStillCaptures;
	char _stillImageISPChromaNoiseReductionEnabled;
	int _skippedFramesCountForStillImageCaptureRetry;
	int _maxSkippedFramesForStillImageCaptureRetry;
	int _stillImageCaptureStateLock;
	BWStillImageCaptureSettings* _stillImageCaptureSettings;
	NSDictionary* _stillImageCaptureNowOptions;
	NSDictionary* _stillImageCaptureStreamProperties;
	char _retryCaptureStillImageNow;
	FigStateMachine* _stillImageCaptureStateMachine;
	/*^block*/id _prepareToCaptureStillImageNowCompletionHandler;
	int _currentManualFocusCompletedID;
	int _currentManualExposureCompletedID;
	int _currentBiasedExposureCompletedID;
	int _currentManualWhiteBalanceCompletedID;
	NSMutableDictionary* _observedProperties;
	OpaqueFigSimpleMutexRef _manualPropertyMutex;
	float _lensPosition;
	SCD_Struct_BW2 _exposureDuration;
	float _ISO;
	float _exposureTargetBias;
	float _exposureTargetOffset;
	SCD_Struct_Fi52 _deviceWhiteBalanceGains;
	SCD_Struct_Fi52 _grayWorldWhiteBalanceGains;
	NSObject*<OS_dispatch_queue> _whiteBalanceGainsQueue;
	NSMutableDictionary* _whiteBalanceGains;
	NSMutableArray* _whiteBalanceGainsOrderedKeys;
	int _whiteBalanceModeForExif;
	BWZoomCommandHandler* _zoomCommandHandler;
	float _maxISPZoomFactor;
	float _newISPZoomFactor;
	SCD_Struct_BW12 _ispOutputDimensions;
	SCD_Struct_BW12 _maxISPCropDimensions;
	SCD_Struct_BW12 _lastISPCropDimensions;
	CGSize _overscanPercentage;
	float _lastRequestedZoomFactor;
	int _zoomFactorLock;
	float _rampDefaultBravoSnapDistanceFraction;
	char _feature1Enabled;
	NSObject*<OS_dispatch_queue> _feature1ProcessorQueue;
	OpaqueFigSampleBufferProcessorRef _feature1Processor;
	BWDeviceMotionActivityDetector* _deviceMotionActivityDetector;
	int _cameraModeForGyroCalibration;
	char _automaticStillImageDegradedSphereModeEnabled;
	float _motionDataBiasErrorEstimateThresholdDegraded;
	float _motionDataBiasErrorEstimateThresholdAbandon;

}

@property (readonly) NSDictionary * moduleInfoByPortType; 
@property (readonly) NSDictionary * sensorIDDictionaryByPortType; 
@property (readonly) NSDictionary * cameraInfoByPortTypeForSBPs; 
@property (readonly) NSArray * activePortTypes; 
@property (readonly) NSDictionary * cameraTuningParametersDictionary; 
@property (assign,nonatomic) int deviceReleaseBehavior;                            //@synthesize deviceReleaseBehavior=_deviceReleaseBehavior - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)unregisterCallbacksForClient:(int)arg1 ;
+(CFStringRef)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1 ;
-(void)dealloc;
-(int)position;
-(long)captureStillImageNowWithSettings:(id)arg1 ;
-(void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2 ;
-(char)isPropertyObserved:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 synchronizedStreamsAttributes:(id)arg2 forPID:(int)arg3 clientIDOut:(int*)arg4 deviceAvailabilityChangedHandler:(/*^block*/id)arg5 ;
-(id)supportedFormats;
-(float)minimumFrameRate;
-(void)setMinimumFrameRate:(float)arg1 ;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(NSDictionary *)cameraTuningParametersDictionary;
-(id)cameraAlignmentInfo;
-(NSDictionary *)moduleInfoByPortType;
-(NSDictionary *)sensorIDDictionaryByPortType;
-(NSDictionary *)cameraInfoByPortTypeForSBPs;
-(NSArray *)activePortTypes;
-(void)registerForAEMatrixMetadata;
-(void)unregisterForAEMatrixMetadata;
-(void)startupFaceDetectionIfNeeded;
-(void)drainNotifications;
-(void)disposeFigCaptureDevice;
-(char)stillImageCaptureEnabled;
-(void)setStillImageCaptureEnabled:(char)arg1 ;
-(id)stillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(SCD_Struct_BW76*)arg2 deliverOriginalImage:(char)arg3 deliverSushiRaw:(char)arg4 includePreBracketedEV0ForProcessing:(char)arg5 clientBracketSettings:(id)arg6 stereoFusionMode:(int)arg7 ;
-(long)setFocusModeAutoWithRect:(CGRect)arg1 continuous:(char)arg2 smooth:(char)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5 ;
-(long)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2 ;
-(long)setExposureModeAutoWithRect:(CGRect)arg1 ;
-(long)_updateExposureRectIfNeededForZoomFactor:(float)arg1 ;
-(long)setExposureModeLocked;
-(long)setExposureTargetBias:(float)arg1 requestID:(int)arg2 ;
-(long)setExposureModeCustomWithExposureDuration:(SCD_Struct_BW2)arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5 ;
-(long)_attachMetadataFlatDictionaryToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)autoImageControlMode;
-(long)setAutoImageControlMode:(int)arg1 ;
-(long)setWhiteBalanceModeAuto;
-(long)setWhiteBalanceModeLockedWithGains:(SCD_Struct_Fi52)arg1 requestID:(int)arg2 ;
-(long)setFaceDetectionDrivenImageProcessingMode:(int)arg1 ;
-(long)setTorchLevel:(float)arg1 ;
-(long)setAutomaticallyAdjustsTorch:(char)arg1 ;
-(void)setMaxTorchLevel:(float)arg1 ;
-(char)setAutoFlashEnabled:(char)arg1 error:(id*)arg2 ;
-(id)zoomCommandHandler;
-(void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 commandID:(int)arg5 ;
-(void)setISPZoomFactor:(float)arg1 ;
-(void)setOverscanPercentage:(CGSize)arg1 ;
-(void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(char)arg3 rampCommandID:(int)arg4 ;
-(void)setProperty:(id)arg1 isObserved:(char)arg2 ;
-(char)setHDRSceneDetectionEnabled:(char)arg1 error:(id*)arg2 ;
-(long)setLowLightBoostAutomaticallyEnabled:(char)arg1 supportedForFormat:(char)arg2 ;
-(int)resolveStillImageCaptureTypeFromStatistics:(SCD_Struct_BW76*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 autoShallowDepthOfFieldEffectEnabled:(char)arg5 clientBracketMode:(int)arg6 ;
-(id)telephotoCaptureStream;
-(id)captureStream;
-(void)setStereoFusionEnabled:(char)arg1 ;
-(char)quadraHighResStillImageCaptureEnabled;
-(OpaqueFigCaptureISPProcessingSessionRef)newISPProcessingSessionWithType:(int)arg1 ;
-(void)setShallowDepthOfFieldEffectEnabled:(char)arg1 ;
-(char)isStillImageISPChromaNoiseReductionEnabled;
-(char)supportsProperty:(CFStringRef)arg1 ;
-(void)setCameraModeForGyroCalibration:(int)arg1 ;
-(void)setStillImageISPChromaNoiseReductionEnabled:(char)arg1 ;
-(void)captureStreamDidChangeActiveFormatIndex:(id)arg1 ;
-(void)captureStreamWillStartStreaming:(id)arg1 ;
-(void)captureStreamDidStartStreaming:(id)arg1 ;
-(void)captureStreamWillStopStreaming:(id)arg1 ;
-(void)captureStreamDidStopStreaming:(id)arg1 ;
-(void)captureStream:(id)arg1 willEmitVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)captureStream:(id)arg1 willEmitVideoPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)captureStream:(id)arg1 willDiscardVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)captureStream:(id)arg1 willEmitStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromTimeMachine:(char)arg3 ;
-(void)captureStreamDidCompleteStillImageCapture:(id)arg1 ;
-(float)maximumAllowedFrameRate;
-(float)minimumAllowedFrameRate;
-(void)prepareToCaptureStillImageNow:(/*^block*/id)arg1 ;
-(void)getCurrentVideoFrameStatistics:(SCD_Struct_BW76*)arg1 ;
-(long)setAlternateOutputSizeAndCrop:(id)arg1 ;
-(float)parallaxMitigationStrength;
-(void)setDeviceReleaseBehavior:(int)arg1 ;
-(void)setAutoFocusSensorCalibrationData:(id)arg1 ;
-(void)setStillImageStabilizationSceneDetectionEnabled:(char)arg1 ;
-(void)updateSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 ;
-(id)_initWithFigCaptureDeviceRef:(OpaqueFigCaptureDeviceRef)arg1 attributes:(id)arg2 synchronizedStreamsAttributes:(id)arg3 forPID:(int)arg4 createAutofocusSampleBufferProcessorFunction:(/*function pointer*/void*)arg5 ;
-(id)_sensorIDDictionaryFromCameraTuningParametersForStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_updateImageControlModeStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateExposureStateForAutofocusProperty:(CFStringRef)arg1 ;
-(void)_updateWhiteBalanceStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateFaceDetectionStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(long)_copyAutofocusProcessorPropertyInternal:(CFStringRef)arg1 propertyValueOut:(void*)arg2 ;
-(long)_setAutofocusProcessorPropertyInternal:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateBravoSwitchOverStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_updateSDOFFocusStateForAutofocusProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(void)_deviceWillStartStreaming;
-(void)_updateSDOFEffectStatus:(int)arg1 ;
-(void)_deviceDidStopStreaming;
-(void)_addExifWhiteBalanceMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addLensMakersFocusDistanceMetadata:(opaqueCMSampleBufferRef)arg1 captureStream:(id)arg2 ;
-(void)_serviceZoomForSampleBuffer:(opaqueCMSampleBufferRef)arg1 updateISPZoom:(char)arg2 ;
-(void)_serviceSynchronizedStreamsWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 fromCaptureStream:(id)arg2 frameStatistics:(SCD_Struct_BW76*)arg3 ;
-(void)_serviceSDOFSceneMonitoringWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 frameStatistics:(SCD_Struct_BW76*)arg2 ;
-(void)_serviceRetryStillImageCaptureUsingFrameStatistics:(SCD_Struct_BW76*)arg1 ;
-(void)_addCoreMediaMetadataAttachmentsToStillImageSampleBuffer:(opaqueCMSampleBufferRef)arg1 fromTimeMachine:(char)arg2 ;
-(void)_resetStillImageCaptureRequestState;
-(void)_updateZoomCapabilitiesForActiveFormatIndex:(int)arg1 ;
-(long)_setupAutofocusSampleBufferProcessor;
-(void)_setupStillImageCaptureStateMachine;
-(long)_setupFeature1SampleBufferProcessor;
-(void)_setISPZoomFactorSynchronously:(float)arg1 ;
-(void)_serviceLowLightBoostActiveNotification:(opaqueCMSampleBufferRef)arg1 ;
-(void)_postNotificationWithName:(id)arg1 payloadNewPropertyValue:(id)arg2 ;
-(void)_teardownAutoFocusSampleBufferProcessor;
-(void)_teardownFeature1SampleBufferProcessor;
-(void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4 ;
-(id)_bravoStillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(SCD_Struct_BW76*)arg2 deliverOriginalImage:(char)arg3 includePreBracketedEV0ForProcessing:(char)arg4 clientBracketSettings:(id)arg5 stereoFusionMode:(int)arg6 ;
-(id)_stillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(SCD_Struct_BW76*)arg2 deliverOriginalImage:(char)arg3 deliverSushiRaw:(char)arg4 includePreBracketedEV0ForProcessing:(char)arg5 clientBracketSettings:(id)arg6 ;
-(void)_captureStillImageNowWithSettings:(id)arg1 ;
-(void)_stillImageCaptureStateMachineDidTransitionToInProgress;
-(int)_stillImageSceneTypeForFrameStatistics:(SCD_Struct_BW76*)arg1 flashSceneDetectionEnabled:(char)arg2 hdrSceneDetectionEnabled:(char)arg3 sisSceneDetectionEnabled:(char)arg4 ;
-(int)_bravoCameraForOISOrSISCaptureType:(int)arg1 stereoFusionMode:(int)arg2 frameStatistics:(SCD_Struct_BW76*)arg3 zoomFactor:(float)arg4 stereoFusionLowerBoundZoomFactor:(float)arg5 stereoFusionUpperBoundZoomFactor:(float)arg6 ;
-(char)_shouldUseSphereForStillImageCaptureTakingIntoAccountExposureDuration:(char)arg1 deviceMotionActivity:(char)arg2 ;
-(void)_validateSphereModeBasedOnMotionDataBiasErrorEstimate:(char*)arg1 useStillDegradedMode:(char*)arg2 ;
-(long)_convertStillImageCaptureSettings:(id)arg1 masterCaptureStreamPortType:(id)arg2 bravoDeviceEnabled:(char)arg3 toStillImageCaptureNowOptions:(id*)arg4 captureStreamPropertyValues:(id*)arg5 ;
-(unsigned)_stillImageCaptureInProgressSubstateForFrameStatistics:(SCD_Struct_BW76*)arg1 captureType:(int)arg2 masterCaptureStreamPortType:(id)arg3 stereoFusionCapture:(char)arg4 ;
-(long)_captureStillImageNowOnStreamWithOptions:(id)arg1 captureStreamProperties:(id)arg2 ;
-(void)_terminateCaptureAndEmitStillImageCaptureError:(long)arg1 stillImageCaptureNowOptions:(id)arg2 stillImageCaptureStreamProperties:(id)arg3 ;
-(void)_addAutofocusAndDiagnosticMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(void)_addFeature1ToMetadata:(opaqueCMSampleBufferRef)arg1 ;
-(long)_setAutofocusProcessorProperty:(CFStringRef)arg1 propertyValue:(void*)arg2 ;
-(long)_setExposureModeAutoWithRect:(CGRect)arg1 ;
-(long)_setAutofocusProcessorImageControlModeProperty:(int)arg1 ;
-(int)_currentStillImageSceneTypeForcingFlashSceneDetectionEnabled:(char)arg1 forcingHDRSceneDetectionEnabled:(char)arg2 forcingSISSceneDetectionEnabled:(char)arg3 ;
-(void)_setNewISPZoomFactorOnStream;
-(long)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1 ;
-(void)_updateISPCropForZoomFactor:(float)arg1 ;
-(float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1 ;
-(long)_copyAutofocusProcessorProperty:(CFStringRef)arg1 propertyValueOut:(void*)arg2 ;
-(void)_updateSwitchOverStateForCurrentMasterStream:(id)arg1 frameStatistics:(SCD_Struct_BW76*)arg2 ;
-(void)_updateBravoCameraSelectionBehaviorForMasterStream:(id)arg1 ;
-(char)_switchToOtherStreamForCurrentMasterStream:(id)arg1 requestedZoomFactor:(float)arg2 frameStatistics:(SCD_Struct_BW76*)arg3 selectionBehavior:(int)arg4 ;
-(void)_servicePropertyChangeNotifications:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceCompletedRequestNotifications:(opaqueCMSampleBufferRef)arg1 ;
-(void)_serviceAutoTorchNotification:(SCD_Struct_BW76*)arg1 ;
-(char)shallowDepthOfFieldEffectEnabled;
-(char)stereoFusionEnabled;
-(int)cameraModeForGyroCalibration;
-(OpaqueFigSampleBufferProcessorRef)_autofocusProcessor;
-(int)deviceReleaseBehavior;
-(OpaqueCMClockRef)clock;
-(void)setQuadraHighResStillImageCaptureEnabled:(char)arg1 ;
-(long)setProvidesStortorgetMetadata:(char)arg1 ;
-(SCD_Struct_BW2)exposureDuration;
-(float)ISO;
-(float)exposureTargetOffset;
-(SCD_Struct_Fi52)deviceWhiteBalanceGains;
-(SCD_Struct_Fi52)grayWorldDeviceWhiteBalanceGains;
-(int)shallowDepthOfFieldEffectStatus;
-(void)setBravoCameraSelectionBehavior:(int)arg1 ;
-(char)isStillImageStabilizationScene;
-(void)setFaceDetectionConfiguration:(id)arg1 ;
-(char)isFlashScene;
-(char)isHDRScene;
-(float)zoomFactor;
-(void)setZoomFactor:(float)arg1 ;
-(int)bravoCameraSelectionBehavior;
-(float)exposureTargetBias;
-(long)setAutomaticallyAdjustsImageControlMode:(char)arg1 ;
-(long)setImageControlMode:(int)arg1 ;
-(float)lensPosition;
-(long)setSubjectAreaChangeMonitoringEnabled:(char)arg1 ;
@end

