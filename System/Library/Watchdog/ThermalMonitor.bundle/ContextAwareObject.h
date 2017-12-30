/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:41:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ContextAwareObject : NSObject {

	BOOL _infoOnlySensorsActive;
	int ctxType;

}

@property (nonatomic,readonly) int ctxType; 
-(void)setInfoOnlySensorsActive:(char)arg1 ;
-(void)updateSystemPowerState:(char)arg1 ;
-(int)getContextState;
-(BOOL)isContextTriggered;
-(int)ctxType;
-(BOOL)synchContext;
-(id)initCTXBase;
@end

