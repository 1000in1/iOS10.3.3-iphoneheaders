/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@class UIBezierPath;

@interface GAXPathInterpolator : NSObject {

	UIBezierPath* _startingPath;
	UIBezierPath* _endingPath;
	void* _interpolationPathElementMappings;

}

@property (nonatomic,copy) UIBezierPath * startingPath;                           //@synthesize startingPath=_startingPath - In the implementation block
@property (nonatomic,copy) UIBezierPath * endingPath;                             //@synthesize endingPath=_endingPath - In the implementation block
@property (assign,nonatomic) void* interpolationPathElementMappings;              //@synthesize interpolationPathElementMappings=_interpolationPathElementMappings - In the implementation block
-(id)initWithStartingPath:(id)arg1 endingPath:(id)arg2 ;
-(id)interpolatedPathForProgress:(float)arg1 ;
-(void)setStartingPath:(UIBezierPath *)arg1 ;
-(void)setInterpolationPathElementMappings:(void*)arg1 ;
-(void*)interpolationPathElementMappings;
-(id)_enhancedByAddingPointsMatchingPath:(id)arg1 originalPath:(id)arg2 ;
-(CGPoint)_pointFromStartingPointAtDistance:(float)arg1 inPath:(id)arg2 ;
-(void)setEndingPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)startingPath;
-(UIBezierPath *)endingPath;
-(id)init;
-(void)dealloc;
@end

