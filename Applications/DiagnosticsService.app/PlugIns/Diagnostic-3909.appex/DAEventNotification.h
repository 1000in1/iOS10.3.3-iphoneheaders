/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3909.appex/Diagnostic-3909
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, CMMotionManager;

@interface DAEventNotification : NSObject {

	char _running;
	NSNumber* _xComponentOrientationThreshold;
	CMMotionManager* _motionManager;

}

@property (assign,getter=isRunning,nonatomic) char running;                          //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) CMMotionManager * motionManager;                        //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSNumber * xComponentOrientationThreshold;              //@synthesize xComponentOrientationThreshold=_xComponentOrientationThreshold - In the implementation block
-(void)setXComponentOrientationThreshold:(NSNumber *)arg1 ;
-(void)startEventNotifications;
-(void)stopEventNotifications;
-(void)startMotionDetection;
-(void)startAccessoryConnectDetection;
-(void)startAccessoryDisconnectDetection;
-(void)startHeadsetDetection;
-(void)startAudioInterruptDetection;
-(NSNumber *)xComponentOrientationThreshold;
-(void)accessoryDidDisconnect;
-(void)accessoryDidConnect;
-(id)getAccessoryModelNumbers;
-(void)audioRouteChanged;
-(void)audioSystemInterrupt:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isRunning;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
-(void)setRunning:(char)arg1 ;
@end
