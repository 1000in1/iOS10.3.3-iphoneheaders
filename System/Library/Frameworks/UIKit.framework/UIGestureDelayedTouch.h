/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITouch, UIEvent;

@interface UIGestureDelayedTouch : NSObject <NSCopying> {

	UITouch* _touch;
	UITouch* _stateWhenDelayed;
	UITouch* _stateWhenDelivered;
	UIEvent* _event;
	int _delayCount;
	char _cloneForSecondDelivery;

}

@property (nonatomic,retain) UITouch * touch;                           //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UITouch * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (nonatomic,retain) UITouch * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (nonatomic,retain) UIEvent * event;                           //@synthesize event=_event - In the implementation block
@property (assign) char cloneForSecondDelivery;                         //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEvent *)event;
-(void)setEvent:(UIEvent *)arg1 ;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(UITouch *)stateWhenDelayed;
-(void)incrementDelayCount;
-(int)decrementDelayCount;
-(void)setStateWhenDelayed:(UITouch *)arg1 ;
-(char)cloneForSecondDelivery;
-(int)delayCount;
-(void)saveCurrentTouchState;
-(int)phaseForDelivery;
-(double)timestampForDelivery;
-(UITouch *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UITouch *)arg1 ;
-(void)setCloneForSecondDelivery:(char)arg1 ;
@end

