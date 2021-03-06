/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKAction.h>
#import <libobjc.A.dylib/OKActionPinchExports.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OKActionPinch : OKAction <OKActionPinchExports, NSSecureCoding> {

	float _scale;
	float _angle;
	float _velocity;
	CGPoint _translation;

}

@property (assign,nonatomic) float scale;                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float angle;                      //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) CGPoint translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) float velocity;                   //@synthesize velocity=_velocity - In the implementation block
+(char)supportsSecureCoding;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)pinchActionWithState:(unsigned)arg1 location:(CGPoint)arg2 touchCount:(unsigned)arg3 scale:(float)arg4 angle:(float)arg5 translation:(CGPoint)arg6 velocity:(float)arg7 context:(id)arg8 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setVelocity:(float)arg1 ;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(float)velocity;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end

