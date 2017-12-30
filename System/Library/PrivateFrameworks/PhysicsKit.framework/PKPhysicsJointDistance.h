/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointDistance : PKPhysicsJoint {

	unsigned* _jointDef : 2DistanceJointDef;
	unsigned* _joint : 2DistanceJoint;
	CGPoint _anchorA;
	CGPoint _anchorB;

}

@property (assign,nonatomic) float damping; 
@property (assign,nonatomic) float frequency; 
@property (assign,nonatomic) float length; 
@property (assign,nonatomic) char collideConnected; 
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(CGPoint)arg3 localAnchorB:(CGPoint)arg4 ;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(char)collideConnected;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDamping:(float)arg1 ;
-(float)length;
-(void)setLength:(float)arg1 ;
-(float)damping;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
-(void)setCollideConnected:(char)arg1 ;
-(void)create;
@end

