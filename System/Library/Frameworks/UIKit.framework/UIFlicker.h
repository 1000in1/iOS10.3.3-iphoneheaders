/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView;

@interface UIFlicker : NSObject {

	UIView* _target;
	CGPoint _startLocation;
	int _throwIterations;
	id _delegate;
	int _mouseUpCount;
	int _mouseDraggedCount;
	float _delay;
	CGPoint _offset;

}
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)setDelay:(float)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setStartLocation:(CGPoint)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setIterations:(int)arg1 ;
-(void)run;
@end

