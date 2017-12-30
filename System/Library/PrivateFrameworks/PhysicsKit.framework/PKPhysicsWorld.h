/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray;

@interface PKPhysicsWorld : NSObject <NSCoding> {

	unsigned* _world : 2World;
	unsigned _gravity : 2Vec2;
	BOOL _doSleep;
	double _accumulatedDt;
	PKContactListener* _contactListener;
	float _speed;
	NSMutableArray* _bodies;
	NSMutableArray* _joints;
	NSMutableArray* _postStepBlocks;
	PKDebugDrawPacket* drawPacket;

}

@property (assign,nonatomic) BOOL _doSleep; 
@property (nonatomic,retain) NSMutableArray * _bodies; 
@property (nonatomic,readonly) PKCAether* aether; 
@property (nonatomic,readonly) unsigned* _world : 2World; 
@property (assign,nonatomic) unsigned _gravity : 2Vec2; 
@property (assign,nonatomic) CGVector gravity; 
@property (assign,nonatomic) float speed; 
@property (assign,nonatomic) float velocityThreshold; 
@property (assign,nonatomic) id<PKPhysicsContactDelegate> contactDelegate; 
+(id)world;
-(void)__init__;
-(void)removeAllFields;
-(float)velocityThreshold;
-(id)sampleFields:(CGRect)arg1 categories:(unsigned)arg2 dataSize:(CGSize)arg3 ;
-(CGVector)evalForce:(unsigned)arg1 point:(CGPoint)arg2 ;
-(unsigned)_gravity;
-(BOOL)_doSleep;
-(NSMutableArray *)_bodies;
-(void)set_bodies:(NSMutableArray *)arg1 ;
-(void)set_doSleep:(BOOL)arg1 ;
-(void)set_gravity:(unsigned)arg1 ;
-(id)init;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setSpeed:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)speed;
-(unsigned*)_world;
-(void)removeJoint:(id)arg1 ;
-(void)addJoint:(id)arg1 ;
-(void)addBody:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(void)setCollisionDelegate:(id)arg1 ;
-(void)addField:(id)arg1 ;
-(void)removeField:(id)arg1 ;
-(void)debugDraw:(float)arg1 matrix:(_GLKMatrix4)arg2 showsPhysics:(BOOL)arg3 showsOutlineInterior:(BOOL)arg4 showsFields:(BOOL)arg5 ;
-(const PKDebugDrawPacket*)debugDrawPacket;
-(id<PKPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<PKPhysicsContactDelegate>)arg1 ;
-(id)collisionDelegate;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)stepWithTime:(double)arg1 velocityIterations:(unsigned)arg2 positionIterations:(unsigned)arg3 ;
-(CGVector)gravity;
-(void)setGravity:(CGVector)arg1 ;
-(void)_runBlockOutsideOfTimeStep:(/*^block*/id)arg1 ;
-(void)removeAllJoints;
-(id)joints;
-(void)setVelocityThreshold:(float)arg1 ;
-(id)bodies;
-(PKCAether*)aether;
-(char)hasBodies;
-(char)hasFields;
-(void)enumerateBodiesAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateBodiesAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)bodyAtPoint:(CGPoint)arg1 ;
-(id)bodyInRect:(CGRect)arg1 ;
-(id)bodyAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(CGVector)sampleFields:(CGPoint)arg1 ;
-(2)sampleFieldsAt:;
-(void)removeAllBodies;
@end

