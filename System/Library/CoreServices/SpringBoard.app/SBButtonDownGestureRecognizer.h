/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILongPressGestureRecognizer.h>

@class UIPressesEvent;

@interface SBButtonDownGestureRecognizer : UILongPressGestureRecognizer {

	UIPressesEvent* _latestPressesEvent;

}

@property (nonatomic,readonly) UIPressesEvent * latestPressesEvent;              //@synthesize latestPressesEvent=_latestPressesEvent - In the implementation block
-(UIPressesEvent *)latestPressesEvent;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
@end

