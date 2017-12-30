/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3903.appex/Diagnostic-3903
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKDiagnosticViewController.h>

@class NSTimer, NSDate, NSMutableArray, UIDevice, MultiTouchHelper, TouchResponseInputs;

@interface TouchResponseViewController : DKDiagnosticViewController {

	char _testFinished;
	NSTimer* _timeoutTimer;
	NSDate* _startDate;
	NSMutableArray* _touchRegions;
	UIDevice* _device;
	MultiTouchHelper* _multiTouchHelper;
	TouchResponseInputs* _inputs;

}

@property (nonatomic,retain) NSTimer * timeoutTimer;                           //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) char testFinished;                                //@synthesize testFinished=_testFinished - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchRegions;                    //@synthesize touchRegions=_touchRegions - In the implementation block
@property (nonatomic,retain) UIDevice * device;                                //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) MultiTouchHelper * multiTouchHelper;              //@synthesize multiTouchHelper=_multiTouchHelper - In the implementation block
@property (nonatomic,retain) TouchResponseInputs * inputs;                     //@synthesize inputs=_inputs - In the implementation block
-(void)setTestFinished:(char)arg1 ;
-(void)setTouchRegions:(NSMutableArray *)arg1 ;
-(void)setMultiTouchHelper:(MultiTouchHelper *)arg1 ;
-(void)noInputTimedOut;
-(void)batteryStateChanged;
-(MultiTouchHelper *)multiTouchHelper;
-(NSMutableArray *)touchRegions;
-(void)checkIfAllViewsHaveBeenTouched;
-(char)testFinished;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)start;
-(int)preferredInterfaceOrientationForPresentation;
-(void)teardown;
-(void)cleanUp;
-(void)highlightView:(id)arg1 ;
-(void)finish;
-(void)setInputs:(TouchResponseInputs *)arg1 ;
-(void)timedOut;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setupView;
-(TouchResponseInputs *)inputs;
-(UIDevice *)device;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)timeoutTimer;
-(void)setDevice:(UIDevice *)arg1 ;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2 ;
-(void)endTestWithStatusCode:(id)arg1 ;
@end

