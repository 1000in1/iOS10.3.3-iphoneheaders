/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3940.appex/Diagnostic-3940
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-3940/Diagnostic-3940-Structs.h>
#import <Diagnostic-3940/DACameraComponentDelegate.h>

@class NSString;

@interface ComponentCameraDelegate : NSObject <DACameraComponentDelegate> {

	BOOL _needCheckOpticalImageStabilizer;
	BOOL _checkMotionStatus;
	BOOL _opticalImageStabilizerStatusOkay;
	BOOL _motionDataStatusOkay;
	BOOL _motionDataStatusAvailable;
	int _motionSampleCount;

}

@property (assign,nonatomic) BOOL needCheckOpticalImageStabilizer;               //@synthesize needCheckOpticalImageStabilizer=_needCheckOpticalImageStabilizer - In the implementation block
@property (assign,nonatomic) BOOL checkMotionStatus;                             //@synthesize checkMotionStatus=_checkMotionStatus - In the implementation block
@property (assign,nonatomic) int motionSampleCount;                              //@synthesize motionSampleCount=_motionSampleCount - In the implementation block
@property (assign,nonatomic) BOOL opticalImageStabilizerStatusOkay;              //@synthesize opticalImageStabilizerStatusOkay=_opticalImageStabilizerStatusOkay - In the implementation block
@property (assign,nonatomic) BOOL motionDataStatusOkay;                          //@synthesize motionDataStatusOkay=_motionDataStatusOkay - In the implementation block
@property (assign,nonatomic) BOOL motionDataStatusAvailable;                     //@synthesize motionDataStatusAvailable=_motionDataStatusAvailable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCheckMotionStatus:(BOOL)arg1 ;
-(void)setNeedCheckOpticalImageStabilizer:(BOOL)arg1 ;
-(BOOL)opticalImageStabilizerStatusOkay;
-(BOOL)motionDataStatusAvailable;
-(void)processFrame:(opaqueCMSampleBufferRef)arg1 withMetadata:(id)arg2 ;
-(int)motionSampleCount;
-(void)setMotionSampleCount:(int)arg1 ;
-(BOOL)checkMotionStatus;
-(void)setMotionDataStatusOkay:(BOOL)arg1 ;
-(void)setMotionDataStatusAvailable:(BOOL)arg1 ;
-(BOOL)needCheckOpticalImageStabilizer;
-(void)setOpticalImageStabilizerStatusOkay:(BOOL)arg1 ;
-(void)processNotification:(CFStringRef)arg1 notificationObject:(id)arg2 notificationPayload:(id)arg3 ;
-(BOOL)motionDataStatusOkay;
-(id)init;
@end
