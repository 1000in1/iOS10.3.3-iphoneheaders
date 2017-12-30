/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4492-sshb.appex/Diagnostic-4492-sshb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-4492-sshb/SSHBHIDMotionSample.h>
#import <Diagnostic-4492-sshb/SSHBHIDSampleTemperature.h>

@class NSString;

@interface SSHBHIDGyroscopeSample : SSHBHIDMotionSample <SSHBHIDSampleTemperature> {

	double _temperature;

}

@property (assign,nonatomic) double temperature;                    //@synthesize temperature=_temperature - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)csv;
-(NSString *)description;
-(double)temperature;
-(void)setTemperature:(double)arg1 ;
@end

