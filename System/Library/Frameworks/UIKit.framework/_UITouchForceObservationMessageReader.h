/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITouchForceObservationMessageReading.h>

@class NSString;

@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading> {

	char _shouldFilterDueToSystemGestures;
	float _touchForce;
	double _timestamp;
	CGPoint _centroid;

}

@property (assign,nonatomic) float touchForce;                                  //@synthesize touchForce=_touchForce - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint centroid;                                  //@synthesize centroid=_centroid - In the implementation block
@property (assign,nonatomic) char shouldFilterDueToSystemGestures;              //@synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setTouchForce:(float)arg1 ;
-(char)shouldFilterDueToSystemGestures;
-(float)touchForce;
-(CGPoint)centroid;
-(void)setShouldFilterDueToSystemGestures:(char)arg1 ;
-(void)setCentroid:(CGPoint)arg1 ;
@end

