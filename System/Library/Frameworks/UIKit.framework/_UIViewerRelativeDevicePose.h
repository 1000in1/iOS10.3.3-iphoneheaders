/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {

	_UIMotionEffectAcceleratedOutputRange* _acceleratedOutputRange;
	float _planarRotationAngle;
	UIOffset _viewerOffset;

}

@property (assign,nonatomic) UIOffset viewerOffset;                  //@synthesize viewerOffset=_viewerOffset - In the implementation block
@property (assign,nonatomic) float planarRotationAngle;              //@synthesize planarRotationAngle=_planarRotationAngle - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)_reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIOffset)viewerOffset;
-(void)setViewerOffset:(UIOffset)arg1 ;
-(void)_setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(id)_acceleratedOutputRange;
-(UIOffset)_acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(float)planarRotationAngle;
-(void)setPlanarRotationAngle:(float)arg1 ;
@end
