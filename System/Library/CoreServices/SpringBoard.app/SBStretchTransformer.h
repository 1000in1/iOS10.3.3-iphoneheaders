/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <SpringBoard/SBDosidoAnimator.h>

@class CAMutableMeshTransform, UIView, SBStretchTransformerView, NSString;

@interface SBStretchTransformer : NSObject <CAAnimationDelegate, SBDosidoAnimator> {

	float _percentage;
	CAMutableMeshTransform* _mesh;
	/*^block*/id _completionBlock;
	float _stretchFactor;
	UIView* _parentView;
	SBStretchTransformerView* _transformView;
	UIView* _view;
	unsigned _anchorEdge;
	int _orientation;

}

@property (assign,setter=_setAnchorEdge:,nonatomic) unsigned anchorEdge;              //@synthesize anchorEdge=_anchorEdge - In the implementation block
@property (assign,setter=_setOrientation:,nonatomic) int orientation;                 //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UIView * view;                                           //@synthesize view=_view - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isStepped,nonatomic,readonly) char stepped; 
@property (assign,nonatomic) float stepPercentage; 
-(float)stepPercentage;
-(void)setStepPercentage:(float)arg1 ;
-(void)animateDosidoWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelDosido;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(char)isStepped;
-(id)initWithParentView:(id)arg1 anchorEdge:(unsigned)arg2 orientation:(int)arg3 ;
-(void)_setAnchorEdge:(unsigned)arg1 ;
-(void)_setOrientation:(int)arg1 ;
-(void)_setStretchFactor:(float)arg1 ;
-(void)updateMeshTransform:(id)arg1 stretchFactor:(float)arg2 ;
-(unsigned)anchorEdge;
-(void)_animateToZeroStretchFactor;
-(void)dealloc;
-(UIView *)view;
-(int)orientation;
-(void)setView:(UIView *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
@end

