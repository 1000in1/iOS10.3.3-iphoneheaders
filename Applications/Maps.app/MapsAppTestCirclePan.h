/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsAppTest.h>

@interface MapsAppTestCirclePan : MapsAppTest {

	SCD_Struct_Ma20 _circlePoints[4];
	char _isSubTest;
	int _iterations;
	double _pitch;
	double _yaw;
	double _animationDuration;
	double _circleDistance;
	SCD_Struct_Ma20 _endPoint;

}

@property (assign,nonatomic) SCD_Struct_Ma20 endPoint;              //@synthesize endPoint=_endPoint - In the implementation block
@property (assign,nonatomic) double pitch;                          //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double yaw;                            //@synthesize yaw=_yaw - In the implementation block
@property (assign,nonatomic) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) int iterations;                        //@synthesize iterations=_iterations - In the implementation block
@property (assign) double circleDistance;                           //@synthesize circleDistance=_circleDistance - In the implementation block
-(char)runTest;
-(id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3 ;
-(void)circlePanLoadFinished;
-(void)animateCircle:(int)arg1 completion:(/*^block*/id)arg2 ;
-(double)circleDistance;
-(void)setCircleDistance:(double)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setEndPoint:(SCD_Struct_Ma20)arg1 ;
-(double)animationDuration;
-(void)setIterations:(int)arg1 ;
-(int)iterations;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(double)yaw;
-(void)setYaw:(double)arg1 ;
-(SCD_Struct_Ma20)endPoint;
@end

