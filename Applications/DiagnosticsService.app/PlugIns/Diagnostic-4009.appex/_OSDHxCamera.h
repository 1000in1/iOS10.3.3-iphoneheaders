/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4009.appex/Diagnostic-4009
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Diagnostic-4009/Diagnostic-4009-Structs.h>
@class CALayer, OSDCaptureDevice, OSDCaptureStream;

@interface _OSDHxCamera : NSObject {

	BOOL _isActive;
	BOOL _isStreaming;
	CALayer* _previewLayer;
	unsigned _source;
	OSDCaptureDevice* _captureDevice;
	OSDCaptureStream* _captureStream;
	/*^block*/id _frameHandler;
	unsigned _streamingOptions;
	int __frameCounter;
	CAImageQueueRef __imageQueue;

}

@property (nonatomic,retain) CALayer * previewLayer;                        //@synthesize previewLayer=_previewLayer - In the implementation block
@property (assign,nonatomic) unsigned source;                               //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) OSDCaptureDevice * captureDevice;              //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,retain) OSDCaptureStream * captureStream;              //@synthesize captureStream=_captureStream - In the implementation block
@property (nonatomic,copy) id frameHandler;                                 //@synthesize frameHandler=_frameHandler - In the implementation block
@property (assign,nonatomic) unsigned streamingOptions;                     //@synthesize streamingOptions=_streamingOptions - In the implementation block
@property (assign) BOOL isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (assign) BOOL isStreaming;                                        //@synthesize isStreaming=_isStreaming - In the implementation block
@property (assign) int _frameCounter;                                       //@synthesize _frameCounter=__frameCounter - In the implementation block
@property (assign,nonatomic) CAImageQueueRef _imageQueue;                   //@synthesize _imageQueue=__imageQueue - In the implementation block
-(void)_showFrameOnPreviewLayer:(CVBufferRef)arg1 ;
-(id)ispVersion;
-(BOOL)startStreamingWithOptions:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)stopStreaming:(id*)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 cameraSource:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)getDeviceAndStreams:(id*)arg1 ;
-(void)doneWithDeviceAndStreams;
-(unsigned)streamingOptions;
-(BOOL)setFrameRate:(id)arg1 error:(id*)arg2 ;
-(void)setCaptureStream:(OSDCaptureStream *)arg1 ;
-(int)_frameCounter;
-(void)setStreamingOptions:(unsigned)arg1 ;
-(BOOL)_enableMotionDataMetadata:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_startStreaming:(id*)arg1 ;
-(void)set_frameCounter:(int)arg1 ;
-(CAImageQueueRef)_imageQueue;
-(id)_getStreamErrorFor:(CFStringRef)arg1 error:(id*)arg2 ;
-(void)set_imageQueue:(CAImageQueueRef)arg1 ;
-(BOOL)isActive;
-(void)setSource:(unsigned)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(unsigned)source;
-(id)frameCount;
-(BOOL)isStreaming;
-(OSDCaptureStream *)captureStream;
-(void)setPreviewLayer:(CALayer *)arg1 ;
-(id)frameHandler;
-(void)setFrameHandler:(id)arg1 ;
-(id)name:(id*)arg1 ;
-(void)setCaptureDevice:(OSDCaptureDevice *)arg1 ;
-(OSDCaptureDevice *)captureDevice;
-(void)setIsStreaming:(BOOL)arg1 ;
-(CALayer *)previewLayer;
@end
