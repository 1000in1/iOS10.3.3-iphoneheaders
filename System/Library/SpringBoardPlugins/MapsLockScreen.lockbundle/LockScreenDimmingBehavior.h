/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface LockScreenDimmingBehavior : NSObject {

	int _dimmingState;
	char _userLockedScreenForCurrentManeuver;
	unsigned _lastSeenState;
	NSArray* _lastSeenInstructions;
	int _lastSeenManeuver;
	unsigned _lastSeenAlert;
	char _wasWithinManeuver;
	char _guidanceAffectsDimming;

}

@property (assign,nonatomic) unsigned lastSeenState;                    //@synthesize lastSeenState=_lastSeenState - In the implementation block
@property (nonatomic,copy) NSArray * lastSeenInstructions;              //@synthesize lastSeenInstructions=_lastSeenInstructions - In the implementation block
@property (assign,nonatomic) int lastSeenManeuver;                      //@synthesize lastSeenManeuver=_lastSeenManeuver - In the implementation block
@property (assign,nonatomic) unsigned lastSeenAlert;                    //@synthesize lastSeenAlert=_lastSeenAlert - In the implementation block
@property (assign,nonatomic) char wasWithinManeuver;                    //@synthesize wasWithinManeuver=_wasWithinManeuver - In the implementation block
@property (nonatomic,readonly) int dimmingState;                        //@synthesize dimmingState=_dimmingState - In the implementation block
@property (assign,nonatomic) char guidanceAffectsDimming;               //@synthesize guidanceAffectsDimming=_guidanceAffectsDimming - In the implementation block
-(int)dimmingState;
-(void)setGuidanceAffectsDimming:(char)arg1 ;
-(void)didReceiveGuidanceUpdateWithNewState:(unsigned)arg1 maneuver:(int)arg2 instructions:(id)arg3 alert:(unsigned)arg4 ;
-(void)userDidLockScreen;
-(unsigned)lastSeenState;
-(int)lastSeenManeuver;
-(NSArray *)lastSeenInstructions;
-(char)wasWithinManeuver;
-(unsigned)lastSeenAlert;
-(void)setWasWithinManeuver:(char)arg1 ;
-(void)setLastSeenState:(unsigned)arg1 ;
-(void)setLastSeenManeuver:(int)arg1 ;
-(void)setLastSeenInstructions:(NSArray *)arg1 ;
-(void)setLastSeenAlert:(unsigned)arg1 ;
-(char)guidanceAffectsDimming;
-(id)init;
@end

