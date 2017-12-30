/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface BWStillImageCaptureSettings : NSObject {

	int _captureType;
	char _deliverProcessedImage;
	char _deliverOriginalImage;
	char _deliverSushiRaw;
	NSArray* _captureStreamSettings;

}

@property (nonatomic,readonly) int captureType;                                                                    //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) char deliverProcessedImage;                                                         //@synthesize deliverProcessedImage=_deliverProcessedImage - In the implementation block
@property (nonatomic,readonly) char deliverOriginalImage;                                                          //@synthesize deliverOriginalImage=_deliverOriginalImage - In the implementation block
@property (nonatomic,readonly) char deliverSushiRaw;                                                               //@synthesize deliverSushiRaw=_deliverSushiRaw - In the implementation block
@property (getter=isMultiCameraCaptureAndFusion,nonatomic,readonly) char multiCameraCaptureAndFusion; 
@property (nonatomic,readonly) NSArray * captureStreamSettings;                                                    //@synthesize captureStreamSettings=_captureStreamSettings - In the implementation block
@property (nonatomic,readonly) int expectedClientImageCount; 
-(void)dealloc;
-(id)description;
-(char)isMultiCameraCaptureAndFusion;
-(int)captureType;
-(char)deliverOriginalImage;
-(char)deliverProcessedImage;
-(id)captureStreamSettingsForPortType:(id)arg1 ;
-(NSArray *)captureStreamSettings;
-(int)expectedClientImageCount;
-(id)initWithCaptureType:(int)arg1 deliverProcessedImage:(char)arg2 deliverOriginalImage:(char)arg3 deliverSushiRaw:(char)arg4 captureStreamSettings:(id)arg5 ;
-(char)deliverSushiRaw;
@end

