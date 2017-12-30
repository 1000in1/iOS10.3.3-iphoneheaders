/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) char activityAvailable; 
-(id)init;
-(void)dealloc;
-(int)overrideOscarSideband:(char)arg1 withState:(int)arg2 ;
-(int)simulateMotionState:(char)arg1 withState:(int)arg2 ;
-(id)activityHandler;
-(char)isActivityAvailable;
-(void)setActivityHandler:(id)arg1 ;
@end

