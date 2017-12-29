/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface MonthWorkoutIndicator : CALayer {

	CALayer* _backgroundLayer;
	char _hasWorkout;

}

@property (assign,nonatomic) char hasWorkout;              //@synthesize hasWorkout=_hasWorkout - In the implementation block
+(id)filledWorkoutCircleWithSize:(CGSize)arg1 ;
+(id)fitnessColors;
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(void)layoutSublayers;
-(void)setHasWorkout:(char)arg1 ;
-(char)hasWorkout;
@end
