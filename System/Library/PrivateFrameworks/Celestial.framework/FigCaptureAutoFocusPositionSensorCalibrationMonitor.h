/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMutableDictionary, NSObject, NSDictionary;

@interface FigCaptureAutoFocusPositionSensorCalibrationMonitor : NSObject {

	NSMutableDictionary* _deviceTypesToNames;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	char _calibrationShouldAbort;
	int _apsCalibrationSpinLock;
	SCD_Struct_Fi66 _coreMotionMagneticField;
	double _coreMotionMagneticFieldMagnitude;
	int _magneticFieldAttempt;
	SCD_Struct_Fi67 _magneticFieldMagnitudeTiers[2];
	NSDictionary* _calibrationData;

}
+(id)initializeCalibrationInstance;
+(id)calibrationData;
-(id)init;
-(void)_startAPSCalibrationAndLog;
-(void)_notifyOfGyroCalAbort;
-(id)_calibrationData;
-(void)_setCalibrationShouldAbort:(char)arg1 ;
-(double)_getMagneticThresholdFromAttempt;
-(id)_createAPSCalibrationDictionaryWithError:(int*)arg1 didFirmwareHaveCalibrationError:(char*)arg2 ;
-(char)_calibrationShouldAbort;
-(id)_createFailedOutsideFirmwareDictionaryWithReasons:(int)arg1 ;
-(void)_logAndSaveCalibrationData:(id)arg1 isValidCalibrationData:(char)arg2 ;
-(void)_printDebugAPSCalibrationData:(id)arg1 ;
-(void)_setCalibrationData:(id)arg1 ;
-(void)_writeCalibrationDataToInternalLogFile:(id)arg1 ;
-(void)_aggdLogging:(id)arg1 ;
@end

