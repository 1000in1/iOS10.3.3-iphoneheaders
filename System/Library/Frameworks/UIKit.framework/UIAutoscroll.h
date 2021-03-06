/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAutoscrollContainer;
#import <UIKit/UIKit-Structs.h>
@class UIView, NSTimer;

@interface UIAutoscroll : NSObject {

	id m_target;
	CGPoint m_point;
	UIView*<UIAutoscrollContainer> m_scrollContainer;
	int m_directions;
	double m_repeatInterval;
	NSTimer* m_timer;
	unsigned m_count;
	char m_active;
	char m_disabled;
	id _target;

}

@property (assign,nonatomic,__weak) id target;                                            //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIView*<UIAutoscrollContainer> scrollContainer; 
@property (assign,nonatomic) CGPoint point; 
@property (assign,nonatomic) int directions; 
@property (assign,nonatomic) double repeatInterval; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) char active; 
@property (assign,nonatomic) char disabled; 
-(void)invalidate;
-(void)dealloc;
-(unsigned)count;
-(void)setRepeatInterval:(double)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setCount:(unsigned)arg1 ;
-(char)active;
-(char)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(CGPoint)arg3 directions:(int)arg4 repeatInterval:(double)arg5 ;
-(int)directions;
-(CGPoint)point;
-(void)setActive:(char)arg1 ;
-(void)timerFired:(id)arg1 ;
-(char)disabled;
-(UIView*<UIAutoscrollContainer>)scrollContainer;
-(double)repeatInterval;
-(void)setPoint:(CGPoint)arg1 ;
-(void)setScrollContainer:(UIView*<UIAutoscrollContainer>)arg1 ;
-(void)setDirections:(int)arg1 ;
-(void)setDisabled:(char)arg1 ;
@end

