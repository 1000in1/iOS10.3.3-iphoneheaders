/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4180.appex/Diagnostic-4180
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKDiagnosticController.h>

@class TouchIDESDEventIncidenceCheckInputs;

@interface TouchIDESDEventIncidenceCheckController : DKDiagnosticController {

	TouchIDESDEventIncidenceCheckInputs* _inputs;

}

@property (nonatomic,retain) TouchIDESDEventIncidenceCheckInputs * inputs;              //@synthesize inputs=_inputs - In the implementation block
-(void)start;
-(void)setInputs:(TouchIDESDEventIncidenceCheckInputs *)arg1 ;
-(TouchIDESDEventIncidenceCheckInputs *)inputs;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2 ;
@end

