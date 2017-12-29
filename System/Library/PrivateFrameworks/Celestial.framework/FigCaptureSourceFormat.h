/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>

@class NSDictionary, NSArray, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding> {

	NSDictionary* _formatDictionary;
	char _isMultiStreamFormat;
	char _isExternalFormat;
	opaqueCMFormatDescriptionRef _formatDescription;
	NSArray* _frontEndScalerCompanionFormats;

}

@property (readonly) unsigned long mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (getter=isExperimental,readonly) char experimental; 
@property (getter=isDefaultActiveFormat,readonly) char defaultActiveFormat; 
@property (readonly) int videoFormatIndex; 
@property (readonly) unsigned long videoFormat; 
@property (readonly) SCD_Struct_BW12 videoDimensions; 
@property (readonly) SCD_Struct_BW12 sensorDimensions; 
@property (readonly) float videoMinSupportedFrameRate; 
@property (readonly) float videoMaxSupportedFrameRate; 
@property (readonly) float videoDefaultMinFrameRate; 
@property (readonly) float videoDefaultMaxFrameRate; 
@property (readonly) float videoFieldOfView; 
@property (getter=isVideoBinned,readonly) char videoBinned; 
@property (readonly) int videoStabilizationTypeOverrideForStandard; 
@property (readonly) int videoStabilizationTypeOverrideForCinematic; 
@property (getter=isVideoZoomSupported,readonly) char videoZoomSupported; 
@property (readonly) float videoMaxZoomFactor; 
@property (readonly) float videoZoomFactorUpscaleThreshold; 
@property (getter=isVideoZoomDynamicSensorCropSupported,readonly) char videoZoomDynamicSensorCropSupported; 
@property (getter=isVideoLowLightBinningSwitchSupported,readonly) char videoLowLightBinningSwitchSupported; 
@property (readonly) int videoRawBitDepth; 
@property (readonly) int temporalNoiseReductionMode; 
@property (readonly) char ispChromaNoiseReductionEnabled; 
@property (readonly) float minISO; 
@property (readonly) float maxISO; 
@property (readonly) SCD_Struct_BW2 minExposureDuration; 
@property (readonly) SCD_Struct_BW2 maxExposureDuration; 
@property (readonly) float aeMaxGain; 
@property (readonly) int maxIntegrationTimeOverride; 
@property (readonly) int autoFocusSystem; 
@property (getter=isMultiStreamFormat,readonly) char multiStreamFormat; 
@property (readonly) NSArray * frontEndScalerCompanionFormats; 
@property (readonly) SCD_Struct_BW12 sensorCropDimensions; 
@property (readonly) SCD_Struct_BW12 sourceCropAspectRatio; 
@property (readonly) char hasSensorHDRCompanionIndex; 
@property (readonly) int sensorHDRCompanionIndex; 
@property (readonly) char prefersSensorHDREnabled; 
@property (readonly) char capturesStillsFromVideoStream; 
@property (getter=isPhotoFormat,readonly) char photoFormat; 
@property (getter=isHighResPhotoFormat,readonly) char highResPhotoFormat; 
@property (readonly) char needsPreviewDPCC; 
@property (getter=isStillImageStabilizationSupported,readonly) char stillImageStabilizationSupported; 
@property (getter=isIrisSupported,readonly) char irisSupported; 
@property (getter=isIrisVideoStabilizationSupported,readonly) char irisVideoStabilizationSupported; 
@property (readonly) int stillImageNoiseReductionAndStabilizationScheme; 
@property (getter=isHDRSupported,readonly) char hdrSupported; 
@property (getter=isHighResStillImageSupported,readonly) char highResStillImageSupported; 
@property (getter=isQuadraHighResStillImageSupported,readonly) char quadraHighResStillImageSupported; 
@property (readonly) SCD_Struct_BW12 highResStillImageDimensions; 
@property (getter=isStillImageISPChromaNoiseReductionEnabled,readonly) char stillImageISPChromaNoiseReductionEnabled; 
@property (getter=isWideColorSupported,readonly) char wideColorSupported; 
@property (readonly) NSArray * supportedColorSpaces; 
@property (readonly) unsigned long supportedRawPixelFormat; 
@property (readonly) NSArray * rawLensShadingCorrection; 
@property (getter=isShallowDepthOfFieldEffectSupported,readonly) char shallowDepthOfFieldEffectSupported; 
@property (getter=isHighProfileH264Supported,readonly) char highProfileH264Supported; 
@property (readonly) NSArray * AVCaptureSessionPresets; 
@property (readonly) float videoScaleFactor; 
@property (readonly) char isExternalFormat; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long)videoFormat;
-(NSArray *)frontEndScalerCompanionFormats;
-(int)videoStabilizationTypeOverrideForStandard;
-(int)videoStabilizationTypeOverrideForCinematic;
-(char)capturesStillsFromVideoStream;
-(int)sensorHDRCompanionIndex;
-(SCD_Struct_BW12)sensorCropDimensions;
-(SCD_Struct_BW12)sourceCropAspectRatio;
-(int)temporalNoiseReductionMode;
-(char)ispChromaNoiseReductionEnabled;
-(char)isStillImageISPChromaNoiseReductionEnabled;
-(int)maxIntegrationTimeOverride;
-(float)aeMaxGain;
-(NSArray *)rawLensShadingCorrection;
-(char)isMultiStreamFormat;
-(int)stillImageNoiseReductionAndStabilizationScheme;
-(char)isVideoZoomSupported;
-(SCD_Struct_BW12)_outputDimensions;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(char)isExternalFormat;
-(id)copyWithNewVideoPixelFormat:(unsigned long)arg1 ;
-(void)_resolveProperties;
-(SCD_Struct_BW12)_maxUseableSensorDimensions;
-(SCD_Struct_BW12)_visibleSensorDimensionsIncludingCinematic:(char)arg1 ;
-(float)videoScaleFactor;
-(char)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1 ;
-(char)isVideoStabilizationModeSupported:(int)arg1 ;
-(char)isPhotoFormat;
-(char)isWideColorSupported;
-(char)isDefaultActiveFormat;
-(NSArray *)AVCaptureSessionPresets;
-(SCD_Struct_BW2)minExposureDuration;
-(SCD_Struct_BW2)maxExposureDuration;
-(float)minISO;
-(float)maxISO;
-(SCD_Struct_BW12)sensorDimensions;
-(char)isIrisVideoStabilizationSupported;
-(float)videoFieldOfView;
-(char)isVideoBinned;
-(float)videoZoomFactorUpscaleThreshold;
-(char)isExperimental;
-(float)videoMinSupportedFrameRate;
-(float)videoMaxSupportedFrameRate;
-(char)hasSensorHDRCompanionIndex;
-(SCD_Struct_BW12)highResStillImageDimensions;
-(char)isHighResStillImageSupported;
-(char)prefersSensorHDREnabled;
-(char)isVideoLowLightBinningSwitchSupported;
-(char)isVideoZoomDynamicSensorCropSupported;
-(char)isIrisSupported;
-(int)videoRawBitDepth;
-(char)isHighResPhotoFormat;
-(char)isHighProfileH264Supported;
-(char)needsPreviewDPCC;
-(int)videoFormatIndex;
-(float)videoDefaultMaxFrameRate;
-(float)videoDefaultMinFrameRate;
-(char)isQuadraHighResStillImageSupported;
-(unsigned long)supportedRawPixelFormat;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(unsigned long)mediaType;
-(float)videoMaxZoomFactor;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(char)isShallowDepthOfFieldEffectSupported;
-(NSArray *)supportedColorSpaces;
-(SCD_Struct_BW12)videoDimensions;
-(char)isStillImageStabilizationSupported;
-(char)isHDRSupported;
-(int)autoFocusSystem;
@end
