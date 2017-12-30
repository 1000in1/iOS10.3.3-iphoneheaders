/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class RTRoutineManager, NSObject, CLLocationManager, NSMutableSet, NSUserDefaults;

@interface ABLEBSMRoutineMonitor : NSObject {

	RTRoutineManager* routine;
	NSObject*<OS_dispatch_queue> syncQueue;
	CLLocationManager* manager;
	NSMutableSet* homes;
	NSMutableSet* frequentLOIs;
	double commuteDistance;
	NSUserDefaults* defaults;
	char _enabled;

}

@property (readonly) char enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)monitorWithDefaults:(id)arg1 ;
-(void)tryToReenable;
-(char)updateCommuteDistance:(double)arg1 ;
-(id)initWithDefaults:(id)arg1 ;
-(int)isUserAt:(int)arg1 ;
-(void)computeComputeDistance;
-(char)isUserAtHome;
-(char)isUserAtWork;
-(char)isUserTraveling;
-(char)enabled;
@end
