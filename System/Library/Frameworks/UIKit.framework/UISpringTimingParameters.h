/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITimingCurveProvider.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <UITimingCurveProvider> {

	char _implicitDuration;
	float _dampingRatio;
	float _mass;
	float _stiffness;
	float _damping;
	CGVector _initialVelocity;

}

@property (nonatomic,readonly) float dampingRatio;                                             //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (nonatomic,readonly) char implicitDuration;                                          //@synthesize implicitDuration=_implicitDuration - In the implementation block
@property (assign,nonatomic) float mass;                                                       //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) float stiffness;                                                  //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) float damping;                                                    //@synthesize damping=_damping - In the implementation block
@property (nonatomic,readonly) double settlingDuration; 
@property (nonatomic,readonly) CGVector initialVelocity;                                       //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,readonly) int timingCurveType; 
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
@property (nonatomic,readonly) UISpringTimingParameters * springTimingParameters; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)damping;
-(float)mass;
-(id)_mediaTimingFunction;
-(id)initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 initialVelocity:(CGVector)arg4 ;
-(id)effectiveTimingFunction;
-(int)timingCurveType;
-(UICubicTimingParameters *)cubicTimingParameters;
-(UISpringTimingParameters *)springTimingParameters;
-(char)implicitDuration;
-(float)stiffness;
-(CGVector)initialVelocity;
-(float)dampingRatio;
-(id)initWithDampingRatio:(float)arg1 initialVelocity:(CGVector)arg2 ;
-(id)initWithDampingRatio:(float)arg1 ;
-(double)settlingDuration;
@end
