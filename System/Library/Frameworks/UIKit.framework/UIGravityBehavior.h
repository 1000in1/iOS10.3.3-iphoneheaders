/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {

	CGPoint _gravity;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) CGVector gravityDirection; 
@property (assign,nonatomic) float angle; 
@property (assign,nonatomic) float magnitude; 
+(char)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(NSArray *)items;
-(void)removeItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)setGravityDirection:(CGVector)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)setMagnitude:(float)arg1 ;
-(void)_addGravityItem:(id)arg1 ;
-(void)setXComponent:(float)arg1 yComponent:(float)arg2 ;
-(CGPoint)gravity;
-(float)magnitude;
-(void)setAngle:(float)arg1 magnitude:(float)arg2 ;
-(float)yComponent;
-(void)setGravity:(CGPoint)arg1 ;
-(float)xComponent;
-(CGVector)gravityDirection;
-(CGPoint)denormalizedGravity;
-(void)setXComponent:(float)arg1 ;
-(void)setYComponent:(float)arg1 ;
-(void)_setAngle:(float)arg1 magnitude:(float)arg2 ;
@end

