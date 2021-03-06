/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusDebugQuickLookImageDrawing.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying> {

	NSMutableArray* _mutableOccludingRegions;
	_UIFocusRegion* _originalRegion;
	CGRect _frame;

}

@property (assign,setter=_setFrame:,nonatomic) CGRect frame;                                                                                            //@synthesize frame=_frame - In the implementation block
@property (setter=_setOriginRegion:,getter=_originalRegion,nonatomic,retain) _UIFocusRegion * originalRegion;                                           //@synthesize originalRegion=_originalRegion - In the implementation block
@property (setter=_setMutableOccludingRegions:,getter=_mutableOccludingRegions,nonatomic,retain) NSMutableArray * mutableOccludingRegions;              //@synthesize mutableOccludingRegions=_mutableOccludingRegions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1 ;
+(id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(char)arg3 ;
+(id)_regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(char)_canOccludeRegionsBelow;
-(char)_canBeOccludedByRegionsAbove;
-(unsigned)_boundariesBlockingFocusMovement:(id)arg1 ;
-(char)_shouldCropRegionToSearchArea;
-(id)_originalRegion;
-(id)_resizeToRect:(CGRect)arg1 ;
-(void)_setFrame:(CGRect)arg1 ;
-(unsigned)_focusableBoundaries;
-(void)_setOriginRegion:(id)arg1 ;
-(void)_setMutableOccludingRegions:(id)arg1 ;
-(id)_mutableOccludingRegions;
-(id)_subregionWithFrame:(CGRect)arg1 occludedByRegion:(id)arg2 ;
-(void)_addOccludingRegion:(id)arg1 ;
-(id)_visibleSubregionsWhenOccludedByRegion:(id)arg1 ;
-(id)_defaultFocusItem;
-(id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2 ;
-(int)_preferredDistanceComparisonType;
-(unsigned)_effectiveFocusableBoundariesForHeading:(unsigned)arg1 ;
-(unsigned)_effectiveBoundariesBlockingFocusMovement:(id)arg1 ;
-(id)_occludingRegions;
-(void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
@end

