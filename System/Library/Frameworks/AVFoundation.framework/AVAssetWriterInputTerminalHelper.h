/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate.h>

@class NSString;

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {

	int _terminalStatus;
	char _didRequestMediaDataOnce;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)status;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalStatus:(int)arg2 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1 ;
-(char)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1 ;
-(int)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)markCurrentPassAsFinished;
-(void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1 ;
-(char)mediaDataRequesterShouldRequestMediaData:(id)arg1 ;
-(char)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)markAsFinished;
-(char)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV2)arg2 ;
@end

