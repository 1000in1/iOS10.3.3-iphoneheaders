/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-2386.appex/Diagnostic-2386
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKDiagnosticController.h>

@class UncleanShutdownHistoryInputs;

@interface UncleanShutdownHistoryController : DKDiagnosticController {

	UncleanShutdownHistoryInputs* _inputs;

}

@property (nonatomic,retain) UncleanShutdownHistoryInputs * inputs;              //@synthesize inputs=_inputs - In the implementation block
-(id)_processEntry:(id)arg1 ;
-(id)_processCrashEntry:(id)arg1 ;
-(id)_processLegacyPanicEntry:(id)arg1 ;
-(id)_processPMUEntry:(id)arg1 ;
-(id)_processPanicEntry:(id)arg1 ;
-(id)_processStackshotEntry:(id)arg1 ;
-(id)_processJetsamEntry:(id)arg1 ;
-(id)_processJetsamKilledProcessString:(id)arg1 ;
-(void)start;
-(void)setInputs:(UncleanShutdownHistoryInputs *)arg1 ;
-(UncleanShutdownHistoryInputs *)inputs;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2 ;
@end

