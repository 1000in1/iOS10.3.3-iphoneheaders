/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATDriver.h>

@interface SCATDwellDriver : SCATDriver {

	char _isReadyForSelect;

}

@property (assign,nonatomic) char isReadyForSelect;              //@synthesize isReadyForSelect=_isReadyForSelect - In the implementation block
-(void)_idleTimerDidFire;
-(int)driverType;
-(char)_handleStepNextAction;
-(char)_handleStepPreviousAction;
-(void)_didTransitionToPhase:(int)arg1 ;
-(char)_handleSelectAction;
-(char)handleInputAction:(int)arg1 ;
-(void)_resetDwellTimer;
-(char)isReadyForSelect;
-(char)_actuallyHandleSelectAction;
-(char)_shouldUseDwellSelection;
-(char)_handleStepAction:(int)arg1 ;
-(void)_startDwellTimer;
-(void)_cancelDwellRelatedTimers;
-(void)_dwellTimerFired;
-(double)dwellDelay;
-(void)setIsReadyForSelect:(char)arg1 ;
-(void)_scanAbortTimerFired;
-(char)_shouldUseScanAbortTimer;
-(void)_startScanAbortTimer;
@end

