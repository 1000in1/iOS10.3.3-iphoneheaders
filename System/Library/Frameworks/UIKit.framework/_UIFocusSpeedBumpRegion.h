/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusRegion.h>

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion {

	unsigned _speedBumpEdges;

}

@property (assign,nonatomic) unsigned speedBumpEdges;              //@synthesize speedBumpEdges=_speedBumpEdges - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 speedBumpEdges:(unsigned)arg2 ;
-(unsigned)speedBumpEdges;
-(char)_canOccludeRegionsBelow;
-(char)_canBeOccludedByRegionsAbove;
-(unsigned)_boundariesBlockingFocusMovement:(id)arg1 ;
-(void)setSpeedBumpEdges:(unsigned)arg1 ;
@end
