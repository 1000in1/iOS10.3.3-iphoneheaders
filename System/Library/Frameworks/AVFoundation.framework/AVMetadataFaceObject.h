/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {

	AVMetadataFaceObjectInternal* _internal;

}

@property (readonly) int faceID; 
@property (readonly) char hasRollAngle; 
@property (readonly) float rollAngle; 
@property (readonly) char hasYawAngle; 
@property (readonly) float yawAngle; 
+(id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFaceID:(int)arg1 hasRollAngle:(char)arg2 rollAngle:(float)arg3 hasYawAngle:(char)arg4 yawAngle:(float)arg5 time:(SCD_Struct_AV2)arg6 duration:(SCD_Struct_AV2)arg7 bounds:(CGRect)arg8 ;
-(id)initWithType:(id)arg1 time:(SCD_Struct_AV2)arg2 duration:(SCD_Struct_AV2)arg3 bounds:(CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(char)arg3 rollAdjustment:(float)arg4 ;
-(id)initWithFaceID:(int)arg1 hasRollAngle:(char)arg2 rollAngle:(float)arg3 hasYawAngle:(char)arg4 yawAngle:(float)arg5 time:(SCD_Struct_AV2)arg6 duration:(SCD_Struct_AV2)arg7 bounds:(CGRect)arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11 ;
-(id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
-(int)faceID;
-(char)hasRollAngle;
-(float)rollAngle;
-(char)hasYawAngle;
-(float)yawAngle;
-(char)hasLeftEyeBounds;
-(CGRect)leftEyeBounds;
-(char)hasLeftEyeClosedConfidence;
-(int)leftEyeClosedConfidence;
-(char)hasRightEyeBounds;
-(CGRect)rightEyeBounds;
-(char)hasRightEyeClosedConfidence;
-(int)rightEyeClosedConfidence;
-(char)hasSmileConfidence;
-(int)smileConfidence;
@end

