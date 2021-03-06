/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3939.appex/Diagnostic-3939
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-3939/DASpecification.h>

@interface DAParameters : DASpecification {

	char _resetTimer;
	int _totalPressEvents;
	double _listenForInputTimeout;
	double _noInputTimeout;

}

@property (assign,nonatomic) int totalPressEvents;                      //@synthesize totalPressEvents=_totalPressEvents - In the implementation block
@property (assign,nonatomic) double listenForInputTimeout;              //@synthesize listenForInputTimeout=_listenForInputTimeout - In the implementation block
@property (assign,nonatomic) double noInputTimeout;                     //@synthesize noInputTimeout=_noInputTimeout - In the implementation block
@property (assign,nonatomic) char resetTimer;                           //@synthesize resetTimer=_resetTimer - In the implementation block
-(double)noInputTimeout;
-(void)setNoInputTimeout:(double)arg1 ;
-(int)totalPressEvents;
-(void)setTotalPressEvents:(int)arg1 ;
-(double)listenForInputTimeout;
-(void)setListenForInputTimeout:(double)arg1 ;
-(void)setResetTimer:(char)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(char)resetTimer;
@end

