/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIScrollViewPanGestureRecognizer;

@interface _UIScrollViewMockPanGestureRecognizer : NSObject {

	CGPoint _translation;
	CGPoint _velocity;
	int _state;
	UIScrollViewPanGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) UIScrollViewPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) int state; 
-(CGPoint)locationInView:(id)arg1 ;
-(void)setGestureRecognizer:(UIScrollViewPanGestureRecognizer *)arg1 ;
-(UIScrollViewPanGestureRecognizer *)gestureRecognizer;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)simulateTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
@end
