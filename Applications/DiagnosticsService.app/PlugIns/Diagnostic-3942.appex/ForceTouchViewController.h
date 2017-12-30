/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3942.appex/Diagnostic-3942
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-3942/Diagnostic-3942-Structs.h>
#import <DiagnosticsKit/DKDiagnosticViewController.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class ForceTouchRingView, UILabel, NSNumber, NSTimer, NSArray, NSMutableArray, CAShapeLayer, ForceTouchInputs, NSString;

@interface ForceTouchViewController : DKDiagnosticViewController <CAAnimationDelegate> {

	char _pressureTargetMissed;
	char _noInputTimerFired;
	char _timeoutTimerFireDelayed;
	char _touchEventRecognized;
	char _timerInvalidated;
	char _pressureReachedAfterTimeout;
	char _shouldIgnoreForceEvents;
	ForceTouchRingView* _forceTouchRingView;
	UILabel* _statusLabel;
	unsigned _pressureIndex;
	unsigned _testCoordinatesCount;
	int _testCoordinatesIndex;
	float _pressureRatio;
	float _maximumPressure;
	NSNumber* _forceTouchStarted;
	NSNumber* _forceTouchEnded;
	NSTimer* _timeoutTimer;
	NSArray* _gridIndexes;
	NSMutableArray* _testCoordinatesColor;
	NSMutableArray* _gridStatus;
	NSMutableArray* _allResults;
	NSMutableArray* _undetectedPressurePoints;
	NSMutableArray* _detectedPressurePoints;
	NSMutableArray* _testCoordinates;
	CAShapeLayer* _check;
	MTDeviceRef _builtInDevice;
	ForceTouchInputs* _inputs;

}

