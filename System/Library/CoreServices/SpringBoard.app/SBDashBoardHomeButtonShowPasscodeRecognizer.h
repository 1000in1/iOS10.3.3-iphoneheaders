/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHomeButtonShowPasscodeRecognizer.h>

@protocol SBHomeButtonShowPasscodeRecognizerDelegate;
@class NSString, BSTimer;

@interface SBDashBoardHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer> {

	NSString* _simplePublicDescription;
	id<SBHomeButtonShowPasscodeRecognizerDelegate> _delegate;
	unsigned _state;
	char _fingerWasOnInitially;
	char _fingerHasLifted;
	BSTimer* _minimumTimer;
	NSString* _terminalStateReasoning;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBHomeButtonShowPasscodeRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)noteAuthenticated:(char)arg1 ;
-(id)initWithFingerOn:(char)arg1 ;
-(void)handleBiometricEvent:(unsigned)arg1 ;
-(void)_reallySetState:(unsigned)arg1 forReason:(id)arg2 ;
-(void)_invalidateMinimumTimer;
-(void)_switchedFromState:(unsigned)arg1 toState:(unsigned)arg2 ;
-(void)_minimumTimerFired;
-(void)_simulateTimerFiring;
-(void)setDelegate:(id<SBHomeButtonShowPasscodeRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<SBHomeButtonShowPasscodeRecognizerDelegate>)delegate;
-(unsigned)_state;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

