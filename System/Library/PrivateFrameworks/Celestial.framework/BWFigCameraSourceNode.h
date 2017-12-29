/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, BWNodeOutput, NSDictionary;


@protocol BWFigCameraSourceNode <NSObject>
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWFigVideoCaptureStream * captureStream; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride; 
@property (assign,nonatomic) char videoCaptureOutputPixelBufferAttachmentModificationAllowed; 
@required
-(BWNodeOutput *)videoCaptureOutput;
-(BWFigVideoCaptureStream *)captureStream;
-(void)willStop;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(char)arg1;
-(void)setVideoCaptureOutputColorInfoOverride:(id)arg1;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(char)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
-(BWNodeOutput *)stillImageOutput;
-(BWFigVideoCaptureDevice *)captureDevice;

@end
