/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Compass/Compass-Structs.h>
#import <CompassUI/CompassRotatingView.h>

@class CAShapeLayer;

@interface CompassBearingView : CompassRotatingView {

	CAShapeLayer* _bearingDeviationLayer;
	float _bearing;
	float _radius;
	float _innerRadius;
	float _outerRadius;
	float _startAngle;
	float _endAngle;

}

@property (assign,nonatomic) float bearing;                  //@synthesize bearing=_bearing - In the implementation block
@property (assign,nonatomic) float innerRadius;              //@synthesize innerRadius=_innerRadius - In the implementation block
@property (assign,nonatomic) float outerRadius;              //@synthesize outerRadius=_outerRadius - In the implementation block
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setInnerRadius:(float)arg1 ;
-(float)innerRadius;
-(void)setOuterRadius:(float)arg1 ;
-(void)setCompassHeading:(double)arg1 ;
-(void)setBearing:(float)arg1 ;
-(float)bearing;
-(float)outerRadius;
@end

