/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface __NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long)_cfTypeID;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(id)init;
-(oneway void)release;
-(void)invalidate;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(unsigned)hash;
-(char)isValid;
-(id)userInfo;
-(void)setFireDate:(id)arg1 ;
-(char)_isDeallocating;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(char)arg6 ;
-(double)timeInterval;
-(id)fireDate;
-(char)_tryRetain;
-(void)fire;
@end
