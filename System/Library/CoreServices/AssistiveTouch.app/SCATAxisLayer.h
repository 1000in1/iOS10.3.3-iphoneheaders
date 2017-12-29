/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface SCATAxisLayer : CALayer {

	int _axis;
	int _theme;
	CALayer* _foregroundLayer;
	CALayer* _compositingLayer;

}

@property (nonatomic,retain) CALayer * foregroundLayer;               //@synthesize foregroundLayer=_foregroundLayer - In the implementation block
@property (nonatomic,retain) CALayer * compositingLayer;              //@synthesize compositingLayer=_compositingLayer - In the implementation block
@property (assign,nonatomic) int axis;                                //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) int theme;                               //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) char isAnimatingForwards; 
+(float)rangeLayerMaxWidth;
+(float)rangeLayerBorderWidth;
+(float)lineLayerMaxWidth;
-(id)initWithAxis:(int)arg1 ;
-(void)updateTheme:(int)arg1 animated:(char)arg2 ;
-(void)updateLayerTreePosition:(CGPoint)arg1 ;
-(char)isAnimatingForwards;
-(CALayer *)foregroundLayer;
-(CALayer *)compositingLayer;
-(void)setForegroundLayer:(CALayer *)arg1 ;
-(void)setCompositingLayer:(CALayer *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setAxis:(int)arg1 ;
-(int)axis;
-(int)theme;
-(void)setTheme:(int)arg1 ;
@end
