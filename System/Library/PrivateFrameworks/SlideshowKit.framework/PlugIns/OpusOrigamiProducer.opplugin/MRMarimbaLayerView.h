/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <UIKit/UIView.h>

@class MRTouchSet, UIPinchGestureRecognizer, UITapGestureRecognizer, MRMarimbaLayer;

@interface MRMarimbaLayerView : UIView {

	MRTouchSet* _touchSet;
	UIPinchGestureRecognizer* _pinchRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	MRMarimbaLayer* _marimbaLayer;

}

@property (readonly) MRMarimbaLayer * marimbaLayer;              //@synthesize marimbaLayer=_marimbaLayer - In the implementation block
-(MRMarimbaLayer *)marimbaLayer;
-(char)marimbaInteractivityIsEnabled;
-(void)pinch:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tap:(id)arg1 ;
@end

