/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXRuntime/AXRuntime-Structs.h>
@interface AXElementGrouper : NSObject {

	float _thresholdForDeterminingEqualSize;
	int _heuristics;

}

@property (assign,nonatomic) int heuristics;                                        //@synthesize heuristics=_heuristics - In the implementation block
@property (nonatomic,readonly) unsigned minimumGroupSize; 
@property (nonatomic,readonly) unsigned maximumGroupSize; 
@property (nonatomic,readonly) unsigned preferredGroupSize; 
@property (nonatomic,readonly) float thresholdForDeterminingEqualSize;              //@synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize - In the implementation block
-(void)setHeuristics:(int)arg1 ;
-(int)heuristics;
-(id)init;
-(id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned*)arg2 ;
-(id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(char)arg2 ;
-(id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(char)arg2 ;
-(unsigned)minimumGroupSize;
-(float)thresholdForDeterminingEqualSize;
-(unsigned)preferredGroupSize;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithHeuristics:(int)arg1 ;
-(id)groupElementsInRootGroup:(id)arg1 ;
-(char)_frame:(CGRect)arg1 isApproximatelySameSizeAsFrame:(CGRect)arg2 ;
-(unsigned)maximumGroupSize;
@end

