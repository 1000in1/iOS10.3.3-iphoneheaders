/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCATDriverDelegate;
@class SCATFocusContext, AXDispatchTimer, SCATElementManager;

@interface SCATDriver : NSObject {

	SCATFocusContext* _focusContext;
	char _hasIdleTimeExpired;
	id<SCATDriverDelegate> _delegate;
	int _phase;
	AXDispatchTimer* _idleTimer;
	int _lastWrapDirection;

}

@property (assign,nonatomic) int phase;                                                //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) char hasIdleTimeExpired;                                  //@synthesize hasIdleTimeExpired=_hasIdleTimeExpired - In the implementation block
@property (assign,nonatomic) int lastWrapDirection;                                    //@synthesize lastWrapDirection=_lastWrapDirection - In the implementation block
@property (nonatomic,retain) SCATFocusContext * focusContext; 
@property (nonatomic,retain) AXDispatchTimer * idleTimer;                              //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,readonly) char isGroupingEnabled; 
@property (assign,nonatomic) id<SCATDriverDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) char isPaused; 
@property (nonatomic,readonly) char isInactive; 
@property (nonatomic,readonly) SCATElementManager * activeElementManager; 
@property (nonatomic,readonly) int driverType; 
-(void)_stepToNextFocusContextInDirection:(int)arg1 ;
-(void)_idleTimerDidFire;
-(char)_canAutomaticallyPauseScanner;
-(void)pauseScanning;
-(char)_handleStepNextAction;
-(char)_handleStepPreviousAction;
-(void)beginScanningWithFocusContext:(id)arg1 ;
-(void)setFocusContext:(SCATFocusContext *)arg1 ;
-(char)hasIdleTimeExpired;
-(SCATElementManager *)activeElementManager;
-(char)isActiveScannerDriver;
-(SCATFocusContext *)focusContext;
-(id)selectActionHandler;
-(char)_canTransitionToPhase:(int)arg1 ;
-(void)_willTransitionToPhase:(int)arg1 ;
-(id)firstFocusContext;
-(void)_didTransitionToPhase:(int)arg1 ;
-(id)_drillOutFocusContextForParentGroupOfFocusContext:(id)arg1 ;
-(int)_nextFocusSourceFromSource:(int)arg1 inDirection:(int)arg2 ;
-(id)_focusContextForSource:(int)arg1 inDirection:(int)arg2 currentContext:(id)arg3 ;
-(id)_focusContextAdjacentToSource:(int)arg1 direction:(int)arg2 fromContext:(id)arg3 checkedSources:(unsigned)arg4 ;
-(char)_shouldFocusToEscapeParentGroup:(id)arg1 elementManager:(id)arg2 ;
-(id)_focusedElementManagerForContext:(id)arg1 ;
-(int)_sourceForFocusContext:(id)arg1 ;
-(id)_focusContextFromPrimaryContext:(id)arg1 inDirection:(int)arg2 didWrap:(char*)arg3 ;
-(id)nextFocusContextFromContext:(id)arg1 inDirection:(int)arg2 didWrap:(char*)arg3 ;
-(void)_didWrapInDirection:(int)arg1 ;
-(void)_willStepToNextFocusContext:(id)arg1 inDirection:(int)arg2 ;
-(void)willDrillIntoGroup;
-(void)willDrillOutOfGroup;
-(char)_handleActivateAction;
-(char)_handleRunAction;
-(char)_handleSelectAction;
-(char)_handleStopAction;
-(void)handleDrillInOnGroup:(id)arg1 elementManager:(id)arg2 ;
-(void)handleDrillOutOnGroup:(id)arg1 elementManager:(id)arg2 ;
-(int)_preferredBehaviorForSelectCount:(unsigned)arg1 focusContext:(id)arg2 ;
-(void)endScanning;
-(void)setLastWrapDirection:(int)arg1 ;
-(char)_fireSelectActionWithCount:(unsigned)arg1 preferrsMenuOnFirstPress:(char)arg2 ;
-(id)scannerManager;
-(void)continueScanningWithFocusContext:(id)arg1 ;
-(void)resumeScanning;
-(void)freezeScanning;
-(char)handleInputAction:(int)arg1 ;
-(void)willBecomeScannerDriver;
-(void)didBecomeScannerDriver;
-(void)willFinishAsScannerDriver;
-(void)didFinishAsScannerDriver;
-(void)outputManager:(id)arg1 willSpeakFocusContext:(id)arg2 ;
-(void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2 ;
-(char)actionHandler:(id)arg1 shouldActImmediatelyOnActionCount:(unsigned)arg2 ;
-(void)actionHandlerDidFireAction:(id)arg1 ;
-(id)focusContextForActionHandler:(id)arg1 ;
-(void)actionHandlerDidCancelPendingAction:(id)arg1 ;
-(void)tickleIdleTimer;
-(void)setHasIdleTimeExpired:(char)arg1 ;
-(int)lastWrapDirection;
-(id)init;
-(int)phase;
-(void)setDelegate:(id<SCATDriverDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<SCATDriverDelegate>)delegate;
-(char)isActive;
-(void)setPhase:(int)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(char)isPaused;
-(void)_resetIdleTimer;
-(char)isGroupingEnabled;
-(char)isInactive;
-(void)_cancelIdleTimer;
-(AXDispatchTimer *)idleTimer;
-(void)setIdleTimer:(AXDispatchTimer *)arg1 ;
@end

