/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMWakeGestureDelegate;
@interface CMWakeGestureManager : NSObject {

	id<CMWakeGestureDelegate> _delegate;

}

@property (assign,nonatomic) id<CMWakeGestureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(char)isWakeGestureAvailable;
+(id)sharedManager;
-(void)setDelegate:(id<CMWakeGestureDelegate>)arg1 ;
-(id<CMWakeGestureDelegate>)delegate;
-(void)stopWakeGestureUpdates;
-(void)startWakeGestureUpdates;
-(char)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2 ;
-(void)logAssert;
@end

