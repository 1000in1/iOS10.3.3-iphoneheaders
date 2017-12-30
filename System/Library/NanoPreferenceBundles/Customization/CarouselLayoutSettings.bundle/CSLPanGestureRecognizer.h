/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@interface CSLPanGestureRecognizer : UIPanGestureRecognizer {

	CGPoint _touchPoint;

}

@property (assign,nonatomic) CGPoint touchPoint;              //@synthesize touchPoint=_touchPoint - In the implementation block
-(CGPoint)touchPointInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(CGPoint)touchPoint;
-(void)setTouchPoint:(CGPoint)arg1 ;
@end
