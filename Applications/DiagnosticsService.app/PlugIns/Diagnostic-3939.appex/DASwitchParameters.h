/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3939.appex/Diagnostic-3939
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-3939/DAParameters.h>

@class NSArray;

@interface DASwitchParameters : DAParameters {

	int _startingState;
	NSArray* _states;

}

@property (assign,nonatomic) int startingState;              //@synthesize startingState=_startingState - In the implementation block
@property (nonatomic,retain) NSArray * states;               //@synthesize states=_states - In the implementation block
-(int)startingState;
-(void)setStartingState:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)states;
-(void)setStates:(NSArray *)arg1 ;
@end

