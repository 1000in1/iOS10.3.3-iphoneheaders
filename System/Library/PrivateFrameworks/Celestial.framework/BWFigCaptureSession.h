/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWNodeFileWriterStatusDelegate.h>
#import <libobjc.A.dylib/BWStillImageCaptureStatusDelegate.h>
#import <libobjc.A.dylib/BWRemoteQueueSinkNodeDelegate.h>
#import <libobjc.A.dylib/BWNodeRenderDelegate.h>
#import <libobjc.A.dylib/BWImageQueueSinkNodePreviewTapDelegate.h>
#import <libobjc.A.dylib/BWGraphStatusDelegate.h>
#import <libobjc.A.dylib/BWIrisStagingNodeEmitIrisRequestDelegate.h>
#import <libobjc.A.dylib/BWSourceNodeErrorDelegate.h>

@class NSString;

@interface BWFigCaptureSession : NSObject <BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWGraphStatusDelegate, BWIrisStagingNodeEmitIrisRequestDelegate, BWSourceNodeErrorDelegate> {

	OpaqueFigCaptureSessionRef _captureSession;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fileWriter:(id)arg1 startedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 stoppedRecordingForSettings:(id)arg2 withError:(long)arg3 thumbnailSurface:(IOSurfaceRef)arg4 irisMovieInfo:(id)arg5 recordingSucceeded:(char)arg6 ;
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(long)arg2 ;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3 ;
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2 resolvedCaptureSetings:(id)arg3 ;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(char)arg3 ;
-(void)stillImageCoordinator:(id)arg1 didCapturePreBracketedEV0ImageForSettings:(id)arg2 resolvedCaptureType:(int)arg3 pts:(SCD_Struct_BW2)arg4 ;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2 resolvedCaptureType:(int)arg3 pts:(SCD_Struct_BW2)arg4 ;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(char)arg3 ;
-(void)remoteQueueSinkNode:(id)arg1 queueBecameReady:(remoteQueueSenderOpaqueRef)arg2 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3 ;
-(void)imageQueueSinkNode:(id)arg1 didEnqueuePreviewSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 ;
-(void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2 ;
-(void)sourceNode:(id)arg1 didEncounterError:(long)arg2 ;
@end

