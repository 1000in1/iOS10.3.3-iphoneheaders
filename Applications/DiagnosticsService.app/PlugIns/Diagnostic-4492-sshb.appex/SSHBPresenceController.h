/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4492-sshb.appex/Diagnostic-4492-sshb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKDiagnosticController.h>
#import <Diagnostic-4492-sshb/SSHBHIDSSHBTurtleDelegate.h>

@class Turtle, NSMutableArray, SSHBPresenceInputs, NSString;

@interface SSHBPresenceController : DKDiagnosticController <SSHBHIDSSHBTurtleDelegate> {

	char _statusCodeSet;
	Turtle* _turtle;
	NSMutableArray* _turtleData;
	SSHBPresenceInputs* _inputs;

}

@property (nonatomic,retain) Turtle * turtle;                          //@synthesize turtle=_turtle - In the implementation block
@property (nonatomic,retain) NSMutableArray * turtleData;              //@synthesize turtleData=_turtleData - In the implementation block
@property (assign,nonatomic) char statusCodeSet;                       //@synthesize statusCodeSet=_statusCodeSet - In the implementation block
@property (nonatomic,retain) SSHBPresenceInputs * inputs;              //@synthesize inputs=_inputs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStatusCodeSet:(char)arg1 ;
-(void)setTurtleData:(NSMutableArray *)arg1 ;
-(void)setTurtle:(Turtle *)arg1 ;
-(Turtle *)turtle;
-(char)statusCodeSet;
-(NSMutableArray *)turtleData;
-(void)turtleCallback:(id)arg1 ;
-(void)turtleWasConnected;
-(void)turtleWasDisconnected;
-(void)start;
-(void)teardown;
-(void)setInputs:(SSHBPresenceInputs *)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(SSHBPresenceInputs *)inputs;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2 ;
@end