@property (nonatomic,retain) ForceTouchRingView * forceTouchRingView;                //@synthesize forceTouchRingView=_forceTouchRingView - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                  //@synthesize statusLabel=_statusLabel - In the implementation block
@property (assign,nonatomic) unsigned pressureIndex;                                 //@synthesize pressureIndex=_pressureIndex - In the implementation block
@property (assign,nonatomic) unsigned testCoordinatesCount;                          //@synthesize testCoordinatesCount=_testCoordinatesCount - In the implementation block
@property (assign,nonatomic) int testCoordinatesIndex;                               //@synthesize testCoordinatesIndex=_testCoordinatesIndex - In the implementation block
@property (assign,nonatomic) char pressureTargetMissed;                              //@synthesize pressureTargetMissed=_pressureTargetMissed - In the implementation block
@property (assign,nonatomic) char noInputTimerFired;                                 //@synthesize noInputTimerFired=_noInputTimerFired - In the implementation block
@property (assign,nonatomic) char timeoutTimerFireDelayed;                           //@synthesize timeoutTimerFireDelayed=_timeoutTimerFireDelayed - In the implementation block
@property (assign,nonatomic) char touchEventRecognized;                              //@synthesize touchEventRecognized=_touchEventRecognized - In the implementation block
@property (assign,nonatomic) char timerInvalidated;                                  //@synthesize timerInvalidated=_timerInvalidated - In the implementation block
@property (assign,nonatomic) char pressureReachedAfterTimeout;                       //@synthesize pressureReachedAfterTimeout=_pressureReachedAfterTimeout - In the implementation block
@property (assign,nonatomic) float pressureRatio;                                    //@synthesize pressureRatio=_pressureRatio - In the implementation block
@property (assign,nonatomic) float maximumPressure;                                  //@synthesize maximumPressure=_maximumPressure - In the implementation block
@property (nonatomic,retain) NSNumber * forceTouchStarted;                           //@synthesize forceTouchStarted=_forceTouchStarted - In the implementation block
@property (nonatomic,retain) NSNumber * forceTouchEnded;                             //@synthesize forceTouchEnded=_forceTouchEnded - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                                 //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) char shouldIgnoreForceEvents;                           //@synthesize shouldIgnoreForceEvents=_shouldIgnoreForceEvents - In the implementation block
@property (nonatomic,retain) NSArray * gridIndexes;                                  //@synthesize gridIndexes=_gridIndexes - In the implementation block
@property (nonatomic,retain) NSMutableArray * testCoordinatesColor;                  //@synthesize testCoordinatesColor=_testCoordinatesColor - In the implementation block
@property (nonatomic,retain) NSMutableArray * gridStatus;                            //@synthesize gridStatus=_gridStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * allResults;                            //@synthesize allResults=_allResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * undetectedPressurePoints;              //@synthesize undetectedPressurePoints=_undetectedPressurePoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * detectedPressurePoints;                //@synthesize detectedPressurePoints=_detectedPressurePoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * testCoordinates;                       //@synthesize testCoordinates=_testCoordinates - In the implementation block
@property (nonatomic,retain) CAShapeLayer * check;                                   //@synthesize check=_check - In the implementation block
@property (assign,nonatomic) MTDeviceRef builtInDevice;                              //@synthesize builtInDevice=_builtInDevice - In the implementation block
@property (nonatomic,retain) ForceTouchInputs * inputs;                              //@synthesize inputs=_inputs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCheck:(CAShapeLayer *)arg1 ;
-(void)noInputTimedOut;
-(void)setPressureRatio:(float)arg1 ;
-(float)pressureRatio;
-(void)shuffleCoordinates;
-(void)setupHIDForceTouchRecognizer;
-(NSArray *)gridIndexes;
-(void)setNoInputTimerFired:(char)arg1 ;
-(int)testCoordinatesIndex;
-(ForceTouchRingView *)forceTouchRingView;
-(NSMutableArray *)testCoordinates;
-(void)playCheckAnimationAtPoint:(CGPoint)arg1 ;
-(char)touchEventRecognized;
-(void)setTimeoutTimerFireDelayed:(char)arg1 ;
-(char)pressureReachedAfterTimeout;
-(void)setPressureReachedAfterTimeout:(char)arg1 ;
-(NSNumber *)forceTouchStarted;
-(void)setForceTouchEnded:(NSNumber *)arg1 ;
-(NSMutableArray *)undetectedPressurePoints;
-(unsigned)pressureIndex;
-(NSMutableArray *)testCoordinatesColor;
-(void)setTimerInvalidated:(char)arg1 ;
-(void)setPressureIndex:(unsigned)arg1 ;
-(NSMutableArray *)gridStatus;
-(void)setPressureTargetMissed:(char)arg1 ;
-(NSNumber *)forceTouchEnded;
-(NSMutableArray *)detectedPressurePoints;
-(unsigned)testCoordinatesCount;
-(void)setForceTouchStarted:(NSNumber *)arg1 ;
-(void)setTestCoordinatesIndex:(int)arg1 ;
-(char)pressureTargetMissed;
-(void)presentRingWithTestCoordinateGridIndex:(unsigned)arg1 ;
-(void)checkForNextTargetWithTestCoordinateGridIndex:(id)arg1 ;
-(char)noInputTimerFired;
-(void)retryButtonAction;
-(void)continueButtonAction;
-(void)setGridIndexes:(NSArray *)arg1 ;
-(char)shouldIgnoreForceEvents;
-(void)setTouchEventRecognized:(char)arg1 ;
-(char)timeoutTimerFireDelayed;
-(void)partialInputTimedOut;
-(char)timerInvalidated;
-(void)setShouldIgnoreForceEvents:(char)arg1 ;
-(void)setForceTouchRingView:(ForceTouchRingView *)arg1 ;
-(void)finishTest;
-(void)setTestCoordinatesCount:(unsigned)arg1 ;
-(void)setTestCoordinatesColor:(NSMutableArray *)arg1 ;
-(void)setGridStatus:(NSMutableArray *)arg1 ;
-(void)setUndetectedPressurePoints:(NSMutableArray *)arg1 ;
-(void)setDetectedPressurePoints:(NSMutableArray *)arg1 ;
-(void)setTestCoordinates:(NSMutableArray *)arg1 ;
-(MTDeviceRef)builtInDevice;
-(void)setBuiltInDevice:(MTDeviceRef)arg1 ;
-(void)dealloc;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)start;
-(int)preferredInterfaceOrientationForPresentation;
-(void)updateViewConstraints;
-(void)teardown;
-(void)cleanUp;
-(void)setInputs:(ForceTouchInputs *)arg1 ;
-(void)setupView;
-(ForceTouchInputs *)inputs;
-(CAShapeLayer *)check;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
-(float)maximumPressure;
-(void)setMaximumPressure:(float)arg1 ;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2 ;
-(void)endTestWithStatusCode:(id)arg1 ;
-(NSMutableArray *)allResults;
-(void)setAllResults:(NSMutableArray *)arg1 ;
@end

