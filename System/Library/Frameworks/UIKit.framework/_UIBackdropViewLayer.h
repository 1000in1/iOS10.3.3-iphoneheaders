/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

@interface _UIBackdropViewLayer : CALayer {

	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(void)dealloc;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
@end

