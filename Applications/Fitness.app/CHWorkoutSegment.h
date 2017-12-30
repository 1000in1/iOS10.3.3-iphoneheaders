/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, HKQuantity;

@interface CHWorkoutSegment : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _activeEnergy;
	HKQuantity* _distance;
	double _elapsedTime;

}

@property (nonatomic,copy) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergy;              //@synthesize activeEnergy=_activeEnergy - In the implementation block
@property (nonatomic,retain) HKQuantity * distance;                  //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double elapsedTime;                     //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)_decimalNumberFormatter;
-(id)formattedDurationValue;
-(id)formattedDistanceValueForUnit:(id)arg1 ;
-(id)formattedPaceUsingFormatType:(int)arg1 ;
-(id)formattedActiveEnergyValueForUnit:(id)arg1 ;
-(id)description;
-(void)setDistance:(HKQuantity *)arg1 ;
-(HKQuantity *)distance;
-(double)elapsedTime;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setElapsedTime:(double)arg1 ;
-(void)setActiveEnergy:(HKQuantity *)arg1 ;
-(HKQuantity *)activeEnergy;
@end

