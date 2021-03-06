/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:41:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ThermalMonitor/ThermalMonitor-Structs.h>
@class CommonProduct, NSMutableArray, NSObject, PowerlogSubkeyController, NSArray;

@interface TGraphSampler : NSObject {

	CommonProduct* productObj;
	NSMutableArray* listofComponentControl;
	NSMutableArray* listOfSupervisorControl;
	CFArrayRef extratGraphDataSources;
	CFStringRef tGraphDataString;
	char isInternal;
	unsigned long long lastLogTimestamp;
	NSObject*<OS_dispatch_queue> _powerlogQueue;
	PowerlogSubkeyController* _powerlogSubkeyController_Hotspots;
	PowerlogSubkeyController* _powerlogSubkeyController_Components;
	PowerlogSubkeyController* _powerlogSubkeyController_Sensors;
	PowerlogSubkeyController* _powerlogSubkeyController_MiscInternalState;
	PowerlogSubkeyController* _powerlogSubkeyController_MiscExternalState;
	PowerlogSubkeyController* _powerlogSubkeyController_LiteMode;
	NSMutableArray* _appleCareState;
	NSArray* _appleCareStateLastLogged;

}
+(id)sharedInstance;
-(void)setTGraphDataString:(CFStringRef)arg1 ;
-(char)shouldLogSensor:(CFStringRef)arg1 ;
-(void)genTGraphHeader;
-(void)genTGraphData;
-(void)updateSubkeyController:(id)arg1 forControlList:(id)arg2 ;
-(void)updatePowerLogDictionaryForSensors;
-(void)updatePowerlogMiscState:(int)arg1 value:(int)arg2 ;
-(CFStringRef)getTGraphData:(int)arg1 ;
-(void)logToPowerlog;
-(void)addtGraphDataSource:(id)arg1 ;
-(void)updatePowerlogLiteMode:(long long)arg1 pressureLevel:(long long)arg2 ;
-(void)updateAppleCareState:(int)arg1 value:(int)arg2 ;
-(void)setProduct:(id)arg1 withComponents:(id)arg2 andHotspotSupervisors:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

